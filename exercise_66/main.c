#include<stdio.h>
//giai phuong trinh ax^4 + bx^2 + c = 0
#include<math.h>
float Nhap_n() {
	float a;
	printf("nhap n:");
	scanf("%f", &a);
	return a;
}

void Giai_Phuong_Trinh(float a, float b, float c) {
	if (a == 0) {
		if (b == 0) {
			if(c == 0){
				printf("co vo so nghiem thuoc tap hop R\n");
			}
			else{
				printf("vo ly tren R\n");
			}
			
		}
		else{
			float Trung_gian = -c / b;
			if (Trung_gian < 0)
			{
				printf("vo nghiem thuoc tap hop R\n");
			}
			else {
				printf("co 2 nghiem tren tap hop R\n");
				printf("x1 la %.2f\n", sqrt(Trung_gian));
				printf("x2 la %.2f\n", -sqrt(Trung_gian));
			}
		}
	}
	else {
		if (b == 0) {
			if (c == 0) {
				printf("co 1 nghiem la 0\n");
			}
			else {
				float Trung_gian = -c / a;
				if (Trung_gian < 0) {
					printf("vo nghiem\n");
				}
				else {
					printf("co 2 nghiem\n");
					printf("x1 : %.2f\n", sqrt(Trung_gian));
					printf("x1 : %.2f\n", -sqrt(Trung_gian));
				}
			}
		}
		else {
			float Delta = pow(b, 2) -  4*a*c;
			printf("delta = %.2f\n",Delta);
			if(Delta < 0){
				printf("vo nghiem tren tap hop R\n");
			}
			else if(Delta == 0){
				float Trung_gian = -b/(2*a);
				if(Trung_gian < 0){
					printf("vo nghiem\n");
				}
				else{
					printf("co 2 nghiem\n");
					printf("x1 = %.2f\n", sqrt(Trung_gian));
					printf("x1 = %.2f\n", -sqrt(Trung_gian));
				}	
			}	
			else{
				float Trung_gian_1 = (-b-sqrt(Delta))/(2*a);
				float Trung_gian_2 = (-b+sqrt(Delta))/(2*a);
				printf("Trung_gian_1 : %.2f\n", Trung_gian_1);
				printf("Trung_gian_2 : %.2f\n", Trung_gian_2);
				if(Trung_gian_1 < 0 && Trung_gian_2 < 0){
					printf("vo nghiem\n");
				}
				else if(Trung_gian_1 < 0 && Trung_gian_2 >= 0){
					printf("co 2 nghiem phan biet tren R\n");
					printf("x1 = %.2f\n", sqrt(Trung_gian_2));
					printf("x2 = %.2f\n", -sqrt(Trung_gian_2));
				}
				else if(Trung_gian_2 < 0 && Trung_gian_1 >= 0){
					printf("co 2 nghiem phan biet tren R\n");
					printf("x1 = %.2f\n", sqrt(Trung_gian_1));
					printf("x2 = %.2f\n", -sqrt(Trung_gian_1));
				}
				else{
					printf("co 4 nghiem phan biet tren R\n");
					printf("x1 = %.2f\n", sqrt(Trung_gian_1));
					printf("x2 = %.2f\n", -sqrt(Trung_gian_1));
					printf("x3 = %.2f\n", sqrt(Trung_gian_2));
					printf("x4 = %.2f\n", -sqrt(Trung_gian_2));
				}	
			}
		}	
	}
}
int main() {
	float a, b, c;
	a = Nhap_n();
	b = Nhap_n();
	c = Nhap_n();
	Giai_Phuong_Trinh(a, b, c);
	return 0;
}
