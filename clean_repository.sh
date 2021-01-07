FILE=./a.out
FILE2=./enumerate_numbers
if [ -f "$FILE" ]; then
    rm a.out
fi
if [ -f "$FILE2" ]; then
    rm enumerate_numbers
fi
#suppression de fichier s il existe