ls -l | awk 'NR % 2 == 1 {print "ls -l", $0}'

