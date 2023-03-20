output: main.o ShortenSpace.o GetNumOfWords.o GetNumOfNonWSCharacters.o FixCapitalization.o ReplaceExclamation.o PrintMenu.o 
	g++ main.o ShortenSpace.o GetNumOfWords.o GetNumOfNonWSCharacters.o FixCapitalization.o ReplaceExclamation.o PrintMenu.o -o output

main.o: main.cpp 
	g++ -c main.cpp

ShortenSpace.o: ShortenSpace.cpp PrintMenu.h
	g++ -c ShortenSpace.cpp

GetNumOfWords.o: GetNumOfWords.cpp PrintMenu.h
	g++ -c GetNumOfWords.cpp

GetNumOfNonWSCharacters.o: GetNumOfNonWSCharacters.cpp PrintMenu.h
	g++ -c GetNumOfNonWSCharacters.cpp

FixCapitalization.o: FixCapitalization.cpp PrintMenu.h
	g++ -c FixCapitalization.cpp

ReplaceExclamation.o: ReplaceExclamation.cpp PrintMenu.h
	g++ -c ReplaceExclamation.cpp

PrintMenu.o: PrintMenu.cpp PrintMenu.h
	g++ -c PrintMenu.cpp

clean:
	rm *.o output