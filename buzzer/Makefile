clean:
	@ rm main.asm  main.ihx  main.lk  main.lst  main.map  main.mem  main.rel  main.rst  main.sym main.hex -f 

compile: clean
	@ echo "Compiled"
	@ sdcc --Werror --std-c99 -mmcs51 main.c

	@ echo ".hex created"
	@ packihx main.ihx > main.hex

load:
	stcgal -D -p /dev/ttyCH341USB0 -P stc89 main.hex
