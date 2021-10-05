#include <iostream>
using namespace std;
void demo(int v, int &r) ;                                              // ประกาศฟังชั่นdemo โดยรับค่าตัวแปร v เป็น int และเป็นแบบpass by value
                                                                        // รับตัวแปร r เป็น int และเป็นแบบ pass by reference


int main() {                                                            // ฟังชั่น main
    int v = 7;                                                          // กำหนดให้ตัวแปร v = 7
    int r = 7;                                                          // กำหนดให้ตัวแปร r = 7
    cout << "inside main() " << endl;                                   // แสดงคำว่า inside main() และเว้นบรรทัด
    cout << "v = " << v << ", address = " << &v << endl;                // แสดง v = และค่าตัวแปร v และ , address = แอดเดรสของ ตัวแปร v
    cout << "r = " << r << ", address = " << &r << endl;                // แสดง r = และค่าตัวแปร r และ , address = แอดเดรสของ ตัวแปร r


    demo(v, r);                                                         // เรียกใช้ฟังชั่น demo โดยส่งค่า v, r เข้าไปตามลำดับ (ข้ามไปอ่าน ฟังชั่น demo)
    
    cout << "inside main()--after calling demo()" << endl;              // แสดงคำว่า inside main()--after calling demo()
    cout << "v = " << v << ", address = " << &v << endl;                // แสดง v = และค่าตัวแปร v และ , address = แอดเดรสของ ตัวแปร v มีค่า 7 
    cout << "r = " << r << ", address = " << &r << endl;                // แสดง r = และค่าตัวแปร r และ , address = แอดเดรสของ ตัวแปร r มีค่า 17 ตัวแปร r เพิ่มค่าเป็น 17 จากในฟังชั่น demo
    return 0;
}

void demo(int v, int &r) 
{
    // parameter v: pass by value           เหมือนกับการคัดลอก ค่า ตัวแปรแต่เป็นตัวแปรคนละตัวเพราะอยู่คนละ address กัน
    // parameter r: pass by reference       เหมือนกับการคัดลอก ค่า - address มา แปลว่าตัวแปรจะเป็นตัวเดียวกันถ้าตัวใดตัวหนึ่งมีค่าเปลี่ยนไปอีกตัวจะเปลี่ยนไปด้วย
    cout << "inside demo()" << endl;                                    // แสดงคำว่า inside demo()
    cout << "v = " << v << ", address = " << &v << endl;                // แสดง v = และค่าตัวแปร v (7) และ , address = แอดเดรสของ ตัวแปร v ตัวแปรนี้เป็นตัวแปรคนละตัวกับตัวแปรในฟังชั่นmain
    cout << "r = " << r << ", address = " << &r << endl;                // แสดง r = และค่าตัวแปร r (7) และ , address = แอดเดรสของ ตัวแปร r ตัวแปรนี้เป็นตัวแปรเดียวกับตัวแปรในฟังชั่นmain
    v = v + 10;                                                         // บวกค่าตัวแปร v ไป 7 v = 17
    r = r + 10;                                                         // บวกค่าตัวแปร r ไป 7 r = 17
    cout << "inside demo()--after changing values " << endl;            // แสดงคำว่า inside demo()--after changing values
    cout << "v = " << v << ", address = " << &v << endl;                // แสดง v = และค่าตัวแปร v (17) และ , address = แอดเดรสของ ตัวแปร v ตัวแปรนี้เป็นตัวแปรคนละตัวกับตัวแปรในฟังชั่นmain
    cout << "r = " << r << ", address = " << &r << endl;                // แสดง r = และค่าตัวแปร r (17) และ , address = แอดเดรสของ ตัวแปร r ตัวแปรนี้เป็นตัวแปรเดียวกับตัวแปรในฟังชั่นmain
}

// สุมาลี จอดนาค สอนครับ