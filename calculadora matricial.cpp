// Programa que saca la suma,resta,division,multiplicaion entre dos matrices, pero ademas puede sacar la determinante y muchas otras 
// cosas mas de una matriz dada por el usuari@.
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main() {
	int columnasa,columnasb,escalar,filasa,filasb,i,j,k,opc,opc1,opc2;
	float p,q,r,s,s1,t,u,w,x,x2,x1,y4,yp,z;
	float a,b,c,n,n3,n33,o4,c1,d,d1,discriminante,e,f,h,h3,l,m,m1,matriza[100][100];
	float matrizd[100][100],matrizb[100][100],matrizbi[100][100],matrizc[100][100];
	// opc = opcion
	cout<<"\tBienvenid@ a tu calculadora matricial"<<endl;
	cout<<"Por favor elija una de las siguientes opciones:"<<endl;
	cout<<"1. Suma de dos matrices."<<endl;
	cout<<"2. Resta de dos matrices."<<endl;
	cout<<"3. Multiplicacion de dos matrices."<<endl;
	cout<<"4. Division de dos matrices."<<endl;
	cout<<"5. Determinante de una matriz."<<endl;
	cout<<"6. Matriz inversa."<<endl;
	cout<<"7. Matriz transpuesta."<<endl;
	cout<<"8. Rango de una matriz."<<endl;
	cout<<"9. Multiplicar una matriz por un escalar."<<endl;
	cout<<"10. Matriz triangular."<<endl;
	cout<<"11. Matriz diagonal."<<endl;
	cout<<"12. Matriz elevada."<<endl;
	cout<<"13. Factorizacion LU."<<endl;
	cout<<"14. Factorizacion Cholesky."<<endl;
	cout<<"15. Calculo de valores propios y vectores propios."<<endl;
	cout<<"Opcion: ";cin>>opc;
	switch (opc) {
	case 1:
		// Pidiendo el numero de filas y columnas de la primera matriz.
		cout<<"Por favor digite el numero de filas de la matriz A: ";cin>>filasa;
		cout<<"Por favor digite el numero de columnas de la matriz A: ";cin>>columnasa;
		// Almacenado los componentes de la matrizA.
		for(i=0;i<=filasa-1;i++){
			for (j=0;j<=columnasa-1;j++) {
				cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]:";cin>>matriza[i][j];
			}
		}
		// Pidiendo el numero de filas y columnas para la matrizB.
		cout<<"Por favor digite el numero de filas de la matriz B: ";cin>>filasb;
		cout<<"Por favor digite el numero de columnas de la matriz B: ";cin>>columnasb;
		// Almacenado los componentes de la matrizB.
		for(i=0;i<=filasb-1;i++){
			for(j=0;j<=columnasb-1;j++){
				cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]:";cin>>matrizb[i][j];
			}
		}
		// Solo se pueden sumar dos matrices del mismo tamaño.
		if((filasa==filasb) && (columnasa==columnasb)){
			// Sumando la matrizA y la matrizB.
			for(i=0;i<=filasb-1;i++){
				for(j=0;j<=columnasb-1;j++){
					matrizc[i][j] = matriza[i][j]+matrizb[i][j];
				}
			}
			// Mostrando la suma de las dos matrices.
			cout<<"\nLa suma de la matriz A y B es: "<<endl;
			for (i=0;i<=filasb-1;i++) {
				for (j=0;j<=columnasb-1;j++) {
					cout<<matrizc[i][j]<<" ";
				}
				cout<<""<<endl;
			}
		} else {
			cout<<"No se pueden sumar dos matrices que tienen diferente tamaño."<<endl;
		}
		break;
	case 2:
		// Pidiendo el numero de filas y columnas de la primera matriz.
		cout<<"Por favor digite el numero de filas de la matriz A: ";cin>>filasa;
		cout<<"Por favor digite el numero de columnas de la matriz A: ";cin>>columnasa;
		// Almacenado los componentes de la matrizA.
		for(i=0;i<=filasa-1;i++){
			for(j=0;j<=columnasa-1;j++){
				cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matriza[i][j];
			}
		}
		// Pidiendo el numero de filas y columnas para la matrizB.
		cout<<"Por favor digite el numero de filas de la matriz B: ";cin>>filasb;
		cout<<"Por favor digite el numero de columnas de la matriz B: ";cin>>columnasb;
		// Almacenado los componentes de la matrizB.
		for (i=0;i<=filasb-1;i++) {
			for (j=0;j<=columnasb-1;j++) {
				cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
			}
		}
		// Solo se pueden restar dos matrices del mismo tamaño.
		if ((filasa==filasb) && (columnasa==columnasb)) {
			cout<<"Elija la forma en la que desea que se resten ambas matrices:"<<endl;
			cout<<"1. A-B"<<endl;
			cout<<"2. B-A"<<endl;
			cout<<"Opcion: ";cin>>opc1;
			switch (opc1) {
			case 1:
				// Restando la matrizA y la matrizB.
				for (i=0;i<=filasb-1;i++) {
					for (j=0;j<=columnasb-1;j++) {
						matrizc[i][j] = matriza[i][j]-matrizb[i][j];
					}
				}
				// Mostrando la resta de las dos matrices.
				cout<<"\nLa resta de la matriz A y B es: "<<endl;
				for (i=0;i<=filasb-1;i++) {
					for (j=0;j<=columnasb-1;j++) {
						cout<<matrizc[i][j]<<" ";
					}
					cout<<""<<endl;
				}
				break;
			case 2:
				// Restando la matrizB y la matrizA.
				for (i=0;i<=filasb-1;i++) {
					for (j=0;j<=columnasb-1;j++) {
						matrizc[i][j] = matrizb[i][j]-matriza[i][j];
					}
				}
				// Mostrando la resta de las dos matrices.
				cout<<"\nLa resta de la matriz B y A es: "<<endl;
				for (i=0;i<=filasb-1;i++) {
					for (j=0;j<=columnasb-1;j++) {
						cout<<matrizc[i][j]<<"";
					}
					cout<<""<<endl;
				}
				break;
			default:
				cout<<"Opcion no existente."<<endl;
			}
		} else {
			cout<<"No se pueden restar dos matrices que tienen diferente tamaño."<<endl;
		}
		break;
	case 3:
		// Pidiendo el numero de filas y columnas de la primera matriz.
		cout<<"Por favor digite el numero de filas de la matriz A: ";cin>>filasa;
		cout<<"Por favor digite el numero de columnas de la matriz A: ";cin>>columnasa;
		// Almacenado los componentes de la matrizA.
		for (i=0;i<=filasa-1;i++) {
			for (j=0;j<=columnasa-1;j++) {
				cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]:";cin>>matriza[i][j];
			}
		}
		// Pidiendo el numero de filas y columnas para la matrizB.
		cout<<"Por favor digite el numero de filas de la matriz B: ";cin>>filasb;
		cout<<"Por favor digite el numero de columnas de la matriz B: ";cin>>columnasb;
		// Almacenado los componentes de la matrizB.
		for (i=0;i<=filasb-1;i++) {
			for (j=0;j<=columnasb-1;j++) {
				cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]:";cin>>matrizb[i][j];
			}
		}
		if ((filasa==filasb) && (columnasa==columnasb)) {
			cout<<"Elija la forma en la que desea que se multipliquen ambas matrices:"<<endl;
			cout<<"1. AXB"<<endl;
			cout<<"2. BXA"<<endl;
			cout<<"Opcion: ";cin>>opc1;
			switch (opc1) {
			case 1:
				// Multiplicando AXB.
				for (i=0;i<=filasa-1;i++) {
					for (j=0;j<=columnasb-1;j++) {
						matrizc[i][j] = 0;
						for (k=0;k<=filasa-1;k++) {
							matrizc[i][j] = matrizc[i][j]+matriza[i][k]*matrizb[k][j];
						}
					}
				}
				// Mostrando al usuari@ la matriz resultante.
				cout<<"\nLa multiplicacion de la matriz A y B es: "<<endl;
				for (i=0;i<=filasa-1;i++) {
					for (j=0;j<=columnasb-1;j++) {
						cout<<matrizc[i][j]<<"  ";
					}
					cout<<""<<endl;
				}
				break;
			case 2:
				// Multiplicando BXA.
				for (i=0;i<=filasa-1;i++) {
					for (j=0;j<=columnasb-1;j++) {
						matrizc[i][j] = 0;
						for (k=0;k<=filasa-1;k++) {
							matrizc[i][j] = matrizc[i][j]+matrizb[i][k]*matriza[k][j];
						}
					}
				}
				// Mostrando al usuari@ la matriz resultante.
				cout<<"\nLa multiplicacion de la matriz B y A es: "<<endl;
				for (i=0;i<=filasa-1;i++) {
					for (j=0;j<=columnasb-1;j++) {
						cout<<matrizc[i][j]<<"  ";
					}
					cout<<""<<endl;
				}
				break;
			default:
				cout<<"Opcion no existente."<<endl;
			}
		} else {
			cout<<"No se pueden multiplicar las dos matrices."<<endl;
		}
		break;
	case 4:
		cout<<"Elija una de las siguientes opciones: "<<endl;
		cout<<"1. Matrices de orden 2."<<endl;
		cout<<"2. Matrices de orden 3."<<endl;
		cout<<"Opcion: ";cin>>opc1;
		switch (opc1) {
		case 1:
			cout<<"Para la matriz A: "<<endl;
			// Almacenado los componentes de la matrizA.
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matriza[i][j];
				}
			}
			cout<<"Para la matriz B:"<<endl;
			// Almacenado los componentes de la matrizB.
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
				}
			}
			// Hallamos la matriz inversa de B.
			m = -((matrizb[0][1]*matrizb[1][0])/(matrizb[0][0]))+matrizb[1][1];
			s = -(matrizb[0][1])/(m);
			r = -(matrizb[1][0])/(matrizb[0][0]);
			t = ((s*r)+1)/(matrizb[0][0]);
			j = (s)/(matrizb[0][0]);
			x = r/m;
			f = 1/m;
			matrizbi[0][0] = t;
			matrizbi[0][1] = j;
			matrizbi[1][0] = x;
			matrizbi[1][1] = f;
			// Mostrando la matriz inversa de B.
			cout<<"La matriz inversa de B es: "<<endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout<<matrizbi[i][j]<<"  ";
				}
				cout<<""<<endl;
			}
			// Multiplicando la matriz A por la matriz inversa de B.
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					matrizd[i][j] = 0;
					for (k=0;k<=1;k++) {
						matrizd[i][j] = matrizd[i][j]+matriza[i][k]*matrizbi[k][j];
					}
				}
			}
			// Mostrando la division de A/B.
			cout<<"\nEntonces la multiplicacion de la matriz A por la inversa de la matriz B es: "<<endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout<<matrizd[i][j]<<"  ";
				}
				cout<<""<<endl;
			}
			break;
		case 2:
			cout<<"Para la matriz A: "<<endl;
			// Almacenado los componentes de la matrizA.
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matriza[i][j];
				}
			}
			cout<<"Para la matriz B:"<<endl;
			// Almacenado los componentes de la matrizB.
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
				}
			}
			// Hallamos la matriz inversa de B.
			m = -((matrizb[2][0])/(matrizb[0][0]));
			r = -(matrizb[1][0])/(matrizb[0][0]);
			s = -((matrizb[2][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[2][1];
			c = -((matrizb[1][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[1][1];
			d = -((matrizb[1][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[1][2];
			h3 = -((matrizb[2][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[2][2];
			n3 = -((s*d)/(c))+h3;
			n = -s/c;
			u = -(matrizb[0][1])/(c);
			j = (u*d)+matrizb[0][2];
			l = -d/n3;
			h = -j/n3;
			yp = 1/n3;
			i = 1/c;
			a = 1/matrizb[0][0];
			matrizbi[0][0] = a*(h*(n*r+m)+u*r+1);
			matrizbi[0][1] = a*(h*n+u);
			matrizbi[0][2] = a*h;
			matrizbi[1][0] = i*(l*(n*r+m)+r);
			matrizbi[1][1] = i*(l*n+1);
			matrizbi[1][2] = i*l;
			matrizbi[2][0] = yp*(n*r+m);
			matrizbi[2][1] = yp*n;
			matrizbi[2][2] = yp;
			// Mostrando la matriz inversa de B.
			cout<<"\nLa matriz inversa de B es: "<<endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout<<matrizbi[i][j]<<"  ";
				}
				cout<<""<<endl;
			}
			// Multiplicando la matriz A por la matriz inversa de B.
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					matrizd[i][j] = 0;
					for (k=0;k<=2;k++) {
						matrizd[i][j] = matrizd[i][j]+matriza[i][k]*matrizbi[k][j];
					}
				}
			}
			// Mostrando la division de A/B.
			cout<<"\nEntonces la multiplicacion de la matriz A por la inversa de la matriz B es: " << endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout<<matrizd[i][j]<<"  ";
				}
				cout<<""<<endl;
			}
			break;
		default:
			cout<<"Opcion no existente."<<endl;
		}
		break;
	case 5:
		cout<<"\nPor favor elija una de las siguientes opciones:"<<endl;
		cout<<"1. Determinante para una matriz de orden 2."<<endl;
		cout<<"2. Determinante para una matriz de orden 3."<<endl;
		cout<<"3. Determinante para una matriz de orden 4."<<endl;
		cout<<"Opcion: ";cin>>opc1;
		switch (opc1) {
		case 1:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
				}
			}
			// Mostrando la matriz digitada por el usuari@.
			cout<<"\nDe la siguiente matriz: "<<endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout<<matrizb[i][j]<<"  ";
				}
				cout<<""<<endl;
			}
			// Calculandeo la determinante de la matriz.
			m = -((matrizb[0][1]*matrizb[1][0])/(matrizb[0][0]))+matrizb[1][1];
			d = matrizb[0][0]*m;
			// Mostrando al usuario la determinante de la matriz.
			cout<<"\nLa determinante de la matriz es: "<<d<<endl;
			break;
		case 2:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
				}
			}
			// Mostrando la matriz digitada por el usuari@.
			cout<<"\nDe la siguiente matriz: "<<endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout<<matrizb[i][j]<<"  ";
				}
				cout<<""<<endl;
			}
			// Calculandeo la determinante de la matriz.
			s = -((matrizb[2][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[2][1];
			c = -((matrizb[1][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[1][1];
			d = -((matrizb[1][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[1][2];
			h3 = -((matrizb[2][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[2][2];
			n3 = -((s*d)/(c))+h3;
			m = matrizb[0][0]*c*n3;
			// Mostrando al usuario la determinante de la matriz.
			cout<<"\nLa determinante es: "<<m<<endl;
			break;
		case 3:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=3;i++) {
				for (j=0;j<=3;j++) {
					cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
				}
			}
			// Mostrando la matriz digitada por el usuari@.
			cout<<"\nDe la siguiente matriz: "<<endl;
			for (i=0;i<=3;i++) {
				for (j=0;j<=3;j++) {
					cout<<matrizb[i][j]<<"  ";
				}
				cout<<""<<endl;
			}
			// Calculandeo la determinante de la matriz.
			s = -((matrizb[2][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[2][1];
			c = -((matrizb[1][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[1][1];
			d = -((matrizb[1][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[1][2];
			h3 = -((matrizb[2][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[2][2];
			n3 = -((s*d)/(c))+h3;
			q = -((matrizb[1][0]*matrizb[0][3])/(matrizb[0][0]))+matrizb[1][3];
			p = -((matrizb[2][0]*matrizb[0][3])/(matrizb[0][0]))+matrizb[2][3];
			z = -((matrizb[3][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[3][1];
			k = -((matrizb[3][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[3][2];
			o4 = -((matrizb[3][0]*matrizb[0][3])/(matrizb[0][0]))+matrizb[3][3];
			u = -((s*q)/(c))+p;
			w = -((z*d)/(c))+k;
			l = -((z*q)/(c))+o4;
			y4 = -((w*u)/(n3))+l;
			m = matrizb[0][0]*c*n3*y4;
			// Mostrando al usuario la determinante de la matriz.
			cout<<"\nLa determinante de la matriz es: "<<m<<endl;
			break;
		default:
			cout<<"Opcion no existente."<<endl;
		}
		break;
	case 6:
		cout<<"Elija una de las siguientes opciones: "<<endl;
		cout<<"1. Matrices de orden 2."<<endl;
		cout<<"2. Matrices de orden 3."<<endl;
		cout<<"Opcion: ";cin>>opc1;
		switch (opc1) {
		case 1:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<< "]: ";cin>>matrizb[i][j];
				}
			}
			// Mostrando la matriz digitada por el usuari@.
			cout<<"\nMatriz original: "<<endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout<<matrizb[i][j]<<"  ";
				}
				cout<<""<<endl;
			}
			// Hallamos la matriz inversa de la matriz.
			m = -((matrizb[0][1]*matrizb[1][0])/(matrizb[0][0]))+matrizb[1][1];
			s = -(matrizb[0][1])/(m);
			r = -(matrizb[1][0])/(matrizb[0][0]);
			t = ((s*r)+1)/(matrizb[0][0]);
			j = (s)/(matrizb[0][0]);
			x = r/m;
			f = 1/m;
			matrizbi[0][0] = t;
			matrizbi[0][1] = j;
			matrizbi[1][0] = x;
			matrizbi[1][1] = f;
			// Mostrando la matriz inversa al usuari@.
			cout<<"\nMatriz inversa: "<<endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout<<matrizbi[i][j]<<"  ";
				}
				cout<<""<<endl;
			}
			break;
		case 2:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
				}
			}
			cout<<"\nMatriz original: "<<endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout<<matrizb[i][j]<<"  ";
				}
				cout<<""<<endl;
			}
			// Hallamos la matriz inversa de la matriz.
			m = -((matrizb[2][0])/(matrizb[0][0]));
			r = -(matrizb[1][0])/(matrizb[0][0]);
			s = -((matrizb[2][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[2][1];
			c = -((matrizb[1][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[1][1];
			d = -((matrizb[1][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[1][2];
			h3 = -((matrizb[2][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[2][2];
			n3 = -((s*d)/(c))+h3;
			n = -s/c;
			u = -(matrizb[0][1])/(c);
			j = (u*d)+matrizb[0][2];
			l = -d/n3;
			h = -j/n3;
			yp = 1/n3;
			i = 1/c;
			a = 1/matrizb[0][0];
			matrizbi[0][0] = a*(h*(n*r+m)+u*r+1);
			matrizbi[0][1] = a*(h*n+u);
			matrizbi[0][2] = a*h;
			matrizbi[1][0] = i*(l*(n*r+m)+r);
			matrizbi[1][1] = i*(l*n+1);
			matrizbi[1][2] = i*l;
			matrizbi[2][0] = yp*(n*r+m);
			matrizbi[2][1] = yp*n;
			matrizbi[2][2] = yp;
			// Mostrando la matriz inversa al usuari@.
			cout<<"\nMatriz inversa: "<<endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout<<matrizbi[i][j]<<"  ";
				}
				cout<<""<<endl;
			}
			break;
		default:
			cout<<"Opcion no existente."<<endl;
		}
		break;
	case 7:
		// Pidiendo el numero de filas y columnas para la matriz.
		cout<<"\nPor favor dijite el numero de filas de la matriz: ";cin>>filasb;
		cout<<"Por favor dijite el numero de columnas de la matriz: ";cin>>columnasb;
		// Almacenado los componentes de la matriz.
		for (i=0;i<=filasb-1;i++) {
			for (j=0;j<=columnasb-1;j++) {
				cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]:";cin>>matrizb[i][j];
			}
		}
		cout<<"\nMatriz original: "<<endl;
		for (i=0;i<=filasb-1;i++) {
			for (j=0;j<=columnasb-1;j++) {
				cout<<matrizb[i][j]<<"  ";
			}
			cout<<""<<endl;
		}
		// Cambiando filas por columnas y mostrando la matriz transpuesta al usuario.
		cout<<"\nMatriz transpuesta:"<<endl;
		for (i=0;i<=filasb-1;i++) {
			for (j=0;j<=columnasb-1;j++) {
				cout<<matrizb[j][i]<<" ";
			}
			cout<<""<<endl;
		}
		break;
	case 8:
		cout<<"\nPor favor elija una de las siguientes opciones:"<<endl;
		cout<<"1. Determinante para una matriz de orden 2."<<endl;
		cout<<"2. Determinante para una matriz de orden 3."<<endl;
		cout<<"3. Determinante para una matriz de orden 4."<<endl;
		cout<<"Opcion: ";cin>>opc1;
		switch (opc1) {
		case 1:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
				}
			}
			m = -((matrizb[0][1]*matrizb[1][0])/(matrizb[0][0]))+matrizb[1][1];
			cout<<"El rango de la matriz es: "<<2<<endl;
			break;
		case 2:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout<<"Por favor digite la componente ["<<i<<","<<j<<"]:";cin>>matrizb[i][j];
				}
			}
			s = -((matrizb[2][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[2][1];
			c = -((matrizb[1][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[1][1];
			d = -((matrizb[1][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[1][2];
			h3 = -((matrizb[2][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[2][2];
			n3 = -((s*d)/(c))+h3;
			cout<<"El rango de la matriz es: "<<3<<endl;
			break;
		case 3:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=3;i++) {
				for (j=0;j<=3;j++) {
					cout<< "Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
				}
			}
			s = -((matrizb[2][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[2][1];
			c = -((matrizb[1][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[1][1];
			d = -((matrizb[1][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[1][2];
			h3 = -((matrizb[2][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[2][2];
			n3 = -((s*d)/(c))+h3;
			q = -((matrizb[1][0]*matrizb[0][3])/(matrizb[0][0]))+matrizb[1][3];
			p = -((matrizb[2][0]*matrizb[0][3])/(matrizb[0][0]))+matrizb[2][3];
			z = -((matrizb[3][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[3][1];
			k = -((matrizb[3][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[3][2];
			o4 = -((matrizb[3][0]*matrizb[0][3])/(matrizb[0][0]))+matrizb[3][3];
			u = -((s*q)/(c))+p;
			w = -((z*d)/(c))+k;
			l = -((z*q)/(c))+o4;
			y4 = -((w*u)/(n3))+l;
			cout<<"El rango de la matriz es: "<<4<<endl;
			break;
		default:
			cout<<"Opcion no existente."<<endl;
		}
		break;
	case 9:
		// Pidiendo el numero de filas y columnas para la matriz.
		cout<<"Por favor digite el numero de filas de la matriz: ";cin>>filasb;
		cout<<"Por favor digite el numero de columnas de la matriz: ";cin>>columnasb;
		cout<<"Por favor digite el valor del escalar: ";cin>>escalar;
		// Almacenado los componentes de la matriz.
		for (i=0;i<=filasb-1;i++) {
			for (j=0;j<=columnasb-1;j++) {
				cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
			}
		}
		// Mostrando la matriz digitada por el usuario.
		cout<<"\nMatriz original: "<<endl;
		for(i=0;i<=filasb-1;i++) {
			for (j=0;j<=columnasb-1;j++) {
				cout<<matrizb[i][j]<<"  ";
			}
			cout<<""<<endl;
		}
		// Mostrando la matriz resultante
		cout<<"\nMatriz multiplicada por "<<escalar<<" es: "<<endl;
		for (i=0;i<=filasb-1;i++) {
			for (j=0;j<=columnasb-1;j++) {
				cout<<escalar*matrizb[i][j]<<" ";
			}
			cout<<""<<endl;
		}
		break;
	case 10:
		cout<<"\nPor favor elija una de las siguientes opciones:"<<endl;
		cout<<"1. Matriz triangular superior."<<endl;
		cout<<"2. Matriz triangular inferior."<<endl;
		cout<<"Opcion: ";cin>>opc2;
		switch (opc2) {
		case 1:
			cout<<"Por favor elija una de las siguientes opciones:"<<endl;
			cout<<"1. Matriz de orden 2."<<endl;
			cout<<"2. Matriz de orden 3."<<endl;
			cout<<"3. Matriz de orden 4."<<endl;
			cout<<"Opcion: ";cin>>opc1;
			switch (opc1) {
			case 1:
				// Almacenado los componentes de la matriz.
				for (i=0;i<=1;i++) {
					for (j=0;j<=1;j++) {
						cout<< "Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
					}
				}
				// Mostrando la matriz digitada por el usuario.
				cout<<"\nMatriz original: "<<endl;
				for (i=0;i<=1;i++) {
					for (j=0;j<=1;j++) {
						cout<<matrizb[i][j]<<"  ";
					}
					cout<<""<<endl;
				}
				// Calculando la matriz triangular superior.
				m = -((matrizb[0][1]*matrizb[1][0])/(matrizb[0][0]))+matrizb[1][1];
				matrizb[1][0] = 0;
				matrizb[1][1] = m;
				// Mostrando la matriz triangular superior.
				cout<<"\nMatriz triangular superior: "<<endl;
				for (i=0;i<=1;i++) {
					for (j=0;j<=1;j++) {
						cout<<matrizb[i][j]<<" ";
					}
					cout<<""<<endl;
				}
				break;
			case 2:
				// Almacenado los componentes de la matriz.
				for (i=0;i<=2;i++) {
					for (j=0;j<=2;j++) {
						cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
					}
				}
				// Mostrando la matriz digitada por el usuario.
				cout<<"\nMatriz original: "<<endl;
				for (i=0;i<=2;i++) {
					for (j=0;j<=2;j++) {
						cout<<matrizb[i][j]<<"  ";
					}
					cout<<""<<endl;
				}
				// Calculando la matriz triangular superior.
				s = -((matrizb[2][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[2][1];
				c = -((matrizb[1][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[1][1];
				d = -((matrizb[1][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[1][2];
				h3 = -((matrizb[2][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[2][2];
				n3 = -((s*d)/(c))+h3;
				matrizb[1][0] = 0;
				matrizb[1][1] = c;
				matrizb[1][2] = d;
				matrizb[2][0] = 0;
				matrizb[2][1] = 0;
				matrizb[2][2] = n3;
				// Mostrando la matriz triangular superior.
				cout<<"\nMatriz triangular superior: "<<endl;
				for (i=0;i<=2;i++) {
					for (j=0;j<=2;j++) {
						cout<<matrizb[i][j]<<" ";
					}
					cout<<""<<endl;
				}
				break;
			case 3:
				// Almacenado los componentes de la matriz.
				for (i=0;i<=3;i++) {
					for (j=0;j<=3;j++) {
						cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]: ";cin>>matrizb[i][j];
					}
				}
				// Mostrando la matriz digitada por el usuario.
				cout<<"\nMatriz original: "<<endl;
				for (i=0;i<=3;i++) {
					for (j=0;j<=3;j++) {
						cout<<matrizb[i][j]<<"  ";
					}
					cout<<""<<endl;
				}
				// Calculando la matriz triangular superior.
				s = -((matrizb[2][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[2][1];
				c = -((matrizb[1][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[1][1];
				d = -((matrizb[1][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[1][2];
				h3 = -((matrizb[2][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[2][2];
				n3 = -((s*d)/(c))+h3;
				q = -((matrizb[1][0]*matrizb[0][3])/(matrizb[0][0]))+matrizb[1][3];
				p = -((matrizb[2][0]*matrizb[0][3])/(matrizb[0][0]))+matrizb[2][3];
				z = -((matrizb[3][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[3][1];
				k = -((matrizb[3][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[3][2];
				o4 = -((matrizb[3][0]*matrizb[0][3])/(matrizb[0][0]))+matrizb[3][3];
				u = -((s*q)/(c))+p;
				w = -((z*d)/(c))+k;
				l = -((z*q)/(c))+o4;
				y4 = -((w*u)/(n3))+l;
				matrizb[1][0] = 0;
				matrizb[1][1] = c;
				matrizb[1][2] = d;
				matrizb[1][3] = q;
				matrizb[2][0] = 0;
				matrizb[2][1] = 0;
				matrizb[2][2] = n3;
				matrizb[2][3] = u;
				matrizb[3][0] = 0;
				matrizb[3][1] = 0;
				matrizb[3][2] = 0;
				matrizb[3][3] = y4;
				// Mostrando la matriz triangular superior.
				cout<<"\nMatriz triangular superior:"<<endl;
				for (i=0;i<=3;i++) {
					for (j=0;j<=3;j++) {
						cout<<matrizb[i][j]<<" ";
					}
					cout<<""<<endl;
				}
				break;
			default:
				cout<<"Opcion no existente."<<endl;
			}
			break;
		case 2:
			cout<<"\nPor favor elija una de las siguientes opciones:"<<endl;
			cout<<"1. Matriz de orden 2."<<endl;
			cout<<"2. Matriz de orden 3."<<endl;
			cout<<"Opcion: ";cin>>opc1;
			switch (opc1) {
			case 1:
				// Almacenado los componentes de la matriz.
				for (i=0;i<=1;i++) {
					for (j=0;j<=1;j++) {
						cout<<"Por favor digite la componente ["<<i+1<<","<<j+1<<"]:";cin>>matrizb[i][j];
					}
				}
				// Mostrando la matriz digitada por el usuario.
				cout<<"\nMatriz original: "<<endl;
				for (i=0;i<=1;i++) {
					for (j=0;j<=1;j++) {
						cout<<matrizb[i][j]<<"  ";
					}
					cout<<""<<endl;
				}
				// Calculando la matriz triangular inferior.
				m = -((matrizb[0][1]*matrizb[1][0])/(matrizb[1][1]))+matrizb[0][0];
				matrizb[0][0] = m;
				matrizb[0][1] = 0;
				// Mostrando la matriz triangular inferior.
				cout<<"\nMatriz triangular inferior:"<<endl;
				for (i=0;i<=1;i++) {
					for (j=0;j<=1;j++) {
						cout<<matrizb[i][j] << " ";
					}
					cout<< "" << endl;
				}
				break;
			case 2:
				// Almacenado los componentes de la matriz.
				for (i=0;i<=2;i++) {
					for (j=0;j<=2;j++) {
						cout << "Por favor digite la componente [" << i+1 << "," << j+1 << "]: ";cin >> matrizb[i][j];
					}
				}
				// Mostrando la matriz digitada por el usuario.
				cout<<"\nMatriz original: " << endl;
				for (i=0;i<=2;i++) {
					for (j=0;j<=2;j++) {
						cout << matrizb[i][j] << "  ";
					}
					cout << "" << endl;
				}
				// Calculando la matriz triangular inferior.
				s = -((matrizb[0][2]*matrizb[2][1])/(matrizb[2][2]))+matrizb[0][1];
				c = -((matrizb[1][2]*matrizb[2][1])/(matrizb[2][2]))+matrizb[1][1];
				h = -((matrizb[1][2]*matrizb[2][0])/(matrizb[2][2]))+matrizb[1][0];
				n = -((matrizb[0][2]*matrizb[2][0])/(matrizb[2][2]))+matrizb[0][0];
				d = -((s*h)/(c))+n;
				matrizb[0][0] = d;
				matrizb[0][1] = 0;
				matrizb[0][2] = 0;
				matrizb[1][0] = h;
				matrizb[1][1] = c;
				matrizb[1][2] = 0;
				// Mostrando la matriz triangular inferior.
				cout<<"\nMatriz triangular inferior: " << endl;
				for (i=0;i<=2;i++) {
					for (j=0;j<=2;j++) {
						cout << matrizb[i][j] << " ";
					}
					cout << "" << endl;
				}
				break;
			default:
				cout << "Opcion no existente." << endl;
			}
			cout << "Opcion no existente." << endl;
			break;
		}
		break;
	case 11:
		cout << "\nPor favor elija una de las siguientes opciones:" << endl;
		cout << "1. Matriz de orden 2." << endl;
		cout << "2. Matriz de orden 3." << endl;
		cout << "Opcion: ";cin >> opc1;
		switch (opc1) {
		case 1:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout << "Por favor digite la componente [" << i+1 << "," << j+1 << "]: ";cin >> matrizb[i][j];
				}
			}
			// Mostrando la matriz digitada por el usuario.
			cout << "\nMatriz original: " << endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout << matrizb[i][j] << "  ";
				}
				cout << "" << endl;
			}
			// Calculando la matriz diagonal.
			m = -((matrizb[0][1]*matrizb[1][0])/(matrizb[0][0]))+matrizb[1][1];
			matrizb[0][1] = 0;
			matrizb[1][0] = 0;
			matrizb[1][1] = m;
			// Mostrando la matriz diagonal.
			cout << "\nMatriz diagonal:" << endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout << matrizb[i][j] << " ";
				}
				cout << "" << endl;
			}
			break;
		case 2:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout << "Por favor digite la componente [" << i+1 << "," << j+1 << "]: ";cin >> matrizb[i][j];
				}
			}
			// Mostrando la matriz digitada por el usuario.
			cout << "\nMatriz original: " << endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout << matrizb[i][j] << "  ";
				}
				cout << "" << endl;
			}
			// Calculando la matriz diagonal.
			s = -((matrizb[2][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[2][1];
			c = -((matrizb[1][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[1][1];
			h = -((matrizb[2][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[2][2];
			d = -((matrizb[1][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[1][2];
			n3 = -((s*d)/(c))+h;
			matrizb[0][1] = 0;
			matrizb[0][2] = 0;
			matrizb[1][0] = 0;
			matrizb[1][1] = c;
			matrizb[1][2] = 0;
			matrizb[2][0] = 0;
			matrizb[2][1] = 0;
			matrizb[2][2] = n3;
			// Mostrando la matriz diagonal.
			cout << "\nMatriz diagonal:" << endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout << matrizb[i][j] << " ";
				}
				cout << "" << endl;
			}
			break;
		}
		break;
	case 12:
		cout << "Por favor digite el numero de filas de la matriz: ";cin >> filasa;
		cout << "Por favor digite el numero de columnas de la matriz: ";cin >> columnasa;
		cout << "Por favor digite la potencia a elevarse: ";cin >> escalar;
		// Almacenando componentes en la matriz.
		for (i=0;i<=filasa-1;i++) {
			for (j=0;j<=columnasa-1;j++) {
				cout << "Por favor digite la componente [" << i+1 << "," << j+1 << "]: " << endl;
				cin >> matriza[i][j];
			}
		}
		// Mostrando la matriz digitada por el usuario.
		cout << "\nMatriz original: " << endl;
		for (i=0;i<=filasa-1;i++) {
			for (j=0;j<=columnasa-1;j++) {
				cout << matriza[i][j] << "  ";
			}
			cout << "" << endl;
		}
		// Multiplicando matrices
		for (i=0;i<=filasa-1;i++) {
			for (j=0;j<=columnasa-1;j++) {
				matrizc[i][j] = 0;
				for (k=0;k<=filasa-1;k++) {
					matrizc[i][j] = matrizc[i][j]+matriza[i][k]*matriza[k][j];
				}
			}
		}
		// Mostrando la matriz elevada.
		cout << "\nMatrices elevada al ," << escalar << " es:" << endl;
		for (i=0;i<=filasa-1;i++) {
			for (j=0;j<=columnasa-1;j++) {
				cout << matrizc[i][j] << "  ";
			}
			cout << "" << endl;
		}
		break;
	case 13:
		cout << "\nPor favor elija una de las siguientes opciones:" << endl;
		cout << "1. Matriz de orden 2." << endl;
		cout << "2. Matriz de orden 3." << endl;
		cout << "Opcion: ";cin >> opc1;
		switch (opc1) {
		case 1:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout << "Por favor digite la componente [" << i+1 << "," << j+1 << "]: " << endl;
					cin >> matrizb[i][j];
				}
			}
			cout << "\nMatriz original: " << endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout << matrizb[i][j] << "  ";
				}
				cout << "" << endl;
			}
			cout << "Sera igual al producto de su matriz triangular inferior(L) y su matriz triangular superior(U):" << endl;
			// Hallando la matriz L.
			m = -((matrizb[0][1]*matrizb[1][0])/(matrizb[1][1]))+matrizb[0][0];
			matriza[0][0] = m;
			matriza[0][1] = 0;
			matriza[1][0] = matrizb[1][0];
			matriza[1][1] = matrizb[1][1];
			// Mostrando la matriz triangular inferior que seria la matriz L.
			cout << "\nLa matriz L: " << endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout << matriza[i][j] << " ";
				}
				cout << "" << endl;
			}
			// Hallando la matriz U.
			m1 = -((matrizb[0][1]*matrizb[1][0])/(matrizb[0][0]))+matrizb[1][1];
			matrizb[1][0] = 0;
			matrizb[1][1] = m1;
			// Mostrando la matriz triangular superior que seria la matriz U.
			cout << "\nLa matriz U: " << endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout << matrizb[i][j] << " ";
				}
				cout << "" << endl;
			}
			break;
		case 2:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout << "Por favor digite la componente [" << i+1 << "," << j+1 << "]: " << endl;
					cin >> matrizb[i][j];
				}
			}
			cout << "\nMatriz original: " << endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout << matrizb[i][j] << "  ";
				}
				cout << "" << endl;
			}
			cout << "Sera igual al producto de su matriz triangular inferior(L) y su matriz triangular superior(U):" << endl;
			// Hallando la matriz L.
			s = -((matrizb[0][2]*matrizb[2][1])/(matrizb[2][2]))+matrizb[0][1];
			c = -((matrizb[1][2]*matrizb[2][1])/(matrizb[2][2]))+matrizb[1][1];
			h = -((matrizb[1][2]*matrizb[2][0])/(matrizb[2][2]))+matrizb[1][0];
			n = -((matrizb[0][2]*matrizb[2][0])/(matrizb[2][2]))+matrizb[0][0];
			d = -((s*h)/(c))+n;
			matriza[0][0] = d;
			matriza[0][1] = 0;
			matriza[0][2] = 0;
			matriza[1][0] = h;
			matriza[1][1] = c;
			matriza[1][2] = 0;
			matriza[2][0] = matrizb[2][0];
			matriza[2][1] = matrizb[2][0];
			matriza[2][2] = matrizb[2][0];
			// Mostrando la matriz triangular inferior que seria la matriz L.
			cout << "\nLa matriz L: " << endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout << matriza[i][j] << " ";
				}
				cout << "" << endl;
			}
			// Hallando la matriz U.
			s1 = -((matrizb[2][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[2][1];
			c1 = -((matrizb[1][0]*matrizb[0][1])/(matrizb[0][0]))+matrizb[1][1];
			d1 = -((matrizb[1][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[1][2];
			h3 = -((matrizb[2][0]*matrizb[0][2])/(matrizb[0][0]))+matrizb[2][2];
			n33 = -((s1*d1)/(c1))+h3;
			matrizb[1][0] = 0;
			matrizb[1][1] = c1;
			matrizb[1][2] = d1;
			matrizb[2][0] = 0;
			matrizb[2][1] = 0;
			matrizb[2][2] = n33;
			// Mostrando la matriz triangular superior que seria la matriz U.
			cout << "\nLa matriz U: " << endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout << matrizb[i][j] << " ";
				}
				cout << "" << endl;
			}
			break;
		default:
			cout << "Opcion no existente." << endl;
		}
		break;
	case 14:
		cout << "\nPor favor elija una de las siguientes opciones:" << endl;
		cout << "1. Matriz de orden 2." << endl;
		cout << "2. Matriz de orden 3." << endl;
		cout << "Opcion: ";cin >> opc1;
		switch (opc1) {
		case 1:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout << "Por favor digite la componente [" << i+1 << "," << j+1 << "]: ";cin >> matrizb[i][j];
				}
			}
			// Mostrandola matriz digitada por el usuari@.
			cout << "\nMatriz original: " << endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout << matrizb[i][j] << "  ";
				}
				cout << "" << endl;
			}
			cout << "Sera igual al producto de su matriz triangular inferior(L) y su matriz transpuesta(L^t):" << endl;
			// Hallando la matriz L.
			b = sqrtf(matrizb[0][0]);
			m = (matrizb[0][1])/(b);
			t = sqrtf(matrizb[1][1]-pow(m,2));
			matrizb[0][0] = b;
			matrizb[0][1] = 0;
			matrizb[1][0] = m;
			matrizb[1][1] = t;
			// Mostrando la matriz triangular inferior que seria la matriz L.
			cout << "\nLa matriz L: " << endl;
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout << matrizb[i][j] << " ";
				}
				cout << "" << endl;
			}
			// Hallando la matriz transpuesta de L.
			cout << "\nLa matriz L^t: " << endl;
			// Cambiando filas por columnas.
			for (i=0;i<=1;i++) {
				for (j=0;j<=1;j++) {
					cout << matrizb[j][i] << " ";
				}
				cout << "" << endl;
			}
			break;
		case 2:
			// Almacenado los componentes de la matriz.
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout << "Por favor digite la componente [" << i+1 << "," << j+1 << "]: ";cin >> matrizb[i][j];
				}
			}
			cout << "\nMatriz original: " << endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout << matrizb[i][j] << "  ";
				}
				cout << "" << endl;
			}
			cout << "Sera igual al producto de su matriz triangular inferior(L) y su matriz transpuesta(L^t):" << endl;
			// Hallando la matriz L.
			b = sqrtf(matrizb[0][0]);
			m = (matrizb[0][1])/(b);
			r = (matrizb[0][2])/(b);
			t = sqrtf(matrizb[1][1]-pow(m,2));
			e = (matrizb[1][2]-m*r)/(t);
			s = sqrtf(matrizb[2][2]-pow(r,2)-pow(e,2));
			matrizb[0][0] = b;
			matrizb[0][1] = 0;
			matrizb[0][2] = 0;
			matrizb[1][0] = m;
			matrizb[1][1] = t;
			matrizb[1][2] = 0;
			matrizb[2][0] = r;
			matrizb[2][1] = e;
			matrizb[2][2] = s;
			// Mostrando la matriz triangular inferior que seria la matriz L.
			cout << "\nLa matriz L: " << endl;
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout << matrizb[i][j] << " ";
				}
				cout << "" << endl;
			}
			// Hallando la matriz transpuesta de L.
			cout << "\nLa matriz L^t: " << endl;
			// Cambiando filas por columnas.
			for (i=0;i<=2;i++) {
				for (j=0;j<=2;j++) {
					cout << matrizb[j][i] << " ";
				}
				cout << "" << endl;
			}
			break;
		default:
			cout << "Opcion no existente." << endl;
		}
		break;
	case 15:
		cout << "\nPor favor digite el numero de filas de la matriz: ";cin >> filasb;
		cout << "Por favor digite el numero de columnas de la matriz: ";cin >> columnasb;
		// Almacenado los componentes de la matriz.
		for (i=0;i<=1;i++) {
			for (j=0;j<=1;j++) {
				cout << "Por favor digite la componente [" << i+1 << "," << j+1 << "]: ";cin >> matrizb[i][j];
			}
		}
		cout << "\nMatriz original: " << endl;
		for (i=0;i<=filasb-1;i++) {
			for (j=0;j<=columnasb-1;j++) {
				cout << matrizb[i][j] << "  ";
			}
			cout << "" << endl;
		}
		// Hallando los valores propios de la matriz.
		b = (matrizb[0][0]+matrizb[1][1]);
		c = (matrizb[0][0]*matrizb[1][1])-(matrizb[0][1]*matrizb[1][0]);
		discriminante = pow(b,2)-4*1*c;
		x1 = (b+sqrtf(discriminante))/(2);
		x2 = (b-sqrtf(discriminante))/(2);
		// Hallando los vectores propios para x1.
		m = matrizb[0][0]-x1;
		j = (matrizb[0][1])/(m);
		// Hallando los vectores propios para x2.
		r = matrizb[0][0]-x2;
		t = (matrizb[0][1])/(r);
		// Mostrando los reultados en pantalla.
		cout << "\nLos valores propios de la martriz son: " << endl;
		cout << x1 << endl;
		cout << x2 << endl;
		cout << "\nLos vectores propios de la matriz son: " << endl;
		cout << "[" << -j << ",1]" << endl;
		cout << "[" << -t << ",1]" << endl;
		break;
	default:
		cout << "Opcion no existente." << endl;
	}
	getch();
	return 0;
}

