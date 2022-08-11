#!/bin/bash
i=0
until [ $i -gt 3 ]
do
    echo "i : $i"
    ((i=i+1))
done

echo
i=0
until [ $i -eq 3 ]
do
    echo "i : $i"
    ((i=i+1))
done
