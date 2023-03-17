CC = g++
TARGET = main
SRCS = Objeto.cc Libro.cc JuegoMesa.cc Ninio.cc DTObjetoRoto.cc main.cc
 
$(TARGET): $(SRCS)
	$(CC) -o $@ $^

clean:
	rm $(TARGET)