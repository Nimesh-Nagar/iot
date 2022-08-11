<<notes
case expression in
    pattern1)
    statements
    ;;
    pattern2)
    statements
    ;;
    patternn)
    statements
    ;;
    *)
        statements
        ;;
    esac
notes

read -p "enter your country name : " countryname
case $countryname in
    India)
    echo "India is country that produces brilliant minds of the world"
    ;;
    Ireland)
        echo "A small country with rich culture"
        ;;
    *)
        echo " you doesn't belong to this planet"
        ;;
    esac


