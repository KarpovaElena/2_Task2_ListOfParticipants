testrecog:testrecog.o recogniser.o tabel.o
	g++ -o testrecog testrecog.o recogniser.o tabel.o `pkg-config --libs --cflags opencv4`

testrecog.o:testrecog.cpp
	g++ -c testrecog.cpp -I.. --std=c++11 `pkg-config --libs --cflags opencv4`


recogniser.o:../recogniser.cpp
	g++ -c ../recogniser.cpp -I.. --std=c++11 `pkg-config --libs --cflags opencv4`

tabel.o:../tabel.cpp
	g++ -c ../tabel.cpp -I.. --std=c++11


clean:
	rm *.o ../*.o ./testrecog
