# Отчёт по lab05

## Homework

1. Создаём директорию и удалённый репозиторий

_cd Dan10022002/workspace/tasks<br/>
mkdir task_lab05<br/>
cd task_lab05_

2. Инициализируем локальный репозиторий

_git init<br/>
git remote add origin https://github.com/Dan10022002/task_lab05.git_

3. Создаём CMakeLists.txt

_touch CMakeLists.txt<br/>
vim CMakeLists.txt_

![cmake](https://github.com/Dan10022002/task_lab05/blob/master/cmake.png)

4. Создём папку с тестами и добавляем туда test1.cpp

_mkdir tests<br/>
cd tests<br/>
touch test1.cpp<br/>
vim test1.cpp_

![test](https://github.com/Dan10022002/task_lab05/blob/master/test.png)

5. Добавляем в файл CMakeLists.txt код для запуска тестов

_cd ..<br/>
_touch CMakeLists.txt<br/>
vim CMakeLists.txt_

![cmake2](https://github.com/Dan10022002/task_lab05/blob/master/cmake2.png)

6. Создадаём файл .travis.yml

_touch .trvis.yml<br/>
vim .travis.yml_

![travis](https://github.com/Dan10022002/task_lab05/blob/master/travis.png)

7. Заливаем на гитхаб

_git add .<br/>
git commit -m "First commit"<br/>
git push origin master_

8. Авторизируемся на  https://travis-ci.org и запускаем тест сборки

![test](https://api.travis-ci.org/Dan10022002/task_lab05.svg?branch=master&status=passed)
