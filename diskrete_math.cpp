#include <iostream>

void kdndz()
{
	{
		int hamar;
		do {
				std::cout << std::endl;
				std::cout << "ԸՆՏՐԵԼ ՀՐԱՄԱՆԸ" << std::endl;
				std::cout << "2.2 ՓՈՓՈԽԱԿԱՆԻ ՖՈՒՆԿՑԻԱ " << std::endl;
				std::cout << "3.3 ՓՈՓՈԽԱԿԱՆԻ ՖՈՒՆԿՑԻԱ" << std::endl;
				std::cout << "4.4 ՓՈՓՈԽԱԿԱՆԻ ՖՈՒՆԿՑԻԱ" << std::endl;
				std::cout << "5.ԵԼՔ" << std::endl;
				std::cin >> hamar;

				{
				if (hamar == 3)
				{
					int l = 0, k = 0, b, q = 0, u = 0, t = 0;
					int f[8], zang[8], hat = 0;
					std::cout << "f(x,y,z)= ";

					for (int i = 0; i < 8; i++)
					{
					do
						{
							std::cin >> f[i];
							if (f[i] == 1) hat++;
							zang[i] = f[i];
						} while (f[i] < 0 || f[i] > 1);
					}
						std::cout << "x | " << "y|" << "  z|" << "f(x,y,z)"<<"\n";
						std::cout << "0 | " << "0|" << "  0| " << f[0] <<"\n";
						std::cout << "0 | " << "0|" << "  1| " << f[1] <<"\n";
						std::cout << "0 | " << "1|" << "  0| " << f[2] <<"\n";
						std::cout << "0 | " << "1|" << "  1| " << f[3] <<"\n";
						std::cout << "1 | " << "0|" << "  0| " << f[4] <<"\n";
						std::cout << "1 | " << "0|" << "  1| " << f[5] <<"\n";
						std::cout << "1 | " << "1|" << "  0| " << f[6] <<"\n";
						std::cout << "1 | " << "1|" << "  1| " << f[7] <<"\n";

						int x[] = { 0,0,0,0,1,1,1,1 };
						int y[] = { 0,0,1,1,0,0,1,1 };
						int z[] = { 0,1,0,1,0,1,0,1 };
						int krj = 0;
						if (f[0] == 0 && f[1] == 0 && f[2] == 0 && f[3] == 0 && f[4] == 0 && f[5] == 0 && f[6] == 0 && f[7] == 1) krj = 1;

						for (int i = 0; i < 4; i++)
							if (f[i] == f[i + 4]) 
								l++;
						if (l == 4)
						{
							q = 1;
							std::cout << "x-@ fiktiv e" << std::endl;

							for (int i = 0; i < 4; i++)
							{
								f[i] = f[i + 4];
								std::cout << f[i];
							}
						}
						else k++;

						int m = 0;

						for (int i = 0; i < 2; i++)

							if (f[i] == f[i + 2]) m++;

						for (int i = 4; i < 6; i++)

							if (f[i] == f[i + 2]) m++;

						if (m == 4)

						{
							std::cout << "y-@ fiktiv e" << std::endl;
							if (q == 0) for (int i = 0; i < 4; i++)
								if (i < 2)

								{
									f[i] = f[i + 2];
									std::cout << f[i];
								}
								else
								{
									f[i] = f[i + 2];
									std::cout << f[i];
								}
							else
								for (int i = 0; i < 3; i++)
								{
									if (i < 2)
									{
										f[i] = f[i + 2];
										std::cout << f[i];
									}
								}
							u = 1;
						}

						else k++;

						int n = 0;
						for (int i = 0; i < 1; i++) if (f[i] == f[i + 1]) n++;
						for (int i = 2; i < 3; i++) if (f[i] == f[i + 1]) n++;
						for (int i = 4; i < 5; i++) if (f[i] == f[i + 1]) n++;
						for (int i = 6; i < 7; i++) if (f[i] == f[i + 1]) n++;

						if (n == 4)
						{
							std::cout << "z-@ fiktiv e" << std::endl;
							if (q == 0 && u == 0)

								for (int i = 0; i < 4; i++)
								{
									if (i == 0)
									{
										f[i] = f[i];
										std::cout << f[i] << " ";
									}

									if (i == 1)
									{
										f[i] = f[i + 1];
										std::cout << f[i] << " ";
									}

									if (i == 2)
									{
										f[i] = f[i + 2];
										std::cout << f[i] << " ";
									}

									if (i == 3)
									{
										f[i] = f[i + 3];
										std::cout << f[i] << " ";
									}
								}

							if (q == 1 && u == 0)

								for (int i = 0; i < 2; i++)
								{
									if (i == 0)
									{
										f[i] = f[i];
										std::cout << f[i] << " ";
									}

									if (i == 1)
									{
										f[i] = f[i + 1];
										std::cout << f[i] << " ";
									}
								}

							if (q == 0 && u == 1)

								for (int i = 0; i < 2; i++)

								{
									if (i == 0)
									{
										f[i] = f[i];
										std::cout << f[i] << " ";
									}

									if (i == 1)
									{
										f[i] = f[i + 4];
										std::cout << f[i] << " ";
									}
								}

							t = 1;
						}

						else k++;

						if (k == 3)
						 	 std::cout << "fiktiv popoxakan chka" << std::endl;

						if (k == 0) 
							std::cout << "bolor@ fiktiv en" << std::endl;
							std::cout << "\n";

						std::cout << "KDNDZ` ";
						int a = 0, hat1 = 0;

						for (int i = 0; i < 8; i++)
							if (f[i] == 0) a++;

						if (a == 8)
							std::cout << "KDNDZ chka";

						for (int i = 0; i < 8; i++)
						{
							if (zang[i] == 1)
							{
								hat1++;
								if (x[i] == 1) 
									std::cout << "x"; 
								else 
									std::cout << "x'";
								if (y[i] == 1) 
									std::cout << "y"; 
								else 
									std::cout << "y'";
								if (z[i] == 1) 
									std::cout << "z";
								else 
									std::cout << "z'";
								if (hat > hat1) 
									std::cout << " V ";
							}
						}

						std::cout << "\n";
						std::cout << "KKNDZ` ";
						int h = 0;
						for (int i = 0; i < 8; i++)
						{
							if (zang[i] == 0)
							{
								std::cout << "(";
								if (x[i] == 0) 
									std::cout << "x V "; 
								else 
									std::cout << "x' V ";
								if (y[i] == 0)
									std::cout << "y V "; 
								else 
									std::cout << "y' V ";
								if (z[i] == 0) 
									std::cout << "z )"; 
								else 
									std::cout << "z' )";
							}

							else
								if (f[i] == 1) h++;
							if (h == 8) 
								std::cout << "KKNDZ chka";
						}

						if (krj == 1)
							std::cout << "=(XYX' V XYY' V XYZ)=XYZ" << std::endl;
				}
			}
			if (hamar == 2)
			{
				int	en = 0, n = 0, qu = 0, el = 0, ka = 0;
				int c[] = { 0,0,1,1 };
				int v[] = { 0,1,0,1 };
				int funk[4];
				int zangvac[4];
				std::cout << "f(x,y)= ";
				for (int i = 0; i < 4; i++)
					do
					{
						std::cin >> funk[i];
						if (funk[i] == 1)
							n++;
						zangvac[i] = funk[i];
					} while (funk[i] < 0 || funk[i] > 1);
					std::cout << "x | " << "y|" << "f(x,y)" <<std::endl;
					std::cout << "0 | " << "0| " << funk[0] <<std::endl;
					std::cout << "0 | " << "1| " << funk[1] <<std::endl;
					std::cout << "1 | " << "0| " << funk[2] <<std::endl;
					std::cout << "1 | " << "1| " << funk[3] <<std::endl;


					for (int i = 0; i < 2; i++)
						if (funk[i] == funk[i + 2]) el++;

					if (el == 2)
					{
						qu = 1;
						std::cout << "x-ը ֆիկտիվ է" <<std::endl;

						for (int i = 0; i < 2; i++)
						{
							funk[i] = funk[i + 2];
							std::cout << funk[i] << " ";
						}
						std::cout <<std::endl;
					}
					else ka++;
					int ele = 0, qyu = 0;

					if (funk[0] == funk[1]) ele++;
					if (funk[2] == funk[3]) ele++;
					if (ele == 2)
					{
						qyu = 1;
						std::cout << "y-@ fiktiv e" <<std::endl;
						if (qu == 1)
							for (int i = 0; i < 1; i++) funk[i] = funk[i];
						else
						{
							for (int i = 0; i < 2; i++)
							{
								if (i == 0)
									funk[i] = funk[i]; else funk[i] = funk[i + 1];
								std::cout << funk[i] << " ";
							}
							std::cout <<std::endl;
						}
					}

					else

						ka++;
					int qan = 0;
					if (qyu == 1 && qu == 1) 
						std::cout << "bolor@ fiktiv en" << std::endl;
					if (qyu == 0 && qu == 0) std::cout << "fiktiv popoxakan chka" << std::endl;

					std::cout << "KDNDZ` ";
					for (int i = 0; i < 4; i++) if (zangvac[i] == 1)
					{
						en++;
						if (c[i] == 1) 
							std::cout << "x"; 
						else 
							std::cout << "x'";
						if (v[i] == 1) 
							std::cout << "y"; 
						else 
							std::cout << "y'";
						if (n > en) 
							std::cout << " V ";
					}

					else
						if (zangvac[i] == 0) qan++;
					if (qan == 4) 
						std::cout << "KDNDZ chka ";

					int qanak1 = 0;
					std::cout << std::endl;
					std::cout << "KKNDZ` ";
					for (int i = 0; i < 4; i++) if (zangvac[i] == 0)
					{
						std::cout << "(";
						if (c[i] == 0) 
							std::cout << "x V"; 
						else 
							std::cout << "x' V";
						if (v[i] == 0) 
							std::cout << " y)"; 
						else 
							std::cout << " y')";
					}
					else
						if (zangvac[i] == 1) qanak1++;
					if (qanak1 == 4) 
						std::cout << "KKNDZ chka";
			}

			if (hamar == 4)
			{
				std::cout << "f(x,y,z,p)=";
				int syun1[] = { 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1 };
				int syun2[] = { 0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1 };
				int syun3[] = { 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1 };
				int syun4[] = { 0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1 };

				int funk_4[16];
				int zang_4[16];
				int em = 0, b;
				int tp_x = 0;
				for (int i = 0; i < 16; i++)
					do
					{
						std::cin >> funk_4[i];
						if (funk_4[i] == 1) em++;
						zang_4[i] = funk_4[i];
					} while (funk_4[i] < 0 || funk_4[i] > 1);
					std::cout << std::endl;
					std::cout << "x | " << "y|" << "  z|" << "  p|" << "f(x,y,z,p)" << std::endl;
					std::cout << "0 | " << "0|" << "  0|" << "  0|  " << funk_4[0] << std::endl;
					std::cout << "0 | " << "0|" << "  0|" << "  1|  " << funk_4[1] << std::endl;
					std::cout << "0 | " << "0|" << "  1|" << "  0|  " << funk_4[2] << std::endl;
					std::cout << "0 | " << "0|" << "  1|" << "  1|  " << funk_4[3] << std::endl;
					std::cout << "0 | " << "1|" << "  0|" << "  0|  " << funk_4[4] << std::endl;
					std::cout << "0 | " << "1|" << "  0|" << "  1|  " << funk_4[5] << std::endl;
					std::cout << "0 | " << "1|" << "  1|" << "  0|  " << funk_4[6] << std::endl;
					std::cout << "0 | " << "1|" << "  1|" << "  1|  " << funk_4[7] << std::endl;
					std::cout << "1 | " << "0|" << "  0|" << "  0|  " << funk_4[8] << std::endl;
					std::cout << "1 | " << "0|" << "  0|" << "  1|  " << funk_4[9] << std::endl;
					std::cout << "1 | " << "0|" << "  1|" << "  0|  " << funk_4[10] << std::endl;
					std::cout << "1 | " << "0|" << "  1|" << "  1|  " << funk_4[11] << std::endl;
					std::cout << "1 | " << "1|" << "  0|" << "  0|  " << funk_4[12] << std::endl;
					std::cout << "1 | " << "1|" << "  0|" << "  1|  " << funk_4[13] << std::endl;
					std::cout << "1 | " << "1|" << "  1|" << "  0|  " << funk_4[14] << std::endl;
					std::cout << "1 | " << "1|" << "  1|" << "  1|  " << funk_4[15] << std::endl;


					int	x_fik = 0;

					for (int i = 0; i < 8; i++)
					if (funk_4[i] == funk_4[i + 8]) 
						x_fik++;
					if (x_fik == 8)
					{
						tp_x = 1;
						std::cout << "x-@ fiktiv e" << std::endl;
						for (int i = 0; i < 8; i++)
						{
							funk_4[i] = funk_4[i + 8];
							std::cout << funk_4[i] << " ";
						}
						std::cout << std::endl;
					}

					int y_fik = 0;
					int tp_y = 0;
					for (int i = 0; i < 4; i++)
						if (funk_4[i] == funk_4[i + 4])
							y_fik++;	
					for (int i = 8; i < 12; i++)
						if (funk_4[i] == funk_4[i + 4])
							y_fik++;

					if (y_fik == 8)
					{
						std::cout << "y-@ fiktiv e" <<std:: endl;

						tp_y = 1;

						if (tp_x == 0 && tp_y == 1)
						{
							for (int i = 0; i < 4; i++)
							{
								std::cout << funk_4[i] << " ";
							}
							for (int i = 8; i < 12; i++)
							{
								std::cout << funk_4[i] << " ";
							}
						}
					}
					if (tp_x == 1 && tp_y == 1)

						for (int i = 0; i < 4; i++)
						{
							std::cout << funk_4[i] << " ";
						}
					std::cout << std::endl;

					int z_fik = 0;
					int tp_z = 0;
					for (int i = 0; i < 2; i++)
						if (funk_4[i] == funk_4[i + 2]) 
							z_fik++;
					for (int i = 4; i < 6; i++)
						if (funk_4[i] == funk_4[i + 2]) 
							z_fik++;
					for (int i = 8; i < 10; i++)
						if (funk_4[i] == funk_4[i + 2])
							z_fik++;
					for (int i = 12; i < 14; i++)
						if (funk_4[i] == funk_4[i + 2]) 
							z_fik++;

					if (z_fik == 8)
					{
						std::cout << "z-@ fiktiv e" << std::endl;
						tp_z = 1;
						if (tp_x == 0 && tp_y == 0 && tp_z == 1)
						{
							for (int i = 0; i < 2; i++) std::cout << funk_4[i] << " ";
							for (int i = 4; i < 6; i++) std::cout << funk_4[i] << " ";
							for (int i = 8; i < 10; i++) std::cout << funk_4[i] << " ";
							for (int i = 12; i < 14; i++) std::cout << funk_4[i] << " ";
						}

						if (tp_x == 1 && tp_y == 0 && tp_z == 1)
						{
							for (int i = 0; i < 2; i++) std::cout << funk_4[i] << " ";
							for (int i = 4; i < 6; i++) std::cout << funk_4[i] << " ";
						}

						if (tp_x == 0 && tp_y == 1 && tp_z == 1)
						{
							for (int i = 0; i < 2; i++) std::cout << funk_4[i] << " ";
							for (int i = 8; i < 10; i++) std::cout << funk_4[i] << " ";
						}

						if (tp_x == 1 && tp_y == 1 && tp_z == 1)
						{
							for (int i = 0; i < 2; i++) std::cout << funk_4[i] << " ";
						}
					}

					std::cout << std::endl;
					int p_fik = 0;
					int tp_p = 0;
					for (int i = 0; i < 1; i++)
						if (funk_4[i] == funk_4[i + 1]) p_fik++;
					for (int i = 2; i < 3; i++)
						if (funk_4[i] == funk_4[i + 1]) p_fik++;
					for (int i = 4; i < 5; i++)
						if (funk_4[i] == funk_4[i + 1]) p_fik++;;
					for (int i = 6; i < 7; i++)
						if (funk_4[i] == funk_4[i + 1]) p_fik++;
					for (int i = 8; i < 9; i++)
						if (funk_4[i] == funk_4[i + 1]) p_fik++;
					for (int i = 10; i < 11; i++)
						if (funk_4[i] == funk_4[i + 1]) p_fik++;
					for (int i = 12; i < 13; i++)
						if (funk_4[i] == funk_4[i + 1]) p_fik++;
					for (int i = 14; i < 15; i++)
						if (funk_4[i] == funk_4[i + 1]) p_fik++;

					if (p_fik == 8)
					{
						std::cout << "p-n fiktiv e" << std::endl;
						tp_p = 1;
						if (tp_x == 0 && tp_y == 0 && tp_z == 0)
							for (int i = 0; i < 16; i++)
								if (i % 2 == 0) 
									std::cout << funk_4[i] << " ";
						if (tp_x == 0 && tp_y == 0 && tp_z == 1)
						{
							std::cout << funk_4[0] << " ";
							std::cout << funk_4[4] << " ";
							std::cout << funk_4[8] << " ";
							std::cout << funk_4[12] << " ";
						}

						if (tp_x == 0 && tp_y == 1 && tp_z == 0)
						{
							std::cout << funk_4[0] << " ";
							std::cout << funk_4[2] << " ";
							std::cout << funk_4[8] << " ";
							std::cout << funk_4[10] << " ";
						}

						if (tp_x == 0 && tp_y == 1 && tp_z == 1)
						{
							std::cout << funk_4[0] << " ";
							std::cout << funk_4[8] << " ";
						}

						if (tp_x == 1 && tp_y == 0 && tp_z == 0)
						{
							for (int i = 0; i < 8; i++)
								if (i % 2 == 0)
									std::cout << funk_4[i];
						}

						if (tp_x == 1 && tp_y == 0 && tp_z == 1)
						{
							std::cout << funk_4[0] << " ";
							std::cout << funk_4[4] << " ";
						}

						if (tp_x == 1 && tp_y == 1 && tp_z == 0)
						{
							std::cout << funk_4[0] << " ";
							std::cout << funk_4[2] << " ";
						}

						if (tp_x == 1 && tp_y == 1 && tp_z == 1)
							std::cout << "bolor@ fiktiv en" << std::endl;
					}

					if (tp_x == 0 && tp_y == 0 && tp_z == 0 && tp_p == 0)
						std::cout << "fiktiv popoxakan chka" << std::endl;

					std::cout << std::endl;

					std::cout << "KDNDZ` ";
					int diz_chka = 0;
					for (int i = 0; i < 16; i++)
						if (funk_4[i] == 0) diz_chka++;
					if (diz_chka == 16) 
						std::cout << "KDNDZ chka" << std::endl;
					int a = 0, m = 0;
					for (int i = 0; i < 16; i++)

					{
						if (zang_4[i] == 1)
						{
							m++;
							if (syun1[i] == 1) 
								std::cout << "x";
							else 
								std::cout << "x'";
							if (syun2[i] == 1) 
								std::cout << "y";
							else 
								std::cout << "y'";
							if (syun3[i] == 1) 
								std::cout << "z"; 
							else 
								std::cout << "z'";
							if (syun4[i] == 1) 
								std::cout << "p"; 
							else 
								std::cout << "p'";

							if (em > m)
								std::cout << " V ";
						}

						else
							for (int i = 0; i < 16; i++)
								if (funk_4[i] == 0) a++;
					}

					std::cout << std::endl;
					std::cout << "KKNDZ` ";
					int aa = 0, eme = 0;
					for (int i = 0; i < 16; i++)
					{
						if (zang_4[i] == 0)
						{
							eme++;
							std::cout << "(";
							if (syun1[i] == 0) 
								std::cout << "x V";
							else 
								std::cout << " x' V";
							if (syun2[i] == 0) 
								std::cout << " y V";
							else 
								std::cout << " y' V";
							if (syun3[i] == 0) 
								std::cout << " z V"; 
							else 
								std::cout << " z' V";
							if (syun4[i] == 0) 
								std::cout << " p)"; 
							else 
								std::cout << " p')";
						}
						else
							for (int i = 0; i < 16; i++)
								if (funk_4[i] == 1) aa++;
						if (aa == 16) 
							std::cout << "KKNDZ chka";
					}
			}
		} while (hamar != 5);
	}
}

void graph()
{
	{
		int gagatner, koxmer, a;
		do
		{
			std::cout << "gagatner=";
			std::cin >> gagatner;
		} while (gagatner < 0);
		if (gagatner == 1)
		{
			do
			{
				std::cout << "koxmer=";
				std::cin >> koxmer;
			} while (koxmer != 0);
		}
		else
			do
			{
				std::cout << "koxmer=";
				std::cin >> koxmer;
			} while (koxmer < 0);

			int matrix[30][30];
			int matrix1[30][30];

			for (int i = 0; i < gagatner; i++)
				for (int j = 0; j < gagatner; j++)
					matrix[i][j] = 0;

			for (int i = 0; i < koxmer; i++)
				for (int j = 0; j < gagatner; j++)
					matrix1[i][j] = 0;

			int x, y;

			for (int i = 0; i < koxmer; i++)
			{
				std::cin >> x >> y;
				matrix[x][y] = 1;
				matrix[y][x] = 1;
				matrix1[i][x] = 1;
				matrix1[i][y] = 1;
			}
			int zroner = 0;
			for (int i = 0; i < gagatner; i++)
				for (int j = 0; j < gagatner; j++)
					if (matrix[i][j] == 0) zroner++;

			std::cout << std::endl;
			std::cout << "HAREVANUTYAN MATRIC";
			std::cout << std::endl;
			for (int i = 0; i < gagatner; i++)
			{
				for (int j = 0; j < gagatner; j++)
				{
					std::cout << matrix[i][j] << " ";
				}
				std::cout << std::endl;
			}
			std::cout << std::endl;

			std::cout << std::endl;
			std::cout << "KCUTYAN MATRIC";
			std::cout << std::endl;
			for (int i = 0; i < koxmer; i++)
			{
				for (int j = 0; j < gagatner; j++)
				{
					std::cout << matrix1[i][j] << " ";
				}
				std::cout << std::endl;
			}
			std::cout << "ANKAXUTYAN TIV" << (zroner - gagatner) / 2 << std::endl;
			std::cout << std::endl;
			int qan; int d[30];

			for (int i = 0; i < gagatner; i++)
			{
				qan = 0;
				for (int j = 0; j < gagatner; j++)
					if (matrix[i][j] == 1)
						qan++;
				d[i] = qan;
				std::cout << "V" << i << "-ն uni  " << qan << "  harevan";
				std::cout << std::endl;
			}
			for (int i = 0; i < gagatner; i++)
			{
				if (d[i] == 1) 
					std::cout << "V" << i << "-@ kaxvac e" << std::endl;
				else
					if (d[i] == 0) 
						std::cout << "V" << i << "-@ mekusacac e" << std::endl;
			}
			for (int i = 0; i < gagatner; i++)
				std::cout << d[i] << "  ";
			std::cout << std::endl;
			int max = d[0];

			for (int i = 1; i < gagatner; i++)
				if (d[i] >= max)
					max = d[i];

			for (int i = 0; i < gagatner; i++)
				if (d[i] == max)
					std::cout << "V" << i << "-n uni mecaguyn gagati astichan " << max << std::endl;
			std::cout << std::endl;
			std::cout << "gagati astichannern achman kargov՝ ";
			int index[50] = { 0 }, ii = 0;

			for (int i = 0; i < gagatner; i++)
				for (int j = i + 1; j < gagatner; j++)
					if (d[j] < d[i])

					{
						a = d[i];
						d[i] = d[j];
						d[j] = a;
					}

			for (int i = 0; i < gagatner; i++)
				std::cout << d[i] << " ";
			std::cout << std::endl;
			std::cout << std::endl;
			int cikl_tiv;
			cikl_tiv = koxmer - gagatner + 1;
			std::cout << "ciklomatik tiv = " << cikl_tiv << std::endl;
			if (gagatner != 1)
			{
				int w=-1;

				std::cout << "karchaguyn chanaparh@ erku gagatneri michev" << std::endl;
				int gag1, gag2, h, k;
				int v, u, b;



				do
				{
					std::cout << "gagat 1=";
					std::cin >> gag1;
				} while (gag1<0 || gag1>gagatner-1);

				do
				{
					std::cout << "gagat 2=";
					std::cin >> gag2;
				} while (gag2<0 || gag2>gagatner-1);

				int qan1 = 0;
				if (gag1 == gag2)
				{
					std::cout << "Nuyn gagatn e" << std::endl;
					qan1++;
					w = 0;
				}
				if (qan1==0)


				if (matrix[gag1][gag2] == 1)
				{
					std::cout << "1 qaylov՝ V" << gag1 << " --> V" << gag2 << std::endl;
					qan1++;
					w = 1;
				}
				else
					for (int i = 0; i < gagatner; i++)
						if (matrix[gag1][i] == 1)
						{
							h = i;
							if (matrix[h][gag2] == 1)
							{
								std::cout << "2 qaylov`  V" << gag1 << " --> V" << h << " --> V" << gag2 << std::endl;
								qan1++;
								w = 2;
							}
						}
				if (qan1 == 0)

					for (int i = 0; i < gagatner; i++)
					{
						if (matrix[gag1][i] == 1)
						{
							h = i;
							for (int j = 0; j < gagatner; j++)
							{
								if (j == h) continue;
								if (matrix[h][j] == 1)

								{
									k = j;
									if (matrix[k][gag2] == 1)
									{
										std::cout << "3 qaylov`  V" << gag1 << " --> V" << h
											<< " --> V" << k << " --> V" << gag2 << std::endl;
										qan1++;
										w = 3;
									}
								}
							}
						}
					}

				if (qan1 == 0)
					for (int i = 0; i < gagatner; i++)
					{
						if (matrix[gag1][i] == 1)
						{
							h = i;
							for (int j = 0; j < gagatner; j++)
							{
								if (matrix[h][j] == 1)
								{
									k = j;
									for (int l = 0; l < gagatner; l++)
									{
										if (matrix[k][l] == 1)
										{
											v = l;
											if (matrix[v][gag2] == 1)
											{
												std::cout << "4 qaylov՝ V" << gag1 << " --> V" << h << " --> V" << k
													<< " --> V" << l << " --> V" << gag2 << std::endl;
												qan1++;
												w = 4;
											}
										}
									}
								}
							}
						}
					}

				if (qan1 == 0)
					for (int i = 0; i < gagatner; i++)
					{
						if (matrix[gag1][i] == 1)
						{
							h = i;
							for (int j = 0; j < gagatner; j++)
							{
								if (matrix[h][j] == 1)
								{
									k = j;
									for (int l = 0; l < gagatner; l++)
									{
										if (matrix[k][l] == 1)
										{
											v = l;
											for (int q = 0; q < gagatner; q++)
												if (matrix[v][q] == 1)
												{
													u = q;
													if (matrix[u][gag2] == 1)
													{
														std::cout << "5 qaylov՝ V" << gag1 << " --> V" << h << " --> V" << k << " --> V"
															<< v << " --> V" << u << " --> V" << gag2 << std::endl;
														qan1++;
														w = 5;
													}
												}
										}
									}
								}
							}
						}
					}
				if (qan1 == 0)
					for (int i = 0; i < gagatner; i++)
					{
						if (matrix[gag1][i] == 1)
						{
							h = i;
							for (int j = 0; j < gagatner; j++)
							{
								if (matrix[h][j] == 1)
								{
									k = j;
									for (int l = 0; l < gagatner; l++)
									{
										if (matrix[k][l] == 1)
										{
											v = l;
											for (int q = 0; q < gagatner; q++)
												if (matrix[v][q] == 1)
												{
													u = q;
													for (int g = 0; g < gagatner; g++)
													{
														if (matrix[u][g] == 1)
														{
															b = g;
															if (matrix[b][gag2] == 1)
															{
																std::cout << "6 qaylov՝ V" << gag1 << " --> V" << h << " --> V" << k
																	<< " --> V" << v << " --> V" << u << " --> V" << b << " --> V" << gag2 <<std:: endl;
																qan1++;
																w = 6;
															}
														}
													}
												}
										}
									}
								}
							}
						}
					}
				int p;
				if (qan1 == 0)
					for (int i = 0; i < gagatner; i++)
					{
						if (matrix[gag1][i] == 1)
						{
							h = i;
							for (int j = 0; j < gagatner; j++)
							{
								if (matrix[h][j] == 1)
								{
									k = j;
									for (int l = 0; l < gagatner; l++)
									{
										if (matrix[k][l] == 1)
										{
											v = l;
											for (int q = 0; q < gagatner; q++)
												if (matrix[v][q] == 1)
												{
													u = q;
													for (int g = 0; g < gagatner; g++)
													{
														if (matrix[u][g] == 1)
														{
															b = g;
															{
																for (int t = 0; t < gagatner; t++)
																{
																	if (matrix[b][t] == 1)
																	{
																		p = t;
																		if (matrix[p][gag2] == 1)
																		{
																			std::cout << "7 qaylov՝ V" << gag1 << " --> V" << h << " --> V" << k
																				<< " --> V" << v << " --> V" << u
																				<< " --> V" << b << " --> V" << p << " --> V" << gag2 << std::endl;
																			qan1++;
																			w = 7;
																		}
																	}
																}
															}
														}
													}
												}
										}
									}
								}
							}
						}
					}
				if (w != -1)
					std::cout << "sharavix = " << w << std::endl;
				else std::cout << "chanaparh chka" << std::endl;
				std::cout << std::endl;
				std::cout << std::endl;
				std::cout << "tramagic" << std::endl;
				int qan2 = 0; int ww=-1;

				if (qan2 == 0)
				{
					if (qan2 == 0)
					{
						if (gag1 == gag2)
						{
							std::cout << "Nuyn gagatn e" << std::endl;
							qan2 = 1;
							ww = 0;
						}
					}
					for (int i = 0; i < gagatner; i++)
					{
						if (matrix[gag1][i] == 1)
						{
							h = i;
							for (int j = 0; j < gagatner; j++)
							{
								if (matrix[h][j] == 1 && j != h && j != gag1)
								{
									k = j;
									for (int l = 0; l < gagatner; l++)
									{
										if (matrix[k][l] == 1 && l != h && l != k && l != gag1)
										{
											v = l;
											for (int q = 0; q < gagatner; q++)
												if (matrix[v][q] == 1 && q != h && q != k && q != v && q != gag1)
												{
													u = q;
													for (int g = 0; g < gagatner; g++)
													{
														if (matrix[u][g] == 1 && g != h && g != k && g != v && g != u && g != gag1)
														{
															b = g;
															{
																for (int t = 0; t < gagatner; t++)
																{
																	if (matrix[b][t] == 1 && t != h && t != k && t != v && t != u && t != b && t != gag1)
																	{
																		p = t;
																		if (matrix[p][gag2] == 1 && gag2 != h && gag2 != k && gag2 != v
																			&& gag2 != u && gag2 != b && gag2 != p)
																		{
																			std::cout << "7 qaylov՝ V" << gag1 << " --> V" << h << " --> V" << k
																				<< " --> V" << v << " --> V" << u
																				<< " --> V" << b << " --> V" << p << " --> V" << gag2 << std::endl;
																			qan2++;
																			ww = 7;
																		}
																	}
																}
															}
														}
													}
												}
										}
									}
								}
							}
						}
					}
				}
				if (qan2 == 0)
					for (int i = 0; i < gagatner; i++)
					{
						if (matrix[gag1][i] == 1)
						{
							h = i;
							for (int j = 0; j < gagatner; j++)
							{
								if (matrix[h][j] == 1 && j != h && j != gag1)
								{
									k = j;
									for (int l = 0; l < gagatner; l++)
									{
										if (matrix[k][l] == 1 && l != h && l != k && l != gag1)
										{
											v = l;
											for (int q = 0; q < gagatner; q++)
												if (matrix[v][q] == 1 && q != h && q != k && q != v && q != gag1)
												{
													u = q;
													for (int g = 0; g < gagatner; g++)
													{
														if (matrix[u][g] == 1 && g != h && g != k && g != v && g != u && g != gag1)
														{
															b = g;
														if (matrix[b][gag2] == 1 && gag2 != h && gag2 != k && gag2 != v && gag2 != u)
															{
												std::cout << "6 qaylov՝ V" << gag1 << " --> V" << h << " --> V" << k
												<< " --> V" << v << " --> V" << u << " --> V" << b << " --> V" << gag2 << std::endl;
																qan2++;
																ww = 6;
															}
														}
													}
												}
										}
									}
								}
							}
						}
					}
				if (qan2 == 0)
					for (int i = 0; i < gagatner; i++)
					{
						if (matrix[gag1][i] == 1)
						{
							h = i;
							for (int j = 0; j < gagatner; j++)
							{
								if (matrix[h][j] == 1 && j != h && j != gag1)
								{
									k = j;
									for (int l = 0; l < gagatner; l++)
									{
										if (matrix[k][l] == 1 && l != h && l != k && l != gag1)
										{
											v = l;
											for (int q = 0; q < gagatner; q++)
												if (matrix[v][q] == 1 && q != h && q != k && q != v && q != gag1)
												{
													u = q;
													if (matrix[u][gag2] == 1 && gag2 != h && gag2 != k && gag2 != v)
													{
														std::cout << "5 qaylov՝ V" << gag1 << " --> V" << h << " --> V" << k << " --> V"
															<< v << " --> V" << u << " --> V" << gag2 << std::endl;
														qan2++;
														ww = 5;
													}
												}
										}
									}
								}
							}
						}
					}
				if (qan2 == 0)
					for (int i = 0; i < gagatner; i++)
					{
						if (matrix[gag1][i] == 1)
						{
							h = i;
							for (int j = 0; j < gagatner; j++)
							{
								if (matrix[h][j] == 1 && j != h && j != gag1)
								{
									k = j;
									for (int l = 0; l < gagatner; l++)
									{
										if (matrix[k][l] == 1 && l != h && l != k && l != gag1)
										{
											v = l;
											if (matrix[v][gag2] == 1 && gag2 != h && gag2 != k)
											{
												std::cout << "4 qaylov՝ V" << gag1 << " --> V" << h << " --> V" << k << " --> V"
													<< l << " --> V" << gag2 << std::endl;
												qan2++;
												ww = 4;
											}
										}
									}
								}
							}
						}
					}
				if (qan2 == 0)
				{
					for (int i = 0; i < gagatner; i++)
					{
						if (matrix[gag1][i] == 1)
						{
							h = i;
							for (int j = 0; j < gagatner; j++)
							{
								if (matrix[h][j] == 1 && j != h && j != gag1)

								{
									k = j;
									if (matrix[k][gag2] == 1 && gag2 != h)
									{
										std::cout << "3 qaylov՝  V" << gag1 << " --> V" << h
											<< " --> V" << k << " --> V" << gag2 << std::endl;
										qan2++;
										ww = 3;
									}
								}
							}
						}
					}
				}
				if (qan2 == 0)
				{
					for (int i = 0; i < gagatner; i++)
						if (matrix[gag1][i] == 1)
						{
							h = i;
							if (matrix[h][gag2] == 1)
							{
								std::cout << "2 qaylov`  V" << gag1 << " --> V" << h << " --> V" << gag2 << std::endl;
								qan2++;
								ww = 2;
							}
						}
				}
				if (qan2 == 0)
				{
					if (matrix[gag1][gag2] == 1)
						std::cout << "1 քայլով՝ V" << gag1 << "--> V" << gag2 << std::endl;
				}
				if (ww != -1)
					std::cout << "տրամագիծ = " << ww << std::endl;
				else std::cout << "Ճանապարհ չկա" << std::endl;

			}
	}
}
int main()
{
	int yntrel;
	do
	{
		std::cout << "      MENU" << std::endl;
		std::cout << "1.KDNDZ EV KKNDZ" << std::endl;
		std::cout << "2.GRAPH" << std::endl;
		std::cout << "3.ELQ" << std::endl;
		std::cout << "HRAMAN = ";
		std::cin >> yntrel;
		switch (yntrel)
		{
		case 1:
		{
			kdndz();
			break;
		}

		case 2:
		{
			graph();
			break;
		}
		case 3:
		{
			break;
		}
		default:
		{
			std::cout << "SXAL HRAMAN" << std::endl;
			break;
		}
		}
	} while (yntrel != 3);
	return 0;
}
