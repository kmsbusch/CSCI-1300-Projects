{"filter":false,"title":"readingFileLinesTemplate.cpp","tooltip":"/Hmwk6/readingFileLinesTemplate.cpp","undoManager":{"mark":34,"position":34,"stack":[[{"start":{"row":0,"column":0},"end":{"row":20,"column":0},"action":"insert","lines":["//create an output file stream for writing to file","ifstream myfile;","//open the file file1.txt with the file stream","myfile.open(“file1.txt”);","if (myfile.is_open()){","// do things with the file","string line = \"\";","int lineidx = 0;","// read each line from the file","while (getline(myfile, line)) {","// print each line read from the file","cout << lineidx << \": \" << line << endl;","// increment index(count of lines in the file)","Lineidx++;","}","} else {","cout << \"file open failed\" << endl;","}","// closing the file","myfile.close();",""],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":4,"column":0},"action":"insert","lines":["#include <iostream>","#include <fstream>","#include <string>","using namespace std;",""],"id":2}],[{"start":{"row":4,"column":0},"end":{"row":5,"column":0},"action":"insert","lines":["",""],"id":3}],[{"start":{"row":10,"column":0},"end":{"row":10,"column":4},"action":"insert","lines":["    "],"id":4}],[{"start":{"row":11,"column":0},"end":{"row":11,"column":4},"action":"insert","lines":["    "],"id":5}],[{"start":{"row":12,"column":0},"end":{"row":12,"column":4},"action":"insert","lines":["    "],"id":6}],[{"start":{"row":13,"column":0},"end":{"row":13,"column":4},"action":"insert","lines":["    "],"id":8}],[{"start":{"row":14,"column":0},"end":{"row":14,"column":4},"action":"insert","lines":["    "],"id":9}],[{"start":{"row":15,"column":0},"end":{"row":15,"column":4},"action":"insert","lines":["    "],"id":10}],[{"start":{"row":15,"column":4},"end":{"row":15,"column":8},"action":"insert","lines":["    "],"id":11}],[{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"insert","lines":["    "],"id":12}],[{"start":{"row":16,"column":4},"end":{"row":16,"column":8},"action":"insert","lines":["    "],"id":13}],[{"start":{"row":17,"column":0},"end":{"row":17,"column":4},"action":"insert","lines":["    "],"id":14}],[{"start":{"row":18,"column":0},"end":{"row":18,"column":4},"action":"insert","lines":["    "],"id":15}],[{"start":{"row":18,"column":4},"end":{"row":18,"column":8},"action":"insert","lines":["    "],"id":16}],[{"start":{"row":17,"column":4},"end":{"row":17,"column":8},"action":"insert","lines":["    "],"id":17}],[{"start":{"row":19,"column":0},"end":{"row":19,"column":4},"action":"insert","lines":["    "],"id":18}],[{"start":{"row":4,"column":0},"end":{"row":5,"column":0},"action":"insert","lines":["",""],"id":19},{"start":{"row":5,"column":0},"end":{"row":6,"column":0},"action":"insert","lines":["",""]},{"start":{"row":6,"column":0},"end":{"row":7,"column":0},"action":"insert","lines":["",""]}],[{"start":{"row":23,"column":2},"end":{"row":24,"column":0},"action":"insert","lines":["",""],"id":20}],[{"start":{"row":23,"column":1},"end":{"row":23,"column":2},"action":"remove","lines":[" "],"id":21}],[{"start":{"row":7,"column":0},"end":{"row":7,"column":1},"action":"insert","lines":["i"],"id":22},{"start":{"row":7,"column":1},"end":{"row":7,"column":2},"action":"insert","lines":["n"]},{"start":{"row":7,"column":2},"end":{"row":7,"column":3},"action":"insert","lines":["t"]}],[{"start":{"row":7,"column":3},"end":{"row":7,"column":4},"action":"insert","lines":[" "],"id":23},{"start":{"row":7,"column":4},"end":{"row":7,"column":5},"action":"insert","lines":["m"]},{"start":{"row":7,"column":5},"end":{"row":7,"column":6},"action":"insert","lines":["a"]},{"start":{"row":7,"column":6},"end":{"row":7,"column":7},"action":"insert","lines":["i"]},{"start":{"row":7,"column":7},"end":{"row":7,"column":8},"action":"insert","lines":["n"]},{"start":{"row":7,"column":8},"end":{"row":7,"column":9},"action":"insert","lines":["t"]}],[{"start":{"row":7,"column":8},"end":{"row":7,"column":9},"action":"remove","lines":["t"],"id":24}],[{"start":{"row":7,"column":8},"end":{"row":7,"column":10},"action":"insert","lines":["()"],"id":25}],[{"start":{"row":7,"column":10},"end":{"row":7,"column":11},"action":"insert","lines":["{"],"id":26}],[{"start":{"row":7,"column":11},"end":{"row":9,"column":1},"action":"insert","lines":["","    ","}"],"id":27}],[{"start":{"row":10,"column":0},"end":{"row":30,"column":15},"action":"remove","lines":["//create an output file stream for writing to file","ifstream myfile;","//open the file file1.txt with the file stream","myfile.open(“file1.txt”);","if (myfile.is_open()){","    // do things with the file","    string line = \"\";","    int lineidx = 0;","    // read each line from the file","    while (getline(myfile, line)) {","        // print each line read from the file","        cout << lineidx << \": \" << line << endl;","        // increment index(count of lines in the file)","        Lineidx++;","    }","}","else {","cout << \"file open failed\" << endl;","}","// closing the file","myfile.close();"],"id":28}],[{"start":{"row":8,"column":0},"end":{"row":8,"column":4},"action":"remove","lines":["    "],"id":29},{"start":{"row":8,"column":0},"end":{"row":28,"column":15},"action":"insert","lines":["//create an output file stream for writing to file","ifstream myfile;","//open the file file1.txt with the file stream","myfile.open(“file1.txt”);","if (myfile.is_open()){","    // do things with the file","    string line = \"\";","    int lineidx = 0;","    // read each line from the file","    while (getline(myfile, line)) {","        // print each line read from the file","        cout << lineidx << \": \" << line << endl;","        // increment index(count of lines in the file)","        Lineidx++;","    }","}","else {","cout << \"file open failed\" << endl;","}","// closing the file","myfile.close();"]}],[{"start":{"row":8,"column":0},"end":{"row":8,"column":4},"action":"insert","lines":["    "],"id":30},{"start":{"row":9,"column":0},"end":{"row":9,"column":4},"action":"insert","lines":["    "]},{"start":{"row":10,"column":0},"end":{"row":10,"column":4},"action":"insert","lines":["    "]},{"start":{"row":11,"column":0},"end":{"row":11,"column":4},"action":"insert","lines":["    "]},{"start":{"row":12,"column":0},"end":{"row":12,"column":4},"action":"insert","lines":["    "]},{"start":{"row":13,"column":0},"end":{"row":13,"column":4},"action":"insert","lines":["    "]},{"start":{"row":14,"column":0},"end":{"row":14,"column":4},"action":"insert","lines":["    "]},{"start":{"row":15,"column":0},"end":{"row":15,"column":4},"action":"insert","lines":["    "]},{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"insert","lines":["    "]},{"start":{"row":17,"column":0},"end":{"row":17,"column":4},"action":"insert","lines":["    "]},{"start":{"row":18,"column":0},"end":{"row":18,"column":4},"action":"insert","lines":["    "]},{"start":{"row":19,"column":0},"end":{"row":19,"column":4},"action":"insert","lines":["    "]},{"start":{"row":20,"column":0},"end":{"row":20,"column":4},"action":"insert","lines":["    "]},{"start":{"row":21,"column":0},"end":{"row":21,"column":4},"action":"insert","lines":["    "]},{"start":{"row":22,"column":0},"end":{"row":22,"column":4},"action":"insert","lines":["    "]},{"start":{"row":23,"column":0},"end":{"row":23,"column":4},"action":"insert","lines":["    "]},{"start":{"row":24,"column":0},"end":{"row":24,"column":4},"action":"insert","lines":["    "]},{"start":{"row":25,"column":0},"end":{"row":25,"column":4},"action":"insert","lines":["    "]},{"start":{"row":26,"column":0},"end":{"row":26,"column":4},"action":"insert","lines":["    "]},{"start":{"row":27,"column":0},"end":{"row":27,"column":4},"action":"insert","lines":["    "]},{"start":{"row":28,"column":0},"end":{"row":28,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":21,"column":12},"end":{"row":21,"column":13},"action":"remove","lines":["L"],"id":31}],[{"start":{"row":21,"column":12},"end":{"row":21,"column":13},"action":"insert","lines":["l"],"id":32}],[{"start":{"row":11,"column":16},"end":{"row":11,"column":17},"action":"remove","lines":["“"],"id":33}],[{"start":{"row":11,"column":16},"end":{"row":11,"column":17},"action":"insert","lines":["\""],"id":34}],[{"start":{"row":11,"column":26},"end":{"row":11,"column":27},"action":"remove","lines":["”"],"id":35}],[{"start":{"row":11,"column":26},"end":{"row":11,"column":27},"action":"insert","lines":["\""],"id":36}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":24,"column":10},"end":{"row":24,"column":10},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1551400600923,"hash":"201613ecae39d73e88bbe9f23acc9a9b75f4eeaa"}