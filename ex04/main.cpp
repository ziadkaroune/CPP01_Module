#include <iostream>
#include <fstream>
#include <string>


int main(int ac , char **av)
{
    
    std::string line;
    char z;
    int pos;
    std::string s1;
    std::string s2;

    if(ac != 4)
    {
        std::cout << "ERROR ARGS | <filename> <string1> <string2>"<<std::endl;
        return 1;
    }

    std::ifstream readFile(av[1]);

    if(!readFile)
    {
        std::cout << "Error | Enable to open the file"<<std::endl;
        return 1;
    }

    while(!readFile.eof() && readFile >> std::noskipws >> z)
            line += z;

    readFile.close();

    std::ofstream   newfile(std::string (av[1])+ ".replace");
    if(!newfile)
    {
          std::cout << "Error | Enable to create the file"<<std::endl;
        return 1;
    }
    
for (int i = 0; i < (int)line.size(); i++)
	{
		pos = line.find(av[2], i);  //get position of the first commom letter
		if (pos != -1 && pos == i)  //find the comon one 
		{
			newfile << av[3];
			i += std::string(av[2]).size() - 1; // skip the comon letter
		}
		else
			newfile << line[i];
	}
    newfile.close();
 
return 0;
}
