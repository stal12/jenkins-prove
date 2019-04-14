pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                bat 'mkdir build'
                bat 'cmake -S . -B build // -G "Visual Studio 16 2019"'
                bat 'cmake --build build -j7'
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