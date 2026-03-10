#include <iostream> // cout기능을 사용하기 위한 헤더 파일
using namespace std; // std::cout 대신 cout을 사용할 수 있도록 하는 선언

int main() { 
    // main 함수: 프로그램의 시작점
    // {} 안에 프로그램의 실행 코드가 들어감, 함수들의 묶음을 의미
    char my_name[] = "SeongWon-Seol"; // char 배열 my_name을 선언하고 문자열 "SeongWon-Seol" 입력
    // 문자열이기 때문에 char 배열로 선언하였으며, ""를 이용하여 문자열임을 표시
    // []는 배열을 선언할 때 사용되는 기호. 문자열의 갯수를 정하여 수를 입력해야 하나 비워 둠으로서 자동으로 입력.
    cout << my_name << endl;
    // cout : c++의 기본자료형으로 printf와 같은 역할을 함.
    // << : 출력 연산자
    // my_name : 출력할 문자열이 저장된 변수
    // endl : 줄바꿈을 의미하는 조작자=, 출력 후 줄을 바꿔줌
    // cout을 이용하여 my_name에 저장된 문자열을 출력하고, endl로 줄바꿈
    return 0; // main 함수가 정상적으로 종료되었음을 나타내는 반환값
}