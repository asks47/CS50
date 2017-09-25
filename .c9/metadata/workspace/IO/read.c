{"changed":true,"filter":false,"title":"read.c","tooltip":"/IO/read.c","value":"//to write into the file\n#include<stdio.h>\n\nint main()\n{\nFILE *ptr_file;\nchar buf[1000];\nint x;\n\nptr_file = fopen(\"test.txt\", \"r\");\n\nif(!ptr_file)\nreturn 1;\n\nwhile(fgets(buf,1000,ptr_file)!=NULL)\nprintf(\"%s\",buf);\n\nfclose(ptr_file);\nreturn 0;\n}\n","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":15,"column":31},"end":{"row":15,"column":32},"action":"insert","lines":["="],"id":46}],[{"start":{"row":15,"column":32},"end":{"row":15,"column":33},"action":"insert","lines":["N"],"id":47}],[{"start":{"row":15,"column":33},"end":{"row":15,"column":34},"action":"insert","lines":["U"],"id":48}],[{"start":{"row":15,"column":34},"end":{"row":15,"column":35},"action":"insert","lines":["L"],"id":49}],[{"start":{"row":15,"column":35},"end":{"row":15,"column":36},"action":"insert","lines":["L"],"id":50}],[{"start":{"row":15,"column":37},"end":{"row":16,"column":0},"action":"insert","lines":["",""],"id":51}],[{"start":{"row":16,"column":0},"end":{"row":16,"column":1},"action":"insert","lines":["P"],"id":52}],[{"start":{"row":16,"column":1},"end":{"row":16,"column":2},"action":"insert","lines":["R"],"id":53}],[{"start":{"row":16,"column":2},"end":{"row":16,"column":3},"action":"insert","lines":["I"],"id":54}],[{"start":{"row":16,"column":3},"end":{"row":16,"column":4},"action":"insert","lines":["N"],"id":55}],[{"start":{"row":16,"column":4},"end":{"row":16,"column":5},"action":"insert","lines":["T"],"id":56}],[{"start":{"row":16,"column":4},"end":{"row":16,"column":5},"action":"remove","lines":["T"],"id":57}],[{"start":{"row":16,"column":3},"end":{"row":16,"column":4},"action":"remove","lines":["N"],"id":58}],[{"start":{"row":16,"column":2},"end":{"row":16,"column":3},"action":"remove","lines":["I"],"id":59}],[{"start":{"row":16,"column":1},"end":{"row":16,"column":2},"action":"remove","lines":["R"],"id":60}],[{"start":{"row":16,"column":0},"end":{"row":16,"column":1},"action":"remove","lines":["P"],"id":61}],[{"start":{"row":16,"column":0},"end":{"row":16,"column":1},"action":"insert","lines":["p"],"id":62}],[{"start":{"row":16,"column":1},"end":{"row":16,"column":2},"action":"insert","lines":["r"],"id":63}],[{"start":{"row":16,"column":2},"end":{"row":16,"column":3},"action":"insert","lines":["i"],"id":64}],[{"start":{"row":16,"column":3},"end":{"row":16,"column":4},"action":"insert","lines":["n"],"id":65}],[{"start":{"row":16,"column":4},"end":{"row":16,"column":5},"action":"insert","lines":["t"],"id":66}],[{"start":{"row":16,"column":5},"end":{"row":16,"column":6},"action":"insert","lines":["f"],"id":67}],[{"start":{"row":16,"column":6},"end":{"row":16,"column":8},"action":"insert","lines":["()"],"id":68}],[{"start":{"row":16,"column":7},"end":{"row":16,"column":9},"action":"insert","lines":["\"\""],"id":69}],[{"start":{"row":16,"column":8},"end":{"row":16,"column":9},"action":"insert","lines":["%"],"id":70}],[{"start":{"row":16,"column":9},"end":{"row":16,"column":10},"action":"insert","lines":["s"],"id":71}],[{"start":{"row":16,"column":11},"end":{"row":16,"column":12},"action":"insert","lines":[","],"id":72}],[{"start":{"row":16,"column":12},"end":{"row":16,"column":13},"action":"insert","lines":["b"],"id":73}],[{"start":{"row":16,"column":13},"end":{"row":16,"column":14},"action":"insert","lines":["u"],"id":74}],[{"start":{"row":16,"column":14},"end":{"row":16,"column":15},"action":"insert","lines":["f"],"id":75}],[{"start":{"row":16,"column":16},"end":{"row":16,"column":17},"action":"insert","lines":[";"],"id":76}],[{"start":{"row":4,"column":15},"end":{"row":5,"column":0},"action":"insert","lines":["",""],"id":77}],[{"start":{"row":5,"column":0},"end":{"row":5,"column":1},"action":"insert","lines":["c"],"id":78}],[{"start":{"row":5,"column":1},"end":{"row":5,"column":2},"action":"insert","lines":["h"],"id":79}],[{"start":{"row":5,"column":2},"end":{"row":5,"column":3},"action":"insert","lines":["a"],"id":80}],[{"start":{"row":5,"column":3},"end":{"row":5,"column":4},"action":"insert","lines":["r"],"id":81}],[{"start":{"row":5,"column":4},"end":{"row":5,"column":5},"action":"insert","lines":[" "],"id":82}],[{"start":{"row":5,"column":5},"end":{"row":5,"column":6},"action":"insert","lines":["b"],"id":83}],[{"start":{"row":5,"column":6},"end":{"row":5,"column":7},"action":"insert","lines":["u"],"id":84}],[{"start":{"row":5,"column":7},"end":{"row":5,"column":8},"action":"insert","lines":["f"],"id":85}],[{"start":{"row":5,"column":8},"end":{"row":5,"column":10},"action":"insert","lines":["[]"],"id":86}],[{"start":{"row":5,"column":9},"end":{"row":5,"column":10},"action":"insert","lines":["1"],"id":87}],[{"start":{"row":5,"column":10},"end":{"row":5,"column":11},"action":"insert","lines":["0"],"id":88}],[{"start":{"row":5,"column":11},"end":{"row":5,"column":12},"action":"insert","lines":["0"],"id":89}],[{"start":{"row":5,"column":12},"end":{"row":5,"column":13},"action":"insert","lines":["0"],"id":90}],[{"start":{"row":5,"column":14},"end":{"row":5,"column":15},"action":"insert","lines":[";"],"id":91}],[{"start":{"row":12,"column":0},"end":{"row":14,"column":28},"action":"remove","lines":["","for(x=0; x<10; x++)","fprintf(ptr_file, \"%d\\n\",x);"],"id":92}],[{"start":{"row":13,"column":0},"end":{"row":14,"column":0},"action":"remove","lines":["",""],"id":93}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":0},"action":"insert","lines":["",""],"id":94}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"],"id":95}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["/"],"id":96}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":["t"],"id":97}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":4},"action":"insert","lines":["o"],"id":98}],[{"start":{"row":0,"column":4},"end":{"row":0,"column":5},"action":"insert","lines":[" "],"id":99}],[{"start":{"row":0,"column":5},"end":{"row":0,"column":6},"action":"insert","lines":["r"],"id":100}],[{"start":{"row":0,"column":6},"end":{"row":0,"column":7},"action":"insert","lines":["e"],"id":101}],[{"start":{"row":0,"column":7},"end":{"row":0,"column":8},"action":"insert","lines":["a"],"id":102}],[{"start":{"row":0,"column":8},"end":{"row":0,"column":9},"action":"insert","lines":["d"],"id":103}],[{"start":{"row":0,"column":9},"end":{"row":0,"column":10},"action":"insert","lines":[" "],"id":104}],[{"start":{"row":0,"column":10},"end":{"row":0,"column":11},"action":"insert","lines":["a"],"id":105}],[{"start":{"row":0,"column":11},"end":{"row":0,"column":12},"action":"insert","lines":[" "],"id":106}],[{"start":{"row":0,"column":12},"end":{"row":0,"column":13},"action":"insert","lines":["f"],"id":107}],[{"start":{"row":0,"column":13},"end":{"row":0,"column":14},"action":"insert","lines":["i"],"id":108}],[{"start":{"row":0,"column":14},"end":{"row":0,"column":15},"action":"insert","lines":["l"],"id":109}],[{"start":{"row":0,"column":15},"end":{"row":0,"column":16},"action":"insert","lines":["e"],"id":110}],[{"start":{"row":0,"column":16},"end":{"row":0,"column":17},"action":"insert","lines":[" "],"id":111}],[{"start":{"row":0,"column":17},"end":{"row":0,"column":18},"action":"insert","lines":["c"],"id":112}],[{"start":{"row":0,"column":18},"end":{"row":0,"column":19},"action":"insert","lines":["o"],"id":113}],[{"start":{"row":0,"column":19},"end":{"row":0,"column":20},"action":"insert","lines":["n"],"id":114}],[{"start":{"row":0,"column":20},"end":{"row":0,"column":21},"action":"insert","lines":["t"],"id":115}],[{"start":{"row":0,"column":20},"end":{"row":0,"column":21},"action":"remove","lines":["t"],"id":116}],[{"start":{"row":0,"column":19},"end":{"row":0,"column":20},"action":"remove","lines":["n"],"id":117}],[{"start":{"row":0,"column":18},"end":{"row":0,"column":19},"action":"remove","lines":["o"],"id":118}],[{"start":{"row":0,"column":17},"end":{"row":0,"column":18},"action":"remove","lines":["c"],"id":119}],[{"start":{"row":0,"column":16},"end":{"row":0,"column":17},"action":"remove","lines":[" "],"id":120}],[{"start":{"row":0,"column":15},"end":{"row":0,"column":16},"action":"remove","lines":["e"],"id":121}],[{"start":{"row":0,"column":14},"end":{"row":0,"column":15},"action":"remove","lines":["l"],"id":122}],[{"start":{"row":0,"column":0},"end":{"row":0,"column":14},"action":"remove","lines":["//to read a fi"],"id":123},{"start":{"row":0,"column":0},"end":{"row":0,"column":1},"action":"insert","lines":["/"]}],[{"start":{"row":0,"column":1},"end":{"row":0,"column":2},"action":"insert","lines":["/"],"id":124}],[{"start":{"row":0,"column":2},"end":{"row":0,"column":3},"action":"insert","lines":["t"],"id":125}],[{"start":{"row":0,"column":3},"end":{"row":0,"column":4},"action":"insert","lines":["o"],"id":126}],[{"start":{"row":0,"column":4},"end":{"row":0,"column":5},"action":"insert","lines":[" "],"id":127}],[{"start":{"row":0,"column":5},"end":{"row":0,"column":6},"action":"insert","lines":["w"],"id":128}],[{"start":{"row":0,"column":6},"end":{"row":0,"column":7},"action":"insert","lines":["r"],"id":129}],[{"start":{"row":0,"column":7},"end":{"row":0,"column":8},"action":"insert","lines":["i"],"id":130}],[{"start":{"row":0,"column":8},"end":{"row":0,"column":9},"action":"insert","lines":["t"],"id":131}],[{"start":{"row":0,"column":9},"end":{"row":0,"column":10},"action":"insert","lines":["e"],"id":132}],[{"start":{"row":0,"column":10},"end":{"row":0,"column":11},"action":"insert","lines":[" "],"id":133}],[{"start":{"row":0,"column":11},"end":{"row":0,"column":12},"action":"insert","lines":["i"],"id":134}],[{"start":{"row":0,"column":12},"end":{"row":0,"column":13},"action":"insert","lines":["n"],"id":135}],[{"start":{"row":0,"column":13},"end":{"row":0,"column":14},"action":"insert","lines":["t"],"id":136}],[{"start":{"row":0,"column":14},"end":{"row":0,"column":15},"action":"insert","lines":["o"],"id":137}],[{"start":{"row":0,"column":15},"end":{"row":0,"column":16},"action":"insert","lines":[" "],"id":138}],[{"start":{"row":0,"column":16},"end":{"row":0,"column":17},"action":"insert","lines":["t"],"id":139}],[{"start":{"row":0,"column":17},"end":{"row":0,"column":18},"action":"insert","lines":["h"],"id":140}],[{"start":{"row":0,"column":18},"end":{"row":0,"column":19},"action":"insert","lines":["e"],"id":141}],[{"start":{"row":0,"column":19},"end":{"row":0,"column":20},"action":"insert","lines":[" "],"id":142}],[{"start":{"row":0,"column":20},"end":{"row":0,"column":21},"action":"insert","lines":["f"],"id":143}],[{"start":{"row":0,"column":21},"end":{"row":0,"column":22},"action":"insert","lines":["i"],"id":144}],[{"start":{"row":0,"column":22},"end":{"row":0,"column":23},"action":"insert","lines":["l"],"id":145}],[{"start":{"row":0,"column":23},"end":{"row":0,"column":24},"action":"insert","lines":["e"],"id":146}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":19,"column":1},"end":{"row":19,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1494225910000}