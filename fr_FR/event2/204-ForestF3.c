          void entrypoint_204_25() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 59>*/ 		printf("Retourne vite voir le <b<dragon d'eau>>,\nglou !")
          	  case 1:
/*< 60>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 83>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_116:
/*<116>*/ 				switch (story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */]) {
          				  case 0:
          					flw_119:
/*<119>*/ 					printf("Attention quand tu<r< fais exploser>>\nles poissons pleins d'épines, glou.\nLa détonation est aussi puissante\nque celle d'une bombe, glou !")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 31}
/*<118>*/ 					story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */] = true;
          					goto flw_119
          				}
          			  case 1:
/*< 82>*/ 				printf("Le Vénérable de la forêt t'appelle,\nglou ! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_116
          		}
          	}
          }

          void entrypoint_204_26() {
/*< 99>*/ 	start()
/*<100>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<101>*/ 		printf("Retourne vite voir le <b<dragon d'eau>>,\nglou !")
          	  case 1:
/*<102>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<104>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_138:
/*<138>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_141:
/*<141>*/ 					printf("Les fironotes sont amies avec tout\nle monde, glou. Elles nagent souvent\n<r<avec les petits poissons>>, glou !")
          				  case 1:
/*<139>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 140, 'param3': 31}
/*<140>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_141
          				}
          			  case 1:
/*<103>*/ 				printf("Le Vénérable de la forêt t'appelle,\nglou ! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_138
          		}
          	}
          }

          void entrypoint_204_09() {
/*<150>*/ 	start()
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x0EHé, Link !\nOn dirait que des poissons\npas commodes sont arrivés !\n\nS'ils te trouvent, tu risques de\npasser un sale quart d'heure !\nFais attention !")
          }

          void entrypoint_204_27() {
/*<166>*/ 	start()
/*<167>*/ 	printf("La forêt est tout inondée, glou !")
          }

          void entrypoint_204_10() {
/*< 35>*/ 	start()
/*< 17>*/ 	printf("\x0E\x01\x09\x04\x00\x0EAh, Link !\nOn dirait que tu as rassemblé\ntoutes les fironotes. Bon travail !\n\nÀ présent, retourne vite voir\nle <b<dragon d'eau>>.")
/*<195>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_204_28() {
/*<168>*/ 	start()
/*<169>*/ 	printf("Le grand dragon d'eau est\nen colère, glou !")
          }

          void entrypoint_204_29() {
/*<170>*/ 	start()
/*<171>*/ 	printf("Il y a moins de monstres dans la forêt,\nmaintenant, glou !")
          }

          void entrypoint_204_12() {
/*<146>*/ 	start()
/*<149>*/ 	printf("Ouah ! Un humain !\nPar ici, le courant est trop\nfort !\n\nC'est trop dangereux pour\nles humains ! Passe par\nl'autre côté !")
          }

          void entrypoint_204_30() {
/*< 41>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 23, 'param2': 0, 'next': 145, 'param3': 35}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 42, 'param3': 16}
/*< 42>*/ 	printf("Je suppose que le Vénérable fait\nréférence à la <r<détection>>.\n\n\nSon conseil est pertinent, \x0E\x01\x12\x04\x00\x02Maître.\nJ'ai en effet pu analyser les\ncaractéristiques des fironotes.")
/*<183>*/ 	story_flags[81 /* us: 805A9AEB 0x04, jp: 805ACD6B 0x04 */] = true;
/*<184>*/ 	open_dowsing_wheel(9)
/*< 53>*/ 	printf("J'ai configuré la <r<<pling>détection>> pour\nréagir aux fironotes.\nUtilisez\x2010la pour vos recherches.\n\nToutefois, il est <r<impossible d'utiliser\nla détection sous l'eau>>.\nSoyez\x2010en conscient.")
/*<181>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 54>*/ 	scene_flags[3 'Flooded Faron Woods'][20 /* 0x3 10 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_204_13() {
/*<147>*/ 	start()
/*<148>*/ 	printf("Hé, où tu vas, glou ? Le courant est\ntrop fort par ici, glou. Si tu veux sortir,\npasse par en haut, glou.")
          }

          void entrypoint_204_31() {
/*<172>*/ 	start()
/*<173>*/ 	printf("La forêt est pleine d'eau, glou !")
          }

          void entrypoint_204_14() {
/*<174>*/ 	start()
/*<176>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*<175>*/ 		printf("")
          	  case 1:
/*<177>*/ 		printf("")
          	}
          }

          void entrypoint_204_32() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<187>*/ 		printf("Retourne vite voir le <b<dragon d'eau>>,\nglou !")
          	  case 1:
/*<188>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<190>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_194:
/*<194>*/ 					printf("Quand tu attrapes une fironote, ta\n<r<jauge d'oxygène se remplit >>un peu,\nglou.")
          				  case 1:
/*<192>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 193, 'param3': 31}
/*<193>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_194
          				}
          			  case 1:
/*<189>*/ 				printf("Le Vénérable de la forêt t'appelle,\nglou ! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_191
          		}
          	}
          }

          void entrypoint_204_01() {
          	start()
/*<  2>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 23>*/ 			printf("\x0E\x01\x09\x04\x00\x07Même si tout est inondé, on va\nse débrouiller ! Passe le bonjour\nau <b<dragon d'eau>> !")
          		  case 1:
/*<120>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<121>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_123:
/*<123>*/ 					printf("\x0E\x01\x09\x04\x00\x01Je vais te donner un conseil !\nAttaque les pierres pour les faire\nrouler !")
          				  case 1:
/*<122>*/ 					printf("\x0E\x01\x09\x04\x00\x07Le Vénérable t'appelle !\nVa écouter ce qu'il a à te dire !")
          				}
          			  case 1:
          				goto flw_123
          			}
          		}
          	  case 1:
/*< 43>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x04Il y a plein d'eau qui est sortie\nde la <r<base du grand arbre>><pling>.\nÇa nous a tous surpris !\n\nAvec toute cette eau, on peut\nplus se cacher nulle part.\n\x0E\x01\x09\x04\x11\x05Est\x2010ce que la forêt pourrait\npas redevenir comme avant ?")
          	}
          }

          void entrypoint_204_02() {
/*<  3>*/ 	start()
/*<  5>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 25>*/ 			printf("\x0E\x01\x09\x04\x09\x0CQuand est\x2010ce que cette eau\nva s'en aller ? Je sais pas\nnager, moi !")
          		  case 1:
/*<124>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<137>*/ 					printf("\x0E\x01\x09\x04\x09\x0CUtilise ta fonction détection, n'importe\nquoi... mais trouve vite ces fironotes !")
          				  case 1:
/*<126>*/ 					printf("\x0E\x01\x09\x04\x00\x07Le Vénérable t'appelle !\nVa écouter ce qu'il a à te dire !")
          				}
          			  case 1:
/*<127>*/ 				printf("\x0E\x01\x09\x04\x09\x0CC'est le <b<dragon d'eau>> qui a\ntout inondé ?\nOn va se faire dévorer !")
          			}
          		}
          	  case 1:
/*< 44>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 4, 'param3': 31}
/*<  4>*/ 		printf("\x0E\x01\x09\x04\x09\x0CC'est la fin ! Qu'est\x2010ce que\nva devenir notre forêt ?")
          	}
          }

          void entrypoint_204_03() {
/*<  6>*/ 	start()
/*<  8>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 26>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x00\x07Même si c'est inondé, on va\nse débrouiller ! Passe le bonjour\nau <b<dragon d'eau >>!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<129>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_131:
/*<131>*/ 					printf("\x0E\x01\x09\x04\x11\x0BSi tu cherches les fironotes,\ndemande conseil aux Paraduses,\nils connaissent le sujet.\n[1]Qui ça ?[2-]Oui, je sais")
/*<178>*/ 					switch (choice(2)) {
          					  case 0:
/*<180>*/ 						printf("\x0E\x01\x09\x04\x0C\x01C'est les créatures avec une bouche\ntoute longue qui se promènent\ndans l'eau !")
          						flw_179:
/*<179>*/ 						printf("\x0E\x01\x09\x04\x0B\x05Si tu en croises un dans l'eau,\nparle\x2010lui !")
          					  case 1:
          						goto flw_179
          					}
          				  case 1:
/*<130>*/ 					printf("\x0E\x01\x09\x04\x00\x07Le Vénérable t'appelle !\nVa écouter ce qu'il a à te dire !")
          				}
          			  case 1:
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 45>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 31}
/*<  7>*/ 		printf("\x0E\x01\x09\x04\x00\x0FLe <b<dragon d'eau>> est arrivé !\nSi la forêt est dans cet état,\nc'est à cause d'elle, c'est obligé !")
          	}
          }

          void entrypoint_204_20() {
/*< 30>*/ 	start()
/*< 39>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 40>*/ 		printf("Retourne vite voir le <b<dragon d'eau>>,\nglou !")
          	  case 1:
/*< 48>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 77>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */]) {
          				  case 0:
          					flw_31:
/*< 31>*/ 					printf("Tu peux poursuivre les <b<fironotes >>qui\ns'enfuient à l'aide d'un <g<tourbillon>>, glou.\nElles seront aspirées et tu pourras\nles attraper, glou.\nAh, glou...<pause1E> Mais il paraît que ça\n<r<consomme >>de l'oxygène chez les\nhumains, alors n'en abuse pas,\nglou.")
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */] = true;
          					goto flw_31
          				}
          			  case 1:
/*< 49>*/ 				printf("Le Vénérable de la forêt t'appelle,\nglou ! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_105
          		}
          	}
          }

          void entrypoint_204_04() {
/*<  9>*/ 	start()
/*< 11>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 28>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 29>*/ 			printf("\x0E\x01\x09\x04\x00\x14Retourne vite voir le <b<dragon d'eau>> !")
          		  case 1:
/*<132>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<133>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<136>*/ 					printf("\x0E\x01\x09\x04\x00\x14Essaie d'utiliser la détection.\nTu trouveras les fironotes\nplus facilement !")
          				  case 1:
/*<134>*/ 					printf("\x0E\x01\x09\x04\x00\x07Le Vénérable t'appelle !\nVa écouter ce qu'il a à te dire !")
          				}
          			  case 1:
/*<135>*/ 				printf("\x0E\x01\x09\x04\x00\x14Si tu rassembles les fironotes,\ntu peux reconstituer la partition !\nRetrouve\x2010les toutes !")
          			}
          		}
          	  case 1:
/*< 46>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x00\x04J'ai vu le <b<dragon d'eau >>!\nElle doit sûrement se cacher\nquelque part !")
          	}
          }

          void entrypoint_204_21() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 63>*/ 		printf("Retourne vite voir le <b<dragon d'eau>>,\nglou !")
          	  case 1:
/*< 64>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 79>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_108:
/*<108>*/ 				switch (story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */]) {
          				  case 0:
          					flw_111:
/*<111>*/ 					printf("Les bulles violettes sont <r<empoisonnées>>,\nglou. Si tu les respires, elles te <r<coupent\nle souffle>>, glou. Alors fais attention,\nglou.")
          				  case 1:
/*<109>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 					story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */] = true;
          					goto flw_111
          				}
          			  case 1:
/*< 78>*/ 				printf("Le Vénérable de la forêt t'appelle,\nglou ! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_108
          		}
          	}
          }

          void entrypoint_204_05() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 18>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x00\x0ERetourne vite voir le <b<dragon d'eau>>.")
          		  case 1:
/*< 55>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x00\x0EOui, c'est ça ! La détection !\nTu devrais pouvoir t'en servir pour\ntrouver les fironotes restantes, non ?")
          			  case 1:
/*< 50>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*< 51>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 31}
/*< 52>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ah, te revoilà, Link !\n\n\n\nEst\x2010ce que ta collecte de <b<fironotes\n>>avance bien ? Parce que figure\x2010toi\nque j'ai eu une idée.\n\n\x0E\x01\x09\x04\x04\x11Pourquoi tu n'utilises pas cette\nchose, là ? Comment tu appelles\nça, déjà ?\n\nT'as bien utilisé un truc pour retrouver\nmes camarades l'autre fois, non ?\n\n\n\x0E\x01\x09\x04\x06\x09Je me disais que tu pourrais peut\x2010être\naussi t'en servir pour retrouver les\nfironotes...")
/*<144>*/ 					scene_flags[3 'Flooded Faron Woods'][26 /* 0x2 04 */] = true;
          				  case 1:
/*< 15>*/ 					printf("\x0E\x01\x09\x04\x00\x0EOh ! \x0E\x03\x01\x00Link !\n\n\n\n\x0E\x01\x09\x04\x06\x03Le <b<dragon d'eau>> a provoqué\nce déluge ? Elle s'est mise en\ncolère contre les monstres\nqui ravageaient la forêt ?\n\x0E\x01\x09\x04\x01\x0CAlors la forêt va rester comme\nça pendant un petit bout\nde temps. Hohoho...")
          				}
          			}
          		}
          	  case 1:
/*<163>*/ 		switch (scene_flags[27 /* 0x2 08 */]) {
          		  case 0:
/*<164>*/ 			printf("\x0E\x01\x09\x04\x06\x01De l'eau s'est brusquement mise à\ncouler de la <r<base du grand arbre>>\nderrière moi et la forêt s'est retrouvée\ninondée.\n\x0E\x01\x09\x04\x01\x06Je trouve que ça a son charme.\nHohoho !")
          		  case 1:
/*< 47>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 13, 'param3': 31}
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x0EOoh ! On se connaît, non ?\nTu es.<pause0F>.<pause0F>.<pause14> En fait, je crois pas\nque tu m'avais donné ton nom.\n\n\x0E\x01\x09\x04\x00\x03...<pause19> Hmm... Link ?\nC'est un drôle de nom, ça !\n\n\n\x0E\x01\x09\x04\x00\x00Et qu'est\x2010ce que je peux faire\npour toi ?\n[1]Cette eau...[2]La forêt...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_162:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x00\x02Ah, tu as remarqué ?\n\n\n\n\x0E\x01\x09\x04\x04\x00De l'eau s'est brusquement mise à\ncouler de la <r<base du grand arbre<pling>>>\nderrière moi et la forêt s'est retrouvée\ninondée.\n\x0E\x01\x09\x04\x00\x03Je ne sais pas ce qui a provoqué ça,\nmais au moins, ça va chasser les\nmonstres. Bon débarras.")
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 165, 'param3': 6}
/*<165>*/ 				scene_flags[3 'Flooded Faron Woods'][27 /* 0x2 08 */] = true;
          			  case 1:
          				goto flw_162
          			}
          		}
          	}
          }

          void entrypoint_204_22() {
/*< 65>*/ 	start()
/*< 67>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 68>*/ 		printf("Retourne vite voir le <b<dragon d'eau>>,\nglou !")
          	  case 1:
/*< 70>*/ 		switch (story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */]) {
          		  case 0:
/*< 75>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*< 81>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_76:
/*< 76>*/ 					printf("Si tu n'attrapes pas toutes les fironotes\nd'un même groupe <r<à la suite>>, elles\ns'enfuiront de la partition, glou.\n\nPour toutes les attraper d'un\ncoup, <r<aspire\x2010les >>en créant un\ncourant avec un<g< tourbillon>>, glou.")
          				  case 1:
/*< 80>*/ 					printf("La forêt est tout inondée, glou !")
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
/*< 69>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 66, 'param3': 31}
/*< 66>*/ 			printf("Tu cherches les fironotes, glou ?\n[1]Oui[2]Non")
/*< 71>*/ 			switch (choice(2)) {
          			  case 0:
/*< 73>*/ 				printf("Alors je vais te donner un conseil, glou.\n\n\n\nSi tu n'attrapes pas toutes les fironotes\nd'un même groupe <r<à la suite>>, elles\ns'enfuiront de la partition, glou.\n\nPour toutes les attraper d'un\ncoup, <r<aspire\x2010les >>en créant un\ncourant avec un<g< tourbillon>>, glou.\n\nTout est question de...\n<pause1E>détermination, glou !")
/*< 74>*/ 				story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */] = true;
          			  case 1:
/*< 72>*/ 				printf("Ah bon, glou... Je croyais, glou.")
          			}
          		}
          	}
          }

          void entrypoint_204_06() {
/*< 16>*/ 	start()
/*< 19>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 21>*/ 		story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */] = true;
/*<182>*/ 		story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = false;
/*<160>*/ 		story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = false;
/*< 36>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 37>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 38>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          				flw_34:
/*< 34>*/ 				changeScene(7, 0) // 
          			  case 1:
          				goto flw_34
          			}
          		  case 1:
          			goto flw_34
          		}
          	  case 1:
/*< 20>*/ 		printf("\x0E\x01\x09\x04\x00\x06Si tu veux que je reconnaisse ta valeur,\nrassemble vite les <r<fironotes>>.")
          	}
          }

          void entrypoint_204_23() {
/*< 84>*/ 	start()
/*< 85>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 86>*/ 		printf("Retourne vite voir le <b<dragon d'eau>>,\nglou !")
          	  case 1:
/*< 87>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 89>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_112:
/*<112>*/ 				switch (story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */]) {
          				  case 0:
          					flw_115:
/*<115>*/ 					printf("Si tu n'attrapes pas toutes les fironotes\nd'une même couleur <r<à la suite>>, elles\ns'enfuiront de la partition, glou. Mais\ngarde ton calme, glou.")
          				  case 1:
/*<113>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 114, 'param3': 31}
/*<114>*/ 					story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */] = true;
          					goto flw_115
          				}
          			  case 1:
/*< 88>*/ 				printf("Le Vénérable de la forêt t'appelle,\nglou ! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_112
          		}
          	}
          }

          void entrypoint_204_24() {
/*< 90>*/ 	start()
/*< 91>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 92>*/ 		printf("Retourne vite voir le <b<dragon d'eau>>,\nglou !")
          	  case 1:
/*< 93>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 95>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_96:
/*< 96>*/ 				switch (scene_flags[24 /* 0x2 01 */]) {
          				  case 0:
/*<196>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
          						flw_98:
/*< 98>*/ 						printf("Les <b<poissons enragés>> sont revenus,\nglou ! Tous aux abris, glou !\n\n\nIls viendront pas nous attaquer\nsi on se réfugie <r<dans les\nprofondeurs>>, glou !")
          					  case 1:
/*<152>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 197, 'param3': 31}
/*<197>*/ 						scene_flags[3 'Flooded Faron Woods'][70 /* 0x9 40 */] = true;
          						goto flw_98
          					}
          				  case 1:
/*< 97>*/ 					printf("Ils font peur ces gros poissons,\nà foncer sur tout ce qui bouge, glou !\nEnfin, pour le moment, il y en a\npas dans les parages, glou.")
          				}
          			  case 1:
/*< 94>*/ 				printf("Le Vénérable de la forêt t'appelle,\nglou ! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_96
          		}
          	}
          }

          void entrypoint_204_07() {
/*<153>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 155, 'param3': 47}
/*<155>*/ 	set_camera(4, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 158, 'param3': 48}
/*<158>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 157, 'param3': 6}
/*<157>*/ 	printf("\x0E\x01\x09\x04\x00\x0EHé, Link !\nTu m'entends ?\n\n\nJe viens d'avoir une idée !\nViens me voir, que je t'explique !")
/*<159>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

