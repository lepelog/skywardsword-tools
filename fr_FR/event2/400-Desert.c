          void entrypoint_400_13() {
/*< 33>*/ 	start()
/*< 34>*/ 	printf("...")
          }

          void entrypoint_400_65() {
/*<161>*/ 	start()
/*<162>*/ 	printf("Nous somme arrivés aux\n<b<mines de Lanelle>>.\n\n\nJe peux utiliser la détection\npour trouver l'entrée de l'épreuve\nqui vous guidera vers la flamme\nsacrée.")
/*<163>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_30() {
/*<234>*/ 	start()
/*<235>*/ 	printf("Quoi ? Tu veux travailler ici ?\nAlors enlève ce drôle de chapeau\net mets un casque !")
/*<244>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_14() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("Tu bloques le passage du wagonnet qui\nest devant la porte ! Écarte\x2010toi.")
/*< 71>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_66() {
/*<164>*/ 	start()
/*<165>*/ 	printf("Nous sommes arrivés au\n<b<désert de Lanelle>>.\n\n\nJe peux utiliser la détection\npour trouver l'entrée de l'épreuve\nqui vous guidera vers la flamme\nsacrée.")
/*<166>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_31() {
/*<236>*/ 	start()
/*<237>*/ 	printf("...")
          }

          void entrypoint_400_15() {
/*< 37>*/ 	start()
/*<307>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<308>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_38:
/*< 38>*/ 			printf("...")
          		  case 1:
/*<345>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				flw_310:
/*<310>*/ 				printf("...")
          			  case 1:
/*<309>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 310, 'param3': 31}
          				goto flw_310
          			}
          		}
          	  case 1:
          		goto flw_38
          	}
          }

          void entrypoint_400_67() {
/*<167>*/ 	start()
/*<168>*/ 	printf("Nous sommes arrivés au\n<b<temple du temps>>.\n\n\nJe peux utiliser la détection\npour trouver l'entrée de l'épreuve\nqui vous guidera vers la flamme\nsacrée.")
/*<169>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_32() {
/*<238>*/ 	start()
/*<239>*/ 	printf("Ces derniers temps, des individus\nétranges nous attaquent. Nous ne\nsommes pas armés, alors s'ils s'en\nprennent à nous, on est finis !")
/*<245>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_16() {
/*< 39>*/ 	start()
/*<  9>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<311>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<312>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_12:
/*< 12>*/ 				printf("Tu es encore là ? Sois prudent !")
          			  case 1:
/*<313>*/ 				printf("Tu cherches les trois dragons ?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au\nsud de la <b<grotte de Lanelle>> ! Pour\nles autres, je sais pas.")
/*<344>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_12
          		}
          	  case 1:
/*<  5>*/ 		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
          		  case 0:
          			flw_10:
/*< 10>*/ 			printf("Maintenant, il peut <r<transporter des\nobjets dans ses mandibules>>.\n\n\nSois prudent !")
/*< 77>*/ 			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
/*<283>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<  6>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<277>*/ 				printf("\x0E\x01\x09\x04\x1303\x00Merci de m'avoir aidé !")
/*<278>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 279, 'param3': 47}
/*<279>*/ 				set_camera(6, 0)
/*<281>*/ 				{'type': 'type3', 'subType': 2, 'param1': 27, 'param2': 356, 'next': 280, 'param3': 15}
/*<280>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 7, 'param3': 48}
/*<  7>*/ 				printf("\x0E\x01\x09\x04\x1303\x00Un peu plus et ils me déconnectaient !\n\n\n\nTiens...<pause1E> Je vois que tu as un <y<scarabée>>.\nOn les fabrique ici, à Lanelle. Mais le\ntien est un vieux modèle.\n\nPour te remercier, je vais l'améliorer.\n\x0E\x01\x09\x04\x1303\x00Passe\x2010le\x2010moi un instant !")
/*< 91>*/ 				make_actor_do_something(0, 0)
/*<284>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 8, 'param3': 42}
/*<  8>*/ 				give_item(75 0x4B);
/*< 11>*/ 				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
          				goto flw_10
          			  case 1:
/*<  4>*/ 				printf("Au secours !")
/*< 76>*/ 				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
/*<228>*/ 				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_400_50() {
/*< 58>*/ 	start()
/*<142>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 59>*/ 	printf("\x0E\x01\x05\x04Z\x00\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au\nrapport. Nous sommes arrivés dans\nles <b<mines de Lanelle>>.")
          }

          void entrypoint_400_68() {
/*<170>*/ 	start()
/*<172>*/ 	set_camera(-1, 0)
/*<171>*/ 	printf("Félicitations, \x0E\x01\x12\x04\x00\x04Maître\nLink.")
/*<173>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, par cette épreuve, vous avez\nobtenu la force d'âme et l'artefact qui\nvous permettront d'aller recueillir la\nflamme sacrée dans votre épée.")
/*<175>*/ 	set_camera(3, 0)
/*<174>*/ 	printf("Ce <y<grappin>> est l'une des reliques\nlaissées par la Déesse.\n\n\nEn déployant ses chaînes munies\nde griffes, vous pouvez vous tracter\nvers des <r<cibles>> ou du <r<lierre>>.")
/*<177>*/ 	set_camera(-1, 0)
/*<176>*/ 	printf("La flamme se trouve quelque part\ndans ce désert... Elle devrait se\ntrouver dans un endroit que vous\nn'avez pas encore exploré, \x0E\x01\x12\x04\x00\x01Maître.")
          }

          void entrypoint_400_33() {
/*<240>*/ 	start()
/*<241>*/ 	printf("...")
          }

          void entrypoint_400_17() {
/*< 40>*/ 	start()
/*<125>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<216>*/ 		switch (scene_flags[89 /* 0xA 02 */]) {
          		  case 0:
/*<218>*/ 			printf("\x0E\x01\x09\x04\x16\x2007Je vais pouvoir inspecter ce qu'il y a\nà l'intérieur ! \x0E\x01\x09\x04\x00\x2000Et après il faudra que\nje retourne au vallon du sceau.\nJe suis débordé !")
          		  case 1:
/*<126>*/ 			printf("\x0E\x01\x09\x04\x15\x1B09Quoi ? T'es allé à l'intérieur ?!\n\n\n\n\x0E\x01\x09\x04\x15\x1B00Comment ? Il y avait un passage\nsecret pour s'y rendre ? T'aurais\npu me le dire !\n\n\x0E\x01\x09\x04\x08\x2100J'étais sur le point de laisser tomber et\nde rentrer, mais j'ai entendu un gros\nbruit. Alors je suis revenu et le passage\nétait dégagé.\n\x0E\x01\x09\x04\x16\x2007Je vais pouvoir inspecter ce qu'il y a à\nl'intérieur ! \x0E\x01\x09\x04\x00\x2000Et après, il faudra que je\nretourne au vallon du sceau. Je suis\ndébordé !")
/*<217>*/ 			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
          		}
          	  case 1:
/*<150>*/ 		switch (scene_flags[73 /* 0x8 02 */]) {
          		  case 0:
/*<152>*/ 			printf("\x0E\x01\x09\x04\x16\x2007Je me demande ce qu'il y a de l'autre\ncôté. Il y aurait pas un autre chemin\nqui mène au temple...?")
          		  case 1:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x02Tiens, comme on se retrouve !\nJe sais que je suis mal placé pour dire\nça, mais t'es vraiment partout, toi !\n\n\x0E\x01\x09\x04\x17\x2008Enfin, écoute plutôt. J'ai fait la\ndécouverte du siècle !\n\n\n\x0E\x01\x09\x04\x00\x2000Ici, c'est le <b<temple du temps>>, un endroit\nhautement sacré.\n\n\n\x0E\x01\x09\x04\x00\x190AEt là, j'ai vu des <r<habitantes de la\nlégendaire île de la Déesse >>!\nJe les ai vues de mes yeux !\n\n\x0E\x01\x09\x04\x00\x1900Elles avaient des vêtements identiques\nà ceux décrits dans les écrits anciens\net elles te ressemblaient beaucoup !\n\n\x0E\x01\x09\x04\x08\x2105Elles étaient deux. Quand elles ont\nfranchi ce portail, j'ai voulu les\nsuivre...\n\n\x0E\x01\x09\x04\x15\x1B00Mais il y a eu une grosse explosion et\nle portail s'est retrouvé dans cet état.\n\x0E\x01\x09\x04\x16\x2007On peut plus passer par là.\n\nJe me demande bien ce qu'il y a de\nl'autre côté.")
/*<151>*/ 			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
          		}
          	}
          }

          void entrypoint_400_51() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("Je détecte un glissement temporel\ndans cette zone.\n\n\nLe choc infligé à la pierre bleue a fait\nremonter le temps. Cet endroit est\nmaintenant <r<<pling>tel qu'il était dans le passé>>.")
          }

          void entrypoint_400_69() {
/*<207>*/ 	start()
/*<208>*/ 	printf("Afin de prévenir les accidents\ndu travail, respectons les\nconsignes de sécurité !\n                              Le chef d'usine")
          }

          void entrypoint_400_34() {
/*<242>*/ 	start()
/*<243>*/ 	printf("Tu t'intéresses aux chronolithes ?\nAlors tu devrais aller visiter la\n<b<raffinerie de Lanelle>>.")
/*<246>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_52() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf("J'ai détecté dans les environs des\nmatériaux identiques à ceux qui\ncomposent ce <b<générateur>>. Vous pouvez\nles localiser à l'aide de la <r<<pling>détection>>.")
/*<220>*/ 	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<294>*/ 	open_dowsing_wheel(3)
/*<268>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_35() {
/*<247>*/ 	start()
/*<248>*/ 	printf("...")
          }

          void entrypoint_400_01() {
          	start()
/*<  1>*/ 	printf("...")
          }

          void entrypoint_400_19() {
/*< 42>*/ 	start()
/*<314>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<315>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf("...")
          		  case 1:
/*<347>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_43
          			  case 1:
/*<316>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 43, 'param3': 31}
          				goto flw_43
          			}
          		}
          	  case 1:
          		goto flw_43
          	}
          }

          void entrypoint_400_53() {
/*< 92>*/ 	start()
/*<113>*/ 	story_flags[109 /* us: 805A9AE1 0x04, jp: 805ACD61 0x04 */] = true;
/*<114>*/ 	printf("")
/*<159>*/ 	set_camera(1, 0)
/*<160>*/ 	printf("")
/*<178>*/ 	set_camera(-1, 0)
/*<179>*/ 	printf("")
          }

          void entrypoint_400_70() {
/*<209>*/ 	start()
/*<210>*/ 	printf("Prévision d'expédition pour ce\nmois\x2010ci : 150 unités\n\n                              Le chef d'usine")
          }

          void entrypoint_400_36() {
/*<249>*/ 	start()
/*<250>*/ 	printf("Les chronolithes sont la source\nd'énergie qui nous permet à nous\net aux machines de fonctionner.\nAlors on a pas le temps de discuter !")
/*<259>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("")
/*< 72>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_54() {
/*<100>*/ 	start()
/*<205>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<206>*/ 		printf("\x0E\x01\x09\x04\x2F08\x709Tu es entré dans le domaine\ndu dragon, Link ?<pause54>\n\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDAh ! Je suis jaloux !<pause5A>\n\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDJe voulais être le premier !")
          		flw_149:
/*<149>*/ 		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<269>*/ 		story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<270>*/ 		story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<271>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<272>*/ 		story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          	  case 1:
/*<109>*/ 		switch (scene_flags[75 /* 0x8 08 */]) {
          		  case 0:
/*<111>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD0AJ'ai trouvé le passage qui mène\nau domaine du <r<dragon de foudre>>...<pause2D>\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800Mais il est trop étroit, je peux\npas passer.\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700 Comment faire...?")
          			goto flw_149
          		  case 1:
/*<112>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 105, 'param3': 31}
/*<105>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<275>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Salut, Link !")
/*<276>*/ 				set_camera(5, 0)
/*<108>*/ 				printf("Alors, cette <b<flamme sacrée >>dont\ntu parlais, tu l'as trouvée ?\n\n\nJ'arrête pas d'y penser. Raconte\x2010moi\ntout !\n\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14> Il a fallu que tu fasses tout ça pour\nla trouver ?!\n\n\nT'es vraiment impressionnant,\nLink.")
/*<358>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0ABon, je vais te dire ce que j'ai\ndécouvert à propos de la légende\ndes trois dragons.<pause0F>\n\nPlus loin dans le désert, il y a bien\nun domaine caché !\n\n\nJ'ai trouvé un <r<passage étroit<pling> >>dans\nlequel je peux pas passer !\n\n\n\x0E\x01\x09\x04\x2F00\xD00Si mon intuition me fait pas défaut,\nça doit être le domaine d'un des trois\ndragons, le <r<dragon de foudre>> !\n\n\x0E\x01\x09\x04\x2F00\x800Je suis sûr que ça a un rapport avec\nles robots qui vivent ici.<pause0F>\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDLe <r<dragon de foudre>>, les robots,\nles chronolithes<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDQuelle aventure !")
/*<107>*/ 				printf("\x0E\x01\x09\x04\x08\xD00Au fait, Link,\nl'investissement que tu as fait dans mes\nfouilles a enfin porté ses fruits !<pause14>\n\nJ'ai trouvé tout un tas de chronolithes\nlà\x2010bas ! \x0E\x01\x09\x04\x2F00\xD01Je peux te rendre dix fois ce\nque tu m'as prêté !")
/*<106>*/ 				rupees += 100;
          				flw_285:
/*<285>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 110, 'param3': 42}
/*<110>*/ 				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
          				goto flw_149
          			  case 1:
/*<273>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Salut, Link !")
/*<274>*/ 				set_camera(5, 0)
/*<211>*/ 				printf("Alors, cette <b<flamme sacrée >>dont\ntu parlais, tu l'as trouvée ?\n\n\nJ'arrête pas d'y penser. Raconte\x2010moi\ntout !\n\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14> Il a fallu que tu fasses tout ça pour\nla trouver ?!\n\n\nT'es vraiment impressionnant,\nLink.")
/*<359>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0ABon, je vais te dire ce que j'ai\ndécouvert à propos de la légende\ndes trois dragons.<pause0F>\n\nPlus loin dans le désert, il y a bien\nun domaine caché !\n\n\nJ'ai trouvé un <r<passage étroit<pling> >>dans\nlequel je peux pas passer !\n\n\n\x0E\x01\x09\x04\x2F00\xD00Si mon intuition me fait pas défaut,\nça doit être le domaine d'un des trois\ndragons, le <r<dragon de foudre>> !\n\n\x0E\x01\x09\x04\x2F00\x800Je suis sûr que ça a un rapport avec\nles robots qui vivent ici.<pause0F>\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDLe <r<dragon de foudre>>, les robots,\nles chronolithes<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDQuelle aventure !")
          				goto flw_285
          			}
          		}
          	}
          }

          void entrypoint_400_71() {
/*<213>*/ 	start()
/*<214>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au\nrapport.")
/*<298>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 299, 'param3': 30}
/*<299>*/ 	printf("Les symboles figurant sur ce\ngénérateur correspondent à ceux\ndes générateurs que vous avez\nactivés.\nIl est probable qu'il y ait un lien.")
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_37() {
/*<251>*/ 	start()
/*<252>*/ 	printf("...")
          }

          void entrypoint_400_03() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("...")
          }

          void entrypoint_400_20() {
/*< 44>*/ 	start()
/*< 63>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<317>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<318>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				printf("Je ne me lasserai jamais d'admirer\nle temple du temps !")
          			  case 1:
/*<319>*/ 				printf("Tu cherches les trois dragons ?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au\nsud de la <b<grotte de Lanelle>> ! Pour\nles autres, je sais pas.")
/*<346>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 94>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*< 96>*/ 			printf("J'ai eu chaud. Merci de m'avoir aidé.")
/*< 93>*/ 			make_actor_do_something(1, 0)
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x03\x900Là\x2010bas, c'est le <b<temple du temps>>.\nIl renferme la sainte <b<porte du temps\n>>érigée par la Déesse.\n\n\x0E\x01\x09\x04\x03\x900Je suis chargé du ménage autour du\ntemple ! Si tu veux te rendre à la porte\ndu temps, il faut passer par ce portail.\n\n\x0E\x01\x09\x04\x03\x900Comment ? S'il y a un autre moyen d'y\naccéder ?\n\n\n\x0E\x01\x09\x04\x03\x900La <b<raffinerie de Lanelle >>est reliée\nau <b<temple du temps >>par un <r<passage\nsouterrain>>. Je vais t'indiquer où elle\nse trouve...")
/*<202>*/ 			make_actor_do_something(2, 0)
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 30}
/*<215>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 90, 'param3': 6}
/*< 90>*/ 			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
/*< 99>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 97, 'param3': 6}
/*< 97>*/ 			printf("Tiens ? Ta carte... Elle est bizarre.\nAttends, je vais corriger ça.")
/*< 64>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 197, 'param3': 30}
/*<197>*/ 			{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 67, 'param3': 15}
/*< 67>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 200, 'param3': 34}
/*<200>*/ 			set_camera(4, 0)
/*<199>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 65, 'param3': 17}
/*< 65>*/ 			printf("\x0E\x01\x09\x04\x03\x900La raffinerie de Lanelle est un peu\nplus loin. Sois prudent !")
/*<203>*/ 			make_actor_do_something(3, 0)
/*< 68>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 89, 'param3': 14}
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 101, 'param3': 17}
/*<101>*/ 			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<196>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
/*<198>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 201, 'param3': 17}
/*<201>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 204, 'param3': 42}
/*<204>*/ 			make_actor_do_something(4, 0)
          		  case 1:
/*< 95>*/ 			printf("Au secours !")
/*<127>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_400_55() {
/*<102>*/ 	start()
/*<286>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, Fay au rapport.\nJe ne ressens plus l'aura de\ndame <b<Zelda>>.")
/*<287>*/ 	set_camera(7, 0)
/*<288>*/ 	printf("Lorsque cette porte a été détruite,\nla présence de dame Zelda a\ncomplètement disparu.<pling> <r<Il n'est\nplus possible de la détecter>>.")
/*<289>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("La femme qui accompagnait\ndame Zelda vous a dit d'aller voir\nl'Ancienne au vallon du sceau...\n\nIl y a dans ma mémoire une personne\ncorrespondant à cette description.\nJe vous recommande de vous rendre\nau <b<temple du sceau>>.")
/*<104>*/ 	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
/*<219>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_400_72() {
/*<221>*/ 	start()
/*<222>*/ 	printf("Voici le tableau mensuel\ndes responsables du ménage\nau temple du temps.\n                              Le chef d'usine")
          }

          void entrypoint_400_38() {
/*<253>*/ 	start()
/*<254>*/ 	printf("Ce n'est pas courant de voir des\nhumains par ici. Tu t'intéresses aux\nchronolithes ?")
/*<260>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_04() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("")
/*< 73>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_21() {
/*< 46>*/ 	start()
/*<320>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<321>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_47:
/*< 47>*/ 			printf("...")
          		  case 1:
/*<349>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_47
          			  case 1:
/*<322>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 47, 'param3': 31}
          				goto flw_47
          			}
          		}
          	  case 1:
          		goto flw_47
          	}
          }

          void entrypoint_400_56() {
/*<128>*/ 	start()
/*<129>*/ 	printf("")
          }

          void entrypoint_400_73() {
/*<223>*/ 	start()
/*<224>*/ 	printf("Les arbres et les plantes\ncommencent à mourir !\nIl faut reboiser Lanelle !\n                              Le chef d'usine")
          }

          void entrypoint_400_39() {
/*<255>*/ 	start()
/*<256>*/ 	printf("...")
          }

          void entrypoint_400_05() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("")
          }

          void entrypoint_400_22() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 79>*/ 		switch (scene_flags[30 /* 0x2 40 */]) {
          		  case 0:
/*<323>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<324>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_81:
/*< 81>*/ 					switch (scene_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*< 83>*/ 						printf("Voici la <b<raffinerie de Lanelle >>!\nC'est ici qu'on travaille les\nchronolithes.\n\n\x0E\x01\x09\x04\x1303\x00Elle est toujours aussi\nimpressionnante !")
          					  case 1:
/*< 82>*/ 						printf("Tu as réussi à déchiffrer la\ncombinaison ? Je suis impressionné.\n\n\n\x0E\x01\x09\x04\x1303\x00Voici la <b<raffinerie de Lanelle >>! C'est ici\nqu'on travaille les chronolithes.\n\n\n\x0E\x01\x09\x04\x1303\x00Elle est toujours aussi\nimpressionnante !")
/*< 84>*/ 						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
          						flw_85:
/*< 85>*/ 						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
          					}
          				  case 1:
/*<325>*/ 					printf("Tu cherches les trois dragons ?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au\nsud de la <b<grotte de Lanelle>> ! Pour\nles autres, je sais pas.")
/*<348>*/ 					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          				}
          			  case 1:
          				goto flw_81
          			}
          		  case 1:
/*< 80>*/ 			printf("Tu as trouvé les trois symboles de la\ncombinaison ? Mais il ne suffit pas de\nles avoir trouvés pour ouvrir la\nraffinerie.")
          			goto flw_85
          		}
          	  case 1:
/*< 49>*/ 		printf("Qui es\x2010tu ?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Ceci est le générateur qui contrôle\nl'entrée de la raffinerie de Lanelle !\n\n\n\x0E\x01\x09\x04\x1303\x00Il est impossible d'ouvrir la raffinerie\nsans la <r<combinaison composée de trois\nsymboles>>.")
/*< 86>*/ 		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
          	}
          }

          void entrypoint_400_57() {
/*<130>*/ 	start()
/*<131>*/ 	printf("\x0E\x01\x05\x04Z\x00C'est une terre aride qui s'est\nchangée en désert en seulement\nquelques siècles. ")
          }

          void entrypoint_400_74() {
/*<229>*/ 	start()
/*<230>*/ 	switch (scene_flags[11 /* 0x0 08 */]) {
          	  case 0:
          	  case 1:
/*< 62>*/ 		printf("Cet élément semble hors service\ndepuis de nombreuses années.\nIl m'est impossible de déchiffrer\nses paroles.")
/*<231>*/ 		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
          	}
          }

          void entrypoint_400_06() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("")
/*< 74>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_23() {
/*< 50>*/ 	start()
/*<326>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<327>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf("...")
          		  case 1:
/*<351>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_51
          			  case 1:
/*<328>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 31}
          				goto flw_51
          			}
          		}
          	  case 1:
          		goto flw_51
          	}
          }

          void entrypoint_400_58() {
/*<132>*/ 	start()
/*<133>*/ 	printf("\x0E\x01\x05\x04Z\x00Il est probable que dame <b<Zelda>>\nsoit arrivée dans cette zone.")
/*<267>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<266>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_40() {
/*<257>*/ 	start()
/*<258>*/ 	printf("Un de nos compagnons s'est fait\nenlever ! On raconte qu'il risque\nde se faire déconnecter.")
/*<261>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_75() {
/*<291>*/ 	start()
/*<292>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 2, 'next': 293, 'param3': 40}
/*<293>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': -1, 'param3': 6}
          }

          void entrypoint_400_07() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf("...")
          }

          void entrypoint_400_24() {
/*< 52>*/ 	start()
/*<186>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<329>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<330>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_187:
/*<187>*/ 				printf("Tu as réussi à déchiffrer la\ncombinaison ? Impressionnant.")
          			  case 1:
/*<331>*/ 				printf("Tu cherches les trois dragons ?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au\nsud de la <b<grotte de Lanelle>> ! Pour\nles autres, je sais pas.")
/*<350>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_187
          		}
          	  case 1:
/*<115>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<116>*/ 			printf("Ouah ! Mais qu'est\x2010ce que tu fais ?!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Même si tu as trouvé les symboles,\nça ne suffira pas à ouvrir la raffinerie.")
          			flw_155:
/*<155>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
/*<157>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<180>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 53>*/ 				printf("Tu cherches la combinaison pour\nentrer dans la raffinerie de Lanelle ?\n\n\n\x0E\x01\x09\x04\x1303\x00Tu as l'air très bizarre. Je ne donnerai\njamais la combinaison à un individu\naussi suspect.\n\n\x0E\x01\x09\x04\x1303\x00Surtout, ne touche pas au générateur\net ne t'amuse pas à y planter cette\népée !")
          				goto flw_155
          			  case 1:
/*<181>*/ 				printf("Ton accoutrement est très étrange.\nTu es très suspect !\n\n\n\x0E\x01\x09\x04\x1303\x00Ne va pas toucher au générateur et ne\nt'amuse pas à y planter ton épée !")
          				goto flw_155
          			}
          		}
          	}
          }

          void entrypoint_400_59() {
/*<134>*/ 	start()
/*<143>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<135>*/ 	printf("\x0E\x01\x05\x04Z\x00Nous sommes arrivés au\n<b<désert de Lanelle>>. Une brusque\ndésertification a grandement\nmodifié la nature de ces terres.")
          }

          void entrypoint_400_76() {
/*<295>*/ 	start()
/*<296>*/ 	printf("Nous sommes arrivés au\n<b<temple du temps>>.\n\n\nJe peux utiliser la détection\npour trouver l'entrée de l'épreuve\nqui vous guidera vers la flamme\nsacrée.")
/*<297>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_08() {
/*< 23>*/ 	start()
/*<225>*/ 	switch (scene_flags[29 /* 0x2 20 */]) {
          	  case 0:
/*<226>*/ 		printf("C'est dangereux pour les humains.\nIl ne faut pas toucher cette pierre\nbleue ! Évite de nous gêner dans notre\ntravail.")
          	  case 1:
/*< 24>*/ 		printf("Par où es\x2010tu arrivé ? Ici, nous\nextrayons des chronolithes pour les\ntransporter jusqu'à la <b<raffinerie de\nLanelle>>.\n\x0E\x01\x09\x04\x1303\x00C'est dangereux pour les humains.\nÉvite de toucher cette pierre bleue !")
/*<227>*/ 		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
/*< 75>*/ 		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          	}
          }

          void entrypoint_400_25() {
/*< 54>*/ 	start()
/*<332>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<333>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_55:
/*< 55>*/ 			printf("...")
          		  case 1:
/*<353>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_55
          			  case 1:
/*<334>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
          				goto flw_55
          			}
          		}
          	  case 1:
          		goto flw_55
          	}
          }

          void entrypoint_400_77() {
/*<301>*/ 	start()
/*<302>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au\nrapport. Vous avez découvert\nles trois symboles.\n\nRetournez au <r<générateur>> qui se trouve\ndevant la <b<raffinerie de Lanelle>>.")
          }

          void entrypoint_400_09() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("...")
          }

          void entrypoint_400_26() {
/*< 56>*/ 	start()
/*<188>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<335>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<336>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_189:
/*<189>*/ 				printf("Tu as réussi à déchiffrer\nla combinaison ?\nImpressionnant.")
          			  case 1:
/*<337>*/ 				printf("Tu cherches les trois dragons ?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au\nsud de la <b<grotte de Lanelle>> ! Pour\nles autres, je sais pas.")
/*<352>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_189
          		}
          	  case 1:
/*<117>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*<118>*/ 			printf("Ouah ! Mais qu'est\x2010ce que tu fais ?!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Même si tu as trouvé les symboles,\nça ne suffira pas à ouvrir la raffinerie.")
          			flw_153:
/*<153>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<158>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<182>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 57>*/ 				printf("Tu cherches la combinaison pour\nentrer dans la raffinerie de Lanelle ?\n\n\n\x0E\x01\x09\x04\x1303\x00Ton accoutrement est très étrange.\nJe ne donnerai jamais la combinaison\nà un individu aussi suspect.\n\n\x0E\x01\x09\x04\x1303\x00Ne t'amuse pas à toucher au générateur\net surtout ne va pas y planter cette\népée !")
          				goto flw_153
          			  case 1:
/*<183>*/ 				printf("Ton accoutrement est très étrange.\nTu es très suspect !\n\n\n\x0E\x01\x09\x04\x1303\x00Ne va pas toucher au générateur\net ne t'amuse pas à y planter\nton épée !")
          				goto flw_153
          			}
          		}
          	}
          }

          void entrypoint_400_60() {
/*<136>*/ 	start()
/*<137>*/ 	printf("\x0E\x01\x05\x04Z\x00Je détecte en de nombreux endroits\ndes <r<sables mouvants>> susceptibles\nde vous engloutir. Le niveau de\ndanger a augmenté de 30 %.")
          }

          void entrypoint_400_78() {
/*<303>*/ 	start()
/*<304>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au\nrapport. Mon analyse indique qu'il est\npossible d'actionner ce <r<générateur >>en\nlui fournissant une source d'électricité.")
          }

          void entrypoint_400_27() {
/*<119>*/ 	start()
/*<338>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<339>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_120:
/*<120>*/ 			printf("...")
          		  case 1:
/*<355>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_120
          			  case 1:
/*<340>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
          				goto flw_120
          			}
          		}
          	  case 1:
          		goto flw_120
          	}
          }

          void entrypoint_400_61() {
/*<138>*/ 	start()
/*<139>*/ 	printf("\x0E\x01\x05\x04Z\x00Pour éviter le danger, je vous\nconseille de regarder votre carte\navec \x0E\x02\x04\x02\x3CD pour <r<<r<<pling><r<étudier le terrain>>.\x0E\x01\x11\x02\x3CD")
          }

          void entrypoint_400_79() {
/*<305>*/ 	start()
/*<306>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au\nrapport.\n\n\nVotre carte correspond à 35 % à la zone\noù nous nous trouvons. La topographie\nactuelle de cette zone est très\ndifférente.\nLe robot a modifié votre carte pour\nqu'elle représente la zone <r<dans le\npassé>><pling>, avant qu'elle ne soit recouverte\npar les sables.")
          }

          void entrypoint_400_10() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("On utilise ce wagonnet pour\ntransporter les chronolithes.\nLes humains ne peuvent pas\nmonter dedans. Allez, va\x2010t'en.")
/*< 69>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_28() {
/*<121>*/ 	start()
/*<190>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<341>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<342>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				printf("Tu as réussi à déchiffrer\nla combinaison ?\nImpressionnant.")
          			  case 1:
/*<343>*/ 				printf("Tu cherches les trois dragons ?\n\n\n\n\x0E\x01\x09\x04\x1303\x00Le <b<dragon de foudre>> se trouve au\nsud de la <b<grotte de Lanelle>> ! Pour\nles autres, je sais pas.")
/*<354>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_191
          		}
          	  case 1:
/*<123>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<124>*/ 			printf("Ouah !\nMais qu'est\x2010ce que tu fais ?!\n\n\n\x0E\x01\x09\x04\x1303\x00Même si tu as trouvé les symboles, ça\nne suffira pas à ouvrir la raffinerie.")
          			flw_154:
/*<154>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<156>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
          		  case 1:
/*<184>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<122>*/ 				printf("Tu cherches la combinaison pour\nentrer dans la raffinerie de Lanelle ?\n\n\n\x0E\x01\x09\x04\x1303\x00Ton accoutrement est très étrange.\nJe ne donnerai jamais la combinaison\nà un individu aussi suspect.\n\n\x0E\x01\x09\x04\x1303\x00Ne t'amuse pas à toucher au\ngénérateur et surtout ne\nva pas y planter cette épée !")
          				goto flw_154
          			  case 1:
/*<185>*/ 				printf("Ton accoutrement est très étrange.\nTu es très suspect !\n\n\n\x0E\x01\x09\x04\x1303\x00Ne va pas toucher au générateur\net ne t'amuse pas à y planter\nton épée !")
          				goto flw_154
          			}
          		}
          	}
          }

          void entrypoint_400_62() {
/*<140>*/ 	start()
/*<141>*/ 	printf("\x0E\x01\x05\x04Z\x00Il est probable que dame <b<Zelda >>soit\npassée par ici. Comme je vous l'ai dit,\ncette zone est très dangereuse.\n\n\x0E\x01\x05\x04Z\x00Nous devons également découvrir\npourquoi elle a agi ainsi à <b<Ordinn>>.\nJe vous conseille donc de la retrouver\nau plus vite.")
          }

          void entrypoint_400_11() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("...")
          }

          void entrypoint_400_63() {
/*<144>*/ 	start()
/*<145>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au\nrapport.\n\n\nVous vous trouvez sur des sables\nmouvants dans lesquels vous ne\npouvez pas vous enfoncer. Je vous\nconseille de consulter votre carte.")
/*<192>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 261, 'next': 193, 'param3': 30}
/*<193>*/ 	printf("Les voies qui étaient là autrefois sont\nactuellement enfouies sous les sables\nmouvants.\n\nVous pouvez donc marcher dessus sans\nrisquer de vous enfoncer.\n\n\nJe vous conseille de placer des balises\nsur votre carte pour repérer les voies\nd'autrefois et les emprunter.")
/*<212>*/ 	printf("Je vous conseille d'utiliser <b<plusieurs>><pling>\nbalises.")
/*<195>*/ 	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
/*<194>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_29() {
/*<232>*/ 	start()
/*<233>*/ 	printf("...")
          }

          void entrypoint_400_80() {
/*<356>*/ 	start()
/*<357>*/ 	printf("Les <b<virevoltants >>roulent parfois sur le\nsol du désert de Lanelle.\n\n\nOn les utilise en général comme\nmatériau. Il est possible de les attraper\nà l'aide d'un <r<filet à papillons>>.")
          }

          void entrypoint_400_12() {
/*< 31>*/ 	start()
/*< 32>*/ 	printf("Ne me parle pas pendant que\nje travaille, ça me dérange !")
/*< 70>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_64() {
/*<146>*/ 	start()
/*<147>*/ 	printf("\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Hé ! Mais c'est pas\nLink que je vois,\nlà en bas ?\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDTu tombes bien !<pause0F>\nIl fallait que je te parle !<pause0F>\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDMonte me voir une seconde !")
/*<148>*/ 	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<262>*/ 	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<263>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<264>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<265>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

