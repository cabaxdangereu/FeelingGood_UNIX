FILE=./a.out
if [ -f "$FILE" ]; then
    rm a.out
else 
    echo "$FILE n'existe pas !"
fi