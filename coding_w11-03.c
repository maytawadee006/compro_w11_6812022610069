#include <stdio.h>

void inputScores(float arr[3][3]){
    for(int i=0; i<3;i++){
        printf("Enter scores for student %d:\n",i+1);
        printf("  Math: ");
        scanf("%f",&arr[i][0]);
        printf("  Physics: ");
        scanf("%f",&arr[i][1]);
        printf("  Chemistry: ");
        scanf("%f",&arr[i][2]);
    }
}
void printTable(float arr[3][3]){
    printf("\nScore Table:\n");
    printf("Student\tMath\tPhysics\tChemistry\n");
    for(int i=0;i<3;i++){
        printf("%d\t%.2f\t%.2f\t%.2f\n",i+1,arr[i][0],arr[i][1],arr[i][2]);
    }
}
void printAverage(float arr[3][3]){
    float sumMath = 0,sumPhysics=0,sumChemistry=0;
    for(int i=0;i<3;i++){
        sumMath+=arr[i][0];
        sumPhysics+=arr[i][1];
        sumChemistry+=arr[i][2];
    }
    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", sumMath/3);
    printf("Physics: %.2f\n", sumPhysics/3);
    printf("Chemistry: %.2f\n", sumChemistry/3);
}
int main(){
    float scores[3][3];
    inputScores(scores);
    printTable(scores);
    printAverage(scores);
return 0;
}
/*
เรียกใช้ฟังก์ชัน void inputScores เพื่อรับค่าคะแนน
วนลูปสำหรับรับค่าของนักเรียนแต่ละคน
แสดงข้อความให้กรอกคะแนนของนักเรียน
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาคณิตศาสตร์
รับค่าคะแนนวิชาคณิตศาสตร์จากผู้ใช้
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาฟิสิกส์
รับค่าคะแนนวิชาฟิสิกส์จากผู้ใช้
แสดงข้อความให้ผู้ใช้กรอกคะแนนวิชาเคมี
รับค่าคะแนนวิชาเคมีจากผู้ใช้
เรียกใช้ฟังก์ชัน void printTable เพื่อแสดงตารางคะแนน
แสดงข้อความ Score Table
วนลูปแสดงคะแนนของนักเรียนแต่ละคน
แสดงคะแนนแต่ละวิชา
เรียกใช้ฟังก์ชัน void printAverage เพื่อแสดงค่าเฉลี่ยคะแนนของแต่ละวิชา
ประกาศตัวแปรรวม sumMath sumPhysics sumChemistry
วนลูปบวกคะแนนของแต่ละวิชา
รวมคะแนนวิชา Math
รวมคะแนนวิชา Physics
รวมคะแนนวิชา Chemistry
แสดงข้อความ Average per subject
แสดงคะแนนเฉลี่ยวิชา Math
แสดงคะแนนเฉลี่ยวิชา Physics
แสดงคะแนนเฉลี่ยวิชา Chemistry
กำหนด float scores[3][3]
เรียกใช้ฟังก์ชัน inputScores เพื่อรับข้อมูล
เรียกใช้ฟังก์ชัน printTable เพื่อแสดงตาราง
เรียกใช้ฟังก์ชัน printAverage เพื่อแสดงค่าเฉลี่ย
จบการทำงานของโปรแกรม
*/

