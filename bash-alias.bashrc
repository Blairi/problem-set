function pset()
{
    if [ ! -f $1.cpp ]
    then
	cp ./../../template.cpp $1.cpp
    fi
    touch $1.out
    touch $1.in
    vim -c "80vs" $1.cpp -c "wincmd w" -c "e $1.out" -c "sb" -c "e $1.in" -c "wincmd w" -c "wincmd w"
}

function prun()
{
    g++ $1.cpp -o $1;
    ./$1 < $1.in > $1.out;
}

# Custom aliases
alias pset='pset'
alias prun='prun'
