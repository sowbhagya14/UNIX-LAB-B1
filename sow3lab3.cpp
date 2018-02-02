from the lab session 3 i have learnt the following  things:
 1) Display third column of filename.csv without printing the header "CGPA" also sort the same

   cut -d , -f 3 Lab3.csv |grep -v CGPA | sort -g

2) Display only current time using date command

   date +'%r'

3) Use Unique with all possible options



4) Print number of lines for ls -l command




5) Display USN from 7-14 along with other fields

  head -n 15 Lab3.csv | tail -n 6

