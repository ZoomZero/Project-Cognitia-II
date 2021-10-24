#

![](https://github.com/timattt/Project-Cognitia-II/blob/main/About/WorkingImages/Logo.jpg)



**Visit** [www.timattt.su](http://timattt.su/Cognitia-II.html)

**Watch** [trailer](https://youtu.be/-cFpnS6OwQo) 

# Содержание

1. [**Описание проекта**](https://github.com/timattt/Project-Cognitia-II#%D0%BE%D0%BF%D0%B8%D1%81%D0%B0%D0%BD%D0%B8%D0%B5-%D0%BF%D1%80%D0%BE%D0%B5%D0%BA%D1%82%D0%B0)
2. [**Прототип**](https://github.com/timattt/Project-Cognitia-II#%D0%BF%D1%80%D0%BE%D1%82%D0%BE%D1%82%D0%B8%D0%BF)
3. [**Установка**](https://github.com/timattt/Project-Cognitia-II#%D1%83%D1%81%D1%82%D0%B0%D0%BD%D0%BE%D0%B2%D0%BA%D0%B0)
4. [**Сборка**](https://github.com/timattt/Project-Cognitia-II#%D1%81%D0%B1%D0%BE%D1%80%D0%BA%D0%B0)
5. [**Для участников проекта**](https://github.com/timattt/Project-Cognitia-II/blob/main/About/forContributors.md)
6. [**Текущие задачи**](https://github.com/timattt/Project-Cognitia-II/projects/1)


<img src="https://github.com/timattt/Project-Cognitia-II/blob/main/About/WorkingImages/Icon.jpg" alt="drawing" width="200"/>

# Описание проекта

Проект призван упростить жизнь составителям курсов и методистам, предложив им гибкую и удобную систему редактирования материала, планирования времени и контроля знаний учеников.

**Главная задача** - наглядно представить учебный процесс в виде ориентированного графа, и предоставить инструменты для создания индивидуальных лабораторных для каждого обучающегося(или для группы обучающихся) в зависимости от его(их) успехов, с тем чтобы помочь освоить все навыки. 


**Сущности:**

* Методист - главный составитель, отвечает за организацию учебного процесса и планирование курса.
* Ментор - Преподаватель или доброволец, проверяющий задания и работающий с учениками. 
* Студент - человек, который хочет получить новые знания структурировано, эффективно и интересно.

### Философия проекта:

* **Со стороны студента:** Успеть за отведенное время (длительность всего курса) освоить предложенные навыки, понять для самого себя, что получается, а что нет, развиваться равномерно.

* **Со стороны ментора:** Помочь ученику в освоении навыков. Уровни не равносильны оценкам, они должны быть более объективны и более отражающими реальность, бессмысленно ставить что-то большее чем есть на самом деле, так как на их основании предлагаются либо дополнительные обучающие задачи(для тех кто в чем-то не разобрался или никак не может что-то понять), либо задачи сверх плана (для тех кто идет с опережением).

* **Со стороны Методиста:** Получить в руки инструмент, ускоряющий разроботку и доработку курса, для адаптивного изменения и выверения учебных планов, в зависимости от временных и прочих факторов. 

### Перейдем к специфике

Есть 5 реализованных программ:

* Редактор скиллов
* Редактор курса
* Сервер
* Клиент студента
* Клиент ментора


## Лаунчер

![](https://github.com/timattt/Project-Cognitia-II/blob/main/About/WorkingImages/launcher.png)

Программа для тестирования, соединяющая в себе все остальные, отсюда можно запустить то, что вам нужно в текущий момент.








## Редактор скиллов

Программа позволяет добавлять навыки, уровни и их описания. В текущем виде выглядит так:

![](https://github.com/timattt/Project-Cognitia-II/blob/main/About/WorkingImages/SkillpackFull.png)

Кнопки сверху позволяют создать, открыть или сохранить текущий скиллпак, а так же получить справку и вернуться обратно к лаунчеру. 
Работа с программой проста и понятна: Создаем скиллпак, добавляем навыки, градируем их по уровням, добавляем описание к каждому уровню. Затем все эти данные сохраняем, с тем чтобы использовать в следующей части. 

Для удобства работы на текущий момент реализована система автосохранения. Позволяющая видеть изменения, произошедние в редакторе скиллпака, в редакторе курса.

Планируется добавить несколько библиотек с описаниями скиллов с тем, чтобы ускорить эту монотонную работу.








## Редактор курса

Эта ядро создания курса.

![](https://github.com/timattt/Project-Cognitia-II/blob/main/About/WorkingImages/courseEditorFull.png)

Для работы с программой необходимо создать или выбрать редактируемый курс, и выбрать скиллпак, который будет в нем использоваться. 

Справа на поле отображаются звенья курса, к которым можно добавлять входные и выходные навыки (выбираемые в поле Available skills) путем перетаскивания кнопки "add skill" 
на поле к нужному курсу или в таблицу(добавится к текущему выбраному). При желании удалить скилл, необходимо либо выбрать его в таблице и нажать на кнопку Remove, либо перетащить на него кнопку "Remove skill".

Так же слева доступно редактирование описания данного урока и превью markdown. 

Чтобы добавить вершину графа необходимо нажать на кнопку Add node, чтобы добавить ребро - зажать правую кнопку мышки и вести к другому звену. 

Режим удаления позволяет удалить объекты путем клика по ним. 

Флажок Repaint all включает прорисовку всего поля целиком, а не отдельных вершин. Это нужно затем, что на некоторых компьютерах из-за специфики Qt проявляются графические артефакты.

В качестве временного развлечения была добавлена физика вершин, как материальных точек, ее параметры можно редактировать под полем. Она требует доработки и пока не очень удобна. Флажок Freeze отключает ее.








## Сервер

Обмен данных между ментором и студентом осуществляется через сервер.

![](https://github.com/timattt/Project-Cognitia-II/blob/main/About/WorkingImages/serverFull.png)

Реализован вариант портативного сервера, который запускается на машине методиста. (управляется кнопками START и STOP)

В директории с .exe должны лежать все материалы курса, и быть созданы поддиректории с именами студентов, которым будет разрешено получить курс, и прогресс которых будет храниться. Для этого есть кнопка Add Student.

Ведется Логирование всех действий и активных пользователей и менторов.

При подключении пользователя ему отправляется курс, скиллпак, и его персональные успехи.








## Клиент Студента

При запуске клиента студент видит следующее:

![](https://github.com/timattt/Project-Cognitia-II/blob/main/About/WorkingImages/studentClientStart.png)

Необходимо ввести свое имя (служит идентификатором, на сервере должна быть создана папка с тем же именем) IP сервера и порт.

Можно сохранить текущие данные полей в отдельный файл, чтобы не вводить их каждый раз, а просто выбрать их. Для этого есть кнопки Save Server и Choose server. 

После нажатия кнопки Connect, если что-то пошло не так вылетает ошибка и предлагается попробовать еще раз, в случае же если все хорошо открывается курс:

![](https://github.com/timattt/Project-Cognitia-II/blob/main/About/WorkingImages/studentClient.png)

На поле Студент может выбрать интересующий его блок, посмотреть его описание, и свои успехи по нему. В будущем будет добавлена возможность отправлять сделанные задания. 
Синие прогресс бары показывают насколько хорошо ты освоил тот или иной навык.

Если надо подключиться к другому серверу, есть кнопка choose server.

Ромашка - временное представление успехов, в будущем будет заменена на розу ветров, или на что-то более минималистичное. Смысл в том, чтобы она была ровной, без явных перегибов в ту или иную сторону. 








## Клиент Ментора

При входе в менторскую версию происходит примерно то же самое:

![](https://github.com/timattt/Project-Cognitia-II/blob/main/About/WorkingImages/mentorClientStart.png)

С той лишь разницей, что считается что менторская программа не попадет в руки кому не надо, поэтому имена менторов на сервере никак не закреплены. В будущем безопасность будет улучшена.



![](https://github.com/timattt/Project-Cognitia-II/blob/main/About/WorkingImages/mentorClient.png)

Ментор, помимо самого курса, получает еще и прогрессы каждого из учеников. Он может выбрать любого из них в поле Available Students и проверить его задания. 
Выбрав узел, ментор переходит к его содержимому. 

На текущий момент оценивание осуществляется путем движения лепестков ромашки, или выставления нужного значения на микшере.  

После этого необходимо отправить результаты на сервер, для их сохранения и передачи студенту. Для этого есть кнопка Save all and send. При этом пока нельзя сохранять ничего локально, что в будущем будет исправлено. 



# Прототип

Риализован прототип программы.
Техническое задание и описание можно найти [тут](https://github.com/timattt/Project-Cognitia-II/blob/main/About/PrototypeTechnicalTask/PrototypeTechnicalTask.md).
Ссылки на исполняемые файлы прототипа [тут](https://github.com/timattt/Project-Cognitia-II/releases/tag/0.4).

# Установка

Мы тщательно тестируем всю программу, после чего делаем релиз.
К каэждому релизу прилагается архив с исполняемыми файлами. На данный момент сборка производится только под Windows.
Если вы хотите работать на desktop дистрибутиве Linux, то рекомендуется собирать проект самостоятельно через [Qt creator](https://github.com/timattt/Project-Cognitia-II#qt-creator-%D0%B4%D0%BB%D1%8F-windows).
Сами релизы можно найти [тут](https://github.com/timattt/Project-Cognitia-II/releases).

# Сборка
## QT Creator для Windows
1. Устанавливаем **git** [отсюда](https://git-scm.com/).
2. Устанавливаем **Qt** [отсюда](https://www.qt.io/).
3. Клонируем репозиторий, переходим в папку с ним и далее в папку Sources.
4. Открываем файл Cognitia-II.pro.
5. Собрать и запустить теперь можно с помощью **QT Creator**.

## MinGW для Windows
1. Устанавливаем **git** [отсюда](https://git-scm.com/).
2. Устанавливаем **Qt** [отсюда](https://www.qt.io/).
3. Теперь идем в папку, куда установился QT. Добавляем в переменную окружения **PATH** три папки:
* **C:\Qt\6.1.2\mingw81_64\bin**
* **C:\Qt\Tools\CMake_64\bin**
* **C:\Qt\Tools\mingw810_64\bin**

(Версия Qt у вас может быть другая, но сути это не меняет)

5. Клонируем репозиторий, переходим в папку с ним и далее в папку Sources.
6. Открываем терминал в папке Sources из этой папки используем следующие команды:
 ```
mkdir build
cd build
qmake ..
mingw32-make.exe all
```
6. Теперь в папке **build** есть папки **debug** и **release**, а в них лежат исполняемые файлы.
