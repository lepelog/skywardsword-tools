          void entrypoint_204_25() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Retourne vite voir le <color blue<dragon d'eau>coloroff>,\nglou!")
          	  case 1:
/*< 60>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 83>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_116:
/*<116>*/ 				switch (story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */]) {
          				  case 0:
          					flw_119:
/*<119>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "Attention quand tu<color red< fais exploser>coloroff>\nles poissons pleins d'épines, glou.\nLa détonation est aussi puissante\nque celle d'une bombe, glou!")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 31}
/*<118>*/ 					story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */] = true;
          					goto flw_119
          				}
          			  case 1:
/*< 82>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
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
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Retourne vite voir le <color blue<dragon d'eau>coloroff>,\nglou!")
          	  case 1:
/*<102>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<104>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_138:
/*<138>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_141:
/*<141>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "Les fironotes sont amies avec tout\nle monde, glou. Elles nagent souvent\n<color red<avec les petits poissons>coloroff>, glou!")
          				  case 1:
/*<139>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 140, 'param3': 31}
/*<140>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_141
          				}
          			  case 1:
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
          			}
          		  case 1:
          			goto flw_138
          		}
          	}
          }

          void entrypoint_204_09() {
/*<150>*/ 	start()
/*<151>*/ 	printf(/* textboxtype: 1, unk: 2, line: 25 */ "<0x10009:0x0000000e>Kwaa, <heroname>!\nOn dirait que des poissons\nmalcommodes sont arrivés!\n\nS'ils te trouvent, tu risques de passer\nun mauvais quart d'heure! Kwaaa.\nFais attention!")
          }

          void entrypoint_204_27() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "La forêt est tout inondée, glou!")
          }

          void entrypoint_204_10() {
/*< 35>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 2, line: 24 */ "<0x10009:0x0000000e>Kwaaa, <heroname>!\nOn dirait que tu as rassemblé\ntoutes les fironotes. Bon travail!\n\nMaintenant, retourne vite voir\nle <color blue<dragon d'eau>coloroff>. Kwa.")
/*<195>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_204_28() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Le grand dragon d'eau est\ntrès fâché, glou!")
          }

          void entrypoint_204_29() {
/*<170>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "Il y a moins de monstres dans la forêt,\nmaintenant, glou!")
          }

          void entrypoint_204_12() {
/*<146>*/ 	start()
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "C'est un humain! Par ici, le courant\nest trop fort!\n\n\nC'est trop dangereux pour les humains!\nPasse par l'autre côté!")
          }

          void entrypoint_204_30() {
/*< 41>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 23, 'param2': 0, 'next': 145, 'param3': 35}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 42, 'param3': 16}
/*< 42>*/ 	printf(/* textboxtype: 2, unk: 0, line: 48 */ "Tout indique que le Vénérable fait\nréférence à la <color red<détection>coloroff>.\n\n\nSon conseil est pertinent, <0x10012:0x00000002>Maître.\nJ'ai en effet pu analyser les\ncaractéristiques des fironotes.")
/*<183>*/ 	story_flags[81 /* us: 805A9AEB 0x04, jp: 805ACD6B 0x04 */] = true;
/*<184>*/ 	open_dowsing_wheel(9)
/*< 53>*/ 	printf(/* textboxtype: 2, unk: 0, line: 49 */ "J'ai configuré la <color red<<sound 4>détection>coloroff> pour\nréagir aux fironotes.\nUtilisez‐la pour vos recherches.\n\nToutefois, il est <color red<impossible d'utiliser\nla détection sous l'eau>coloroff>.\nSoyez‐en conscient.")
/*<181>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 54>*/ 	scene_flags[3 'Flooded Faron Woods'][20 /* 0x3 10 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_204_13() {
/*<147>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Hé, où tu vas, glou? Le courant est\ntrop fort par ici, glou. Si tu veux sortir,\npasse par en haut, glou.")
          }

          void entrypoint_204_31() {
/*<172>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "La forêt est pleine d'eau, glou!")
          }

          void entrypoint_204_14() {
/*<174>*/ 	start()
/*<176>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*<175>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "")
          	  case 1:
/*<177>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "")
          	}
          }

          void entrypoint_204_32() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Retourne vite voir le <color blue<dragon d'eau>coloroff>,\nglou!")
          	  case 1:
/*<188>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<190>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0, line: 40 */ "Quand tu attrapes une fironote, ta\n<color red<jauge d'oxygène se remplit >coloroff>un peu,\nglou.")
          				  case 1:
/*<192>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 193, 'param3': 31}
/*<193>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_194
          				}
          			  case 1:
/*<189>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
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
/*< 23>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000007>Même si tout est inondé, on va\nse débrouiller! Passe le bonjour\nau <color blue<dragon d'eau>coloroff>! Kwo-ko!")
          		  case 1:
/*<120>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<121>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_123:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000001>Je vais te donner un conseil!\nAttaque les pierres pour les faire\nrouler! Kwo-ko!")
          				  case 1:
/*<122>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Le Vénérable t'appelle! Kwii!\nVa écouter ce qu'il a à te dire!")
          				}
          			  case 1:
          				goto flw_123
          			}
          		}
          	  case 1:
/*< 43>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000004>Koro-kwo! Il y a plein d'eau qui est\nsortie de la <color red<base du grand arbre>coloroff><sound 4>.\nÇa nous a tous surpris!\n\nAvec toute cette eau, on peut\nplus se cacher nulle part. Kwa!\n<0x10009:0x00110005>Est‐ce que la forêt pourrait\npas redevenir comme avant?")
          	}
          }

          void entrypoint_204_02() {
/*<  3>*/ 	start()
/*<  5>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0009000c>Quand est‐ce que cette eau va s'en\naller? Je sais pas nager, moi! Kwo!")
          		  case 1:
/*<124>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<137>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x0009000c>Utilise ta fonction détection, ou \nn'importe quoi... mais trouve vite ces\nfironotes! Kwo-ko!")
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Le Vénérable t'appelle! Kwii!\nVa écouter ce qu'il a à te dire!")
          				}
          			  case 1:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x0009000c>C'est le <color blue<dragon d'eau>coloroff> qui a tout\ninondé? Les Kikwis vont tous se faire\ndévorer! Kwo-ko!")
          			}
          		}
          	  case 1:
/*< 44>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 4, 'param3': 31}
/*<  4>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0009000c>C'est la fin! Qu'est‐ce que va\ndevenir notre forêt? Kwo?")
          	}
          }

          void entrypoint_204_03() {
/*<  6>*/ 	start()
/*<  8>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 26>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000007>Même si c'est inondé, on va se\ndébrouiller! Passe le bonjour\nau <color blue<dragon d'eau>coloroff>! Kwii-kwii!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<129>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_131:
/*<131>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x0011000b>Si tu cherches les fironotes, demande\nconseil aux Paraduses, ils connaissent\nle sujet. Kii-kwii!\n[1-]Paraduses?[2]Oui, je sais")
/*<178>*/ 					switch (choice(2)) {
          					  case 0:
/*<180>*/ 						printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c0001>Kwaa. C'est les créatures avec\nune bouche toute longue qui se\npromènent dans l'eau!")
          						flw_179:
/*<179>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x000b0005>Si tu en croises un dans l'eau,\nparle‐lui! Kwaa!")
          					  case 1:
          						goto flw_179
          					}
          				  case 1:
/*<130>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Le Vénérable t'appelle! Kwii!\nVa écouter ce qu'il a à te dire!")
          				}
          			  case 1:
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 45>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 31}
/*<  7>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000f>Le <color blue<dragon d'eau>coloroff> est arrivé! Si la forêt\nest dans cet état, c'est à cause d'elle,\nc'est clair! Kii-kwii!")
          	}
          }

          void entrypoint_204_20() {
/*< 30>*/ 	start()
/*< 39>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Retourne vite voir le <color blue<dragon d'eau>coloroff>,\nglou!")
          	  case 1:
/*< 48>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 77>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */]) {
          				  case 0:
          					flw_31:
/*< 31>*/ 					printf(/* textboxtype: 1, unk: 0, line: 28 */ "Tu peux poursuivre les <color blue<fironotes >coloroff>qui\ns'enfuient à l'aide d'un <color green<tourbillon>coloroff>, glou.\nElles seront aspirées et tu pourras\nles attraper, glou.\nAh, glou...<pause 30> Mais il paraît que les\nhumains <color red<consomment >coloroff>de l'oxygène\nquand ils font ça, alors n'exagère\npas, glou.")
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */] = true;
          					goto flw_31
          				}
          			  case 1:
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
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
/*< 29>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000014>Retourne vite voir le <color blue<dragon d'eau>coloroff>!")
          		  case 1:
/*<132>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<133>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000014>Essaie d'utiliser la détection.\nTu trouveras les fironotes plus\nfacilement! Kwa.")
          				  case 1:
/*<134>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Le Vénérable t'appelle! Kwii!\nVa écouter ce qu'il a à te dire!")
          				}
          			  case 1:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00000014>Si tu rassembles les fironotes,\ntu peux reconstituer la partition!\nKwa! Retrouve‐les toutes!")
          			}
          		}
          	  case 1:
/*< 46>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000004>Ka-kwa! J'ai vu le <color blue<dragon d'eau>coloroff>!\nElle doit sûrement se cacher\nquelque part! Kwa.\n")
          	}
          }

          void entrypoint_204_21() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Retourne vite voir le <color blue<dragon d'eau>coloroff>,\nglou!")
          	  case 1:
/*< 64>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 79>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_108:
/*<108>*/ 				switch (story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */]) {
          				  case 0:
          					flw_111:
/*<111>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "Les bulles violettes sont <color red<empoisonnées>coloroff>,\nglou. Si tu les respires, elles te <color red<coupent\nle souffle>coloroff>, glou. Alors fais attention,\nglou.")
          				  case 1:
/*<109>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 					story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */] = true;
          					goto flw_111
          				}
          			  case 1:
/*< 78>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
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
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x0000000e>Retourne vite voir le <color blue<dragon d'eau>coloroff>.")
          		  case 1:
/*< 55>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x0000000e>Kwaaa! Oui, c'est ça! La détection!\nTu devrais pouvoir t'en servir pour\ntrouver les fironotes restantes, kwa?")
          			  case 1:
/*< 50>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*< 51>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 31}
/*< 52>*/ 					printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000001>Ah, te revoilà, <heroname>!\n\n\n\nEst‐ce que ta collecte de <color blue<fironotes\n>coloroff>avance bien? Imagine‐toi que j'ai\neu une idée. Kwa.\n\n<0x10009:0x00040011>Pourquoi tu n'utilises pas cette\nchose, là? Comment tu appelles\nça, déjà?\n\nT'avais bien utilisé un bidule pour\nretrouver mes camarades l'autre\nfois, kwaa?\n\n<0x10009:0x00060009>Je me disais que tu pourrais peut‐être\naussi t'en servir pour retrouver les\nfironotes, kwaa?")
/*<144>*/ 					scene_flags[3 'Flooded Faron Woods'][26 /* 0x2 04 */] = true;
          				  case 1:
/*< 15>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000e>Oh! <0x30001:0x><heroname>!\n\n\n\n<0x10009:0x00060003>Le <color blue<dragon d'eau>coloroff> a provoqué ce déluge?\nKwaa! Elle s'est fâchée contre les\nmonstres qui ravageaient la forêt?\n\n<0x10009:0x0001000c>La forêt va rester comme ça pendant\nun petit bout de temps. Kwaa...")
          				}
          			}
          		}
          	  case 1:
/*<163>*/ 		switch (scene_flags[27 /* 0x2 08 */]) {
          		  case 0:
/*<164>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00040000>De l'eau s'est brusquement mise à\ncouler de la <color red<base du grand arbre<sound 4> >coloroff>\nderrière moi et la forêt s'est retrouvée\ninondée.\n<0x10009:0x00010006>Je trouve que ça a son charme.\nHohoho!")
          		  case 1:
/*< 47>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 13, 'param3': 31}
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x0000000e>Ooh! On se connaît, non? Tu es.<pause 15>.<pause 15>.<pause 20>\nKwaa. Je ne me souviens pas t'avoir\ndemandé ton nom.\n\n<0x10009:0x00000003>...<pause 25> Hmm... <heroname>?\nC'est un drôle de nom, ça! Kwa!\n\n\n<0x10009:0x00000000>Et qu'est‐ce que je peux faire\npour toi? Ka-kwa?\n[1-]Cette eau...[2-]La forêt...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_162:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000002>Kwaa, tu as remarqué?\n\n\n\n<0x10009:0x00040000>De l'eau s'est brusquement mise à\ncouler de la <color red<base du grand arbre<sound 4> >coloroff>\nderrière moi et la forêt s'est retrouvée\ninondée.\n<0x10009:0x00000003>Je ne sais pas ce qui a provoqué ça,\nmais au moins, ça va chasser les\nmonstres. Bon débarras. Kwa.")
/*< 32>*/ 				wait_frames(1)
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
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Retourne vite voir le <color blue<dragon d'eau>coloroff>,\nglou!")
          	  case 1:
/*< 70>*/ 		switch (story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */]) {
          		  case 0:
/*< 75>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*< 81>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "Si tu n'attrapes pas toutes les fironotes\nd'un même groupe <color red<l'une à la suite de\nl'autre>coloroff>, elles s'enfuiront de la \npartition, glou.\nPour toutes les attraper d'un\ncoup, <color red<aspire‐les >coloroff>en créant un\ncourant avec un<color green< tourbillon>coloroff>, glou.")
          				  case 1:
/*< 80>*/ 					printf(/* textboxtype: 1, unk: 0, line: 42 */ "La forêt est tout inondée, glou!")
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
/*< 69>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 66, 'param3': 31}
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Tu cherches les fironotes, glou?\n[1-]Oui[2-]Non")
/*< 71>*/ 			switch (choice(2)) {
          			  case 0:
/*< 73>*/ 				printf(/* textboxtype: 1, unk: 0, line: 32 */ "Je vais te donner un conseil, glou.\n\n\n\nSi tu n'attrapes pas toutes les\nfironotes d'un même groupe\n<color red<l'une à la suite de l'autre>coloroff>, elles\ns'enfuiront de la partition, glou.\nPour toutes les attraper d'un\ncoup, <color red<aspire‐les >coloroff>en créant un\ncourant avec un<color green< tourbillon>coloroff>, glou.\n\nTout est question de...\n<pause 30>détermination, glou!")
/*< 74>*/ 				story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */] = true;
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0, line: 31 */ "Ah bon, glou... Excuse-moi, glou.")
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
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000006>Si tu veux que je reconnaisse ta valeur,\nrassemble vite les <color red<fironotes>coloroff>.")
          	}
          }

          void entrypoint_204_23() {
/*< 84>*/ 	start()
/*< 85>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Retourne vite voir le <color blue<dragon d'eau>coloroff>,\nglou!")
          	  case 1:
/*< 87>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 89>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_112:
/*<112>*/ 				switch (story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */]) {
          				  case 0:
          					flw_115:
/*<115>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "Si tu n'attrapes pas toutes les fironotes\nd'une même couleur <color red<l'une à la suite de\nl'autre>coloroff>, elles s'enfuiront de la\npartition, glou.\nMais garde ton calme, glou.")
          				  case 1:
/*<113>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 114, 'param3': 31}
/*<114>*/ 					story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */] = true;
          					goto flw_115
          				}
          			  case 1:
/*< 88>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
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
/*< 92>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Retourne vite voir le <color blue<dragon d'eau>coloroff>,\nglou!")
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
/*< 98>*/ 						printf(/* textboxtype: 1, unk: 0, line: 39 */ "Les <color blue<poissons enragés>coloroff> sont revenus,\nglou! Nage qui peut, glou!\n\n\nIls viendront pas nous attaquer\nsi on se réfugie <color red<dans les\nprofondeurs>coloroff>, glou!")
          					  case 1:
/*<152>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 197, 'param3': 31}
/*<197>*/ 						scene_flags[3 'Flooded Faron Woods'][70 /* 0x9 40 */] = true;
          						goto flw_98
          					}
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "Ils font peur ces gros poissons,\nà foncer sur tout ce qui bouge, glou!\nAu moins, pour le moment, il n'y en a\npas dans les parages, glou.")
          				}
          			  case 1:
/*< 94>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Le Vénérable de la forêt t'appelle,\nglou! Va écouter ce qu'il a à te dire,\nglou.")
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
/*<158>*/ 	wait_frames(15)
/*<157>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x0000000e>Kwaa, <heroname>!\nM'entends-tu?\n\n\nJe viens d'avoir une idée!\nViens me voir, que je t'explique!")
/*<159>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

