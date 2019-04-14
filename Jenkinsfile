pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                bat 'mkdir build'
                bat 'cd build'
                bat 'cmake ..'
                bat 'cmake --build -j7'
                // cmakeBuild buildDir: 'build', generator: 'Visual Studio 16 2019', installation: 'InSearchPath', sourceDir: '.', cleanBuild: true, steps: [[withCmake: true]]
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}