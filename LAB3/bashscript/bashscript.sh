./abcde
if [ $? -eq 0 ] ; then
    ./longFich
    echo -e "\nwell done"
    exit 0
else
    echo -e "\nfailed"
    exit 1
fi
