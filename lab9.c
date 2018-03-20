clear
        echo "Menu "
        echo "1. COpy a File "
        echo "2. Remove a file "
        echo "3. Move a file"
        echo "4. Quit"
        echo "Enter ur Choice \c"
        read Choice
        case"$Choice"in
           1) echo "Enter File name to copy \c"
              read f1
              echo "Enter FIle name \c "
          read f2         
          if [ -f $f1 ]
          then
                  cp $f1 $f2
              else
                     echo "$f1 does not exist"
              fi
              ;;
          2) echo "Enter the File to be removed "
             read r1
             if [ -f $r1 ]
             then      
                   rm -i $r1
             else 
                  echo "$r1 file does not exist "
             fi
             ;;
         3)
            echo "Enter File name to move \c"
            read f1
            echo "Enter destination \c "
            read f2
            if [ -f $f1 ]
             then 
                 if [ -d $f2 ]
                 then
                      mv $f1 $f2
                 fi
             else
                 echo "$f1 does not exist"
            fi
            ;;
         4) 
             echo "Exit......."
             exit;;
        esac
                                                
       
         Menu
     1. COpy a File
     2. Remove a file
     3. Move a file
     4. Quit
        Enter ur Choice 1
        Enter File name to copy r1
        Enter FIle name r2
 
     Menu
     1. COpy a File
     2. Remove a file
     3. Move a file
         4. Quit
            Enter ur Choice 3
        Enter File name to move r1
        Enter destination r3
    
     Menu
     1. COpy a File
     2. Remove a file
     3. Move a file
         4. Quit
            Enter ur Choice 2
            Enter the File to be removed r1
         remove r1? y      

