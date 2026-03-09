# nohelpEngine
My attempt to learn C++ while making a football match engine.


## Set Up Instructions

Prior to compiling the current project, please ensure these steps are completed.<br>
1. In \DB Objects, the file 'ConnectionCredentials.h' is created and updated according to 'ConnectionCredentials.h.example'
2. The file 'libmysql.sll' has been copied to \FMEngine_Output
    2a. 'libmysql.sll' is typically located 'C:\Program Files\MySQL\MySQL Server 8.0\lib\libmysql.dll'. Be sure to copy the file and   not directly transfer the file<br>
    2b. You *may* need to create a file named 'FM_Engine.exe' in \FMEngine_Output for the task to compile and output correctly. First try without, and then with.<br>

### To build the project

Press
'''
Ctrl + Shift + B
'''

Select  
'''
Build Project Engine
'''

This will compile and build the project.

### To run the project

While in root directory, run
'''
.\FMEngine_Output\FM_Engine.exe
'''

This will display the executable to console