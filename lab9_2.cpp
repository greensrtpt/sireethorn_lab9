#include<iostream>
using namespace std;
//ขอให้เติมมาเฉพาะ function printO() โดยที่ไม่ต้องเติม function main() มาในช่องนี้

void printO(int N, int M) {
    if (N <= 0 || M <= 0) {
        std::cout << "Invalid input" << std::endl;
        return;
    }
    
    for (int i = 0; i < N; ++i) { 
        for (int j = 0; j < M; ++j) { 
            std::cout << "O";
        }
        std::cout << std::endl; 
    }
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
