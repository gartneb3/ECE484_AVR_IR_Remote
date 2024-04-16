# ECE484_AVR_IR_Remote

This is for interfacing an IR remote and receiver on an Arduino Uno R3 for ECE484 using avr-gcc. Before uploading the code, be sure to have an appropriate AVR toolchain on your system. You also need to change the path_win_avr variable in compile_script.py to have the same path of your AVR bin folder. Then, run python compile_script.py 4 com#, where # is the COM port number your Arduino is connected to. Look at the compile script to see the commented lines that need to be changed based on your paths and needs (files_to_compile, directories, file_to_compile, and com_port).

For details on this project, visit the wiki page.
