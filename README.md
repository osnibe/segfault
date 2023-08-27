# segfault<br>
<br>
$ gcc -g -O0 -o seg seg.c<br>
-g デバッグ情報を付加<br>
-O0 最適化を行わない<br>
$ gdb ./seg<br>
(gdb) break main<br>
(gdb) run<br>
Starting program: /home/osnibe/c/seg <br>
<br>
Breakpoint 1, main () at seg.c:9<br>
9	  i = 3;<br>
(gdb) step<br>
10	  j = 5;<br>
(gdb) step<br>
12	  return 0;<br>
(gdb) print i<br>
$1 = 3<br>
(gdb) print j<br>
$2 = 5<br>
(gdb) quit<br>
