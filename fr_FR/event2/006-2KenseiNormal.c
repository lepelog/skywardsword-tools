          void entrypoint_006_209() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[463 /* us: 805A9B0F 0x01, jp: 805ACD8F 0x01 */]) {
          	  case 0:
/*< 34>*/ 		printf("Il est cependant à noter que dame\nZelda vient d'être emmenée par un\nmystérieux individu qui s'est mis en\nchemin vers un autre lieu.\nCherchez conseil auprès de la statue de\nla Déesse à la <b<source de la terre>>,\ncomme vous l'avez fait à la <b<source de la\ncontemplation>>.<entrypoint_296>")
          	  case 1:
/*< 35>*/ 		printf("La probabilité de retrouver dame\nZelda saine et sauve diminue\nsignificativement. Il est primordial\nde la rejoindre dès que possible.<entrypoint_296>")
          	}
          }

          void entrypoint_006_243() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */]) {
          	  case 0:
/*< 63>*/ 		printf("Afin d'être en mesure de faire quelque\nchose pour Narisha, il vous faudra\napprendre l'<g<attaque tornade >>auprès\nd'<b<Arfan>>.<entrypoint_296>")
          	  case 1:
/*< 64>*/ 		printf("<b<Arfan >>a longuement étudié Narisha.\nJe vous recommande de l'interroger.<entrypoint_296>")
          	}
          }

          void entrypoint_006_226() {
/*< 65>*/ 	start()
/*< 66>*/ 	switch (story_flags[157 /* us: 805A9AE0 0x08, jp: 805ACD60 0x08 */]) {
          	  case 0:
/*< 67>*/ 		printf("Je vous suggère de mener vos\nrecherches à la <b<mer de sable de\nLanelle>>, dont l'accès vous est\nmaintenant permis grâce au <y<grappin>>.<entrypoint_296>")
          	  case 1:
/*< 68>*/ 		printf("La probabilité que le <y<grappin >>obtenu\nlors de l'<r<épreuve>> du <b<désert de Lanelle\n>>vous permette d'accéder à une nouvelle\nzone des <b<terres de Lanelle >>est de 96 %.<entrypoint_296>")
          	}
          }

          void entrypoint_006_244() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 57>*/ 		printf("Attention cependant. Narisha se trouve\ndans des dispositions particulièrement\nagressives. Il semble difficile de lui\nparler dans ces conditions.\nJe vous suggère de le débarrasser\npréalablement du parasite qui\nl'affaiblit, au moyen de l'<g<attaque\ntornade>>.<entrypoint_296>")
          	  case 1:
/*< 60>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*< 58>*/ 			printf("La probabilité de voir apparaître\n<b<Narisha >>si vous lui apportez sa <y<soupe de\ncitrouille>> favorite est de 90 %.\n\nJe vous suggère d'apporter la soupe sur\nla petite île surmontée d'un\n<r<arc\x2010en\x2010ciel>>, à l'intérieur du\n<b<cumulonimbus>>.<entrypoint_296>")
          		  case 1:
/*< 59>*/ 			printf("La probabilité d'obtenir des\ninformations sur le lieu où se trouve\nNarisha en interrogeant le patron de la\nCitrouille perchée est de 85 %.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_296() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("Votre temps de jeu pour cette session\nest de <r<\x0E\x02\x03\x06\x00\x00\x2CD h <numeric arg1(2)>>>. Votre temps de jeu \ntotal est de <r<<numeric arg2(2)> h \x0E\x02\x03\x06\x00\x03\x2CD>>. Terminé.")
          }

          void entrypoint_006_227() {
/*< 77>*/ 	start()
/*< 78>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 80>*/ 		printf("Je vous recommande de retourner chez\nle capitaine avec la carte marine que\nvous avez trouvée.<entrypoint_296>")
          	  case 1:
/*< 79>*/ 		printf("Trouvez la carte marine dans la <b<maison\ndu capitaine>> et allez la lui remettre.\nElle vous permettra de retrouver son\nnavire.<entrypoint_296>")
          	}
          }

          void entrypoint_006_248() {
/*<  2>*/ 	start()
/*<  3>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<  4>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*<  5>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
          			  case 1:
/*<  6>*/ 				printf("Vous avez obtenu deux mélodies du\n<r<Chant du héros>>. À présent, allez\ntrouver le troisième dragon, gardien\ndes <b<terres de Lanelle>>.\n[1]Et ensuite ?[2-]D'accord !")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					printf("Une fois les trois mélodies du Chant du\nhéros en votre possession, vous\npourrez le reconstituer auprès de\n<b<Narisha>>, le grand esprit des cieux.\nLa voie vers la <y+<Triforce>> s'ouvrira alors\ndevant vous.\n\n\nVotre mission ultime est de triompher\nde l'<b<Avatar du Néant>> grâce à la\n<y+<Triforce>>. C'est là votre destin, \x0E\x01\x12\x04\x00\x02Maître.<entrypoint_296>")
          				  case 1:
          				}
          			}
          		  case 1:
/*<  7>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*<  8>*/ 				printf("Vous avez obtenu deux mélodies du\n<r<Chant du héros>>. À présent, allez\ntrouver le troisième dragon, gardien\ndes <b<terres d'Ordinn>>.\n[1]Et ensuite ?[2-]D'accord !")
          				goto flw_16
          			  case 1:
/*<  9>*/ 				printf("Vous avez obtenu une mélodie du\n<r<Chant du héros>>. Allez trouver les deux\nautres dragons, gardiens des <b<terres\nd'Ordinn et de Lanelle>>.\n[1]Et ensuite ?[2-]D'accord !")
          				goto flw_16
          			}
          		}
          	  case 1:
/*< 10>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 11>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 15>*/ 				printf("Vous avez obtenu deux mélodies du\n<r<Chant du héros>>. À présent, allez\ntrouver le troisième dragon, gardien\ndes <b<terres de Firone>>.\n[1]Et ensuite ?[2-]D'accord !")
          				goto flw_16
          			  case 1:
/*< 12>*/ 				printf("Vous avez obtenu une mélodie du\n<r<Chant du héros>>. Allez trouver les deux\nautres dragons, gardiens des <b<terres de\nFirone et de Lanelle>>.\n[1]Et ensuite ?[2-]D'accord !")
          				goto flw_16
          			}
          		  case 1:
/*< 13>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 14>*/ 				printf("Vous avez obtenu une mélodie du\n<r<Chant du héros>>. Allez trouver les deux\nautres dragons, gardiens des <b<terres de\nFirone et d'Ordinn>>.\n[1]Et ensuite ?[2-]D'accord !")
          				goto flw_16
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_006_249() {
/*< 18>*/ 	start()
/*< 19>*/ 	printf("Je vous suggère de retourner auprès de\n<b<Narisha>>, le grand esprit des cieux, afin\nde reconstituer le Chant du héros.\n[1]Et ensuite ?[2-]D'accord !")
/*< 20>*/ 	switch (choice(2)) {
          	  case 0:
/*< 21>*/ 		printf("Une fois le Chant du héros reconstitué,\nla voie vers la <y+<Triforce >>vous sera\nouverte.\n\nVotre mission ultime est de triompher\nde l'<b<Avatar du Néant>> grâce à la\n<y+<Triforce>>. C'est là votre destin, \x0E\x01\x12\x04\x00\x02Maître.")
          	  case 1:
          	}
          }

          void entrypoint_006_217() {
/*< 36>*/ 	start()
/*< 84>*/ 	switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          	  case 0:
/*< 85>*/ 		printf("En dirigeant les moulins vers la tour de\nlumière, une structure est apparue à\nson sommet.<entrypoint_296>")
          	  case 1:
/*< 82>*/ 		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          		  case 0:
/*< 37>*/ 			printf("Il existe 80 % de chances que le moulin\nréparé par <b<Picoro >>soit l'une des <r<deux\ngrandes ailes>>.<entrypoint_296>")
          		  case 1:
/*< 81>*/ 			switch (story_flags[1108 /* us: 805A9B54 0x04, jp: 805ACDD4 0x04 */]) {
          			  case 0:
/*< 83>*/ 				printf("Il y a 85 % de chances que l'objet que\nvous avez récemment découvert soit\nl'<r<hélice du moulin>>. Je ne connais pas le\nrapport entre celle\x2010ci et les deux ailes.\nJe vous recommande de rapporter\ncette hélice à Célesbourg au moyen\ndu robot de l'atelier de rénovation.<entrypoint_296>")
          			  case 1:
/*< 39>*/ 				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          				  case 0:
/*< 40>*/ 					printf("Bien que rien n'établisse un rapport\ncertain entre ce fait et les deux ailes, il\nest clair que l'<r<hélice du moulin>> est\ntombée à travers les nuages.\nLocalisez l'hélice grâce à la <g<fonction\ndétection>>, et vous pourrez alors utiliser\nle robot de l'atelier de rénovation pour\nla rapporter à Célesbourg.<entrypoint_296>")
          				  case 1:
/*< 41>*/ 					switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          					  case 0:
/*< 42>*/ 						printf("Bien que rien n'établisse un rapport\ncertain entre ce fait et les deux ailes, il\nest clair que l'<r<hélice du moulin>> est\ntombée à travers les nuages.\nJe vous suggère de trouver le moyen de\nla récupérer.<entrypoint_296>")
          					  case 1:
/*< 38>*/ 						printf("La formulation est sibylline. Je vous\nsuggère néanmoins de parcourir\nCélesbourg en recherchant deux\néléments similaires à de grandes ailes.<entrypoint_296>")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_006_200() {
          	start()
/*<  1>*/ 	printf("Je vous suggère de <g<plonger >>dans la\n<r<colonne de lumière >>qui perce les nuages\npour tenter de retrouver dame <b<Zelda\n>>sur la terre.\nLa colonne se trouve au sud de\n<b<Célesbourg>>.<entrypoint_296>")
          }

          void entrypoint_006_201() {
/*< 22>*/ 	start()
/*< 23>*/ 	switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          	  case 0:
/*< 24>*/ 		printf("Je vous suggère de suivre les\nrecommandations de l'Ancienne au\n<b<temple du sceau >>en vous dirigeant\nvers la <b<forêt de Firone>>.<entrypoint_296>")
          	  case 1:
/*< 25>*/ 		printf("La terre présente des signes de\ncivilisation. Je vous suggère de\ncommencer par explorer les environs\nde votre point de chute.<entrypoint_296>")
          	}
          }

          void entrypoint_006_236() {
/*< 47>*/ 	start()
/*< 48>*/ 	switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          	  case 0:
/*< 49>*/ 		printf("Un édifice se trouve au sommet du\nvolcan. Je vous suggère de l'explorer.<entrypoint_296>")
          	  case 1:
/*< 50>*/ 		printf("Afin d'étouffer les flammes qui\nempêchent votre progression, vous\ndevez transporter la <r<bassine d'eau >>du\ndragon d'eau jusqu'au mur de flammes.<entrypoint_296>")
          	}
          }

          void entrypoint_006_202() {
/*< 26>*/ 	start()
/*< 27>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*< 71>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 72>*/ 			printf("Je vous recommande de monter sur le\ndos du vénérable <b<Lorion>> pour obtenir\nl'objet qui se transmet dans la tribu des\nTikwis.")
          		  case 1:
/*< 28>*/ 			printf("Selon les dires de <b<Lorion >>le Vénérable\nTikwi, retrouver tous les Tikwis perdus\ndevrait nous garantir leur coopération.<entrypoint_296>")
          		}
          	  case 1:
/*< 31>*/ 		switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          		  case 0:
/*< 29>*/ 			printf("Selon les dires de <b<Pirsel>> le Tikwi, la\nprobabilité qu'un rapport existe entre\nle Vénérable Tikwi et notre recherche\nde dame Zelda est de 80 %.<entrypoint_296>")
          		  case 1:
/*< 30>*/ 			printf("Il est probable que la présence de\ndame Zelda ait été remarquée. La\nrecherche de témoins pourrait\ns'avérer stratégiquement efficace.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_222() {
/*< 43>*/ 	start()
/*< 44>*/ 	switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("Le dragon d'eau a ouvert l'accès au\nlieu qui abrite la <r<flamme de Farore>>.\n\n\nJe détecte la présence d'ennemis, et\nvous suggère de vous équiper de\nmanière appropriée avant de pénétrer\ndans l'enceinte.<entrypoint_296>")
          	  case 1:
/*< 46>*/ 		printf("Afin d'obtenir la flamme sacrée des\n<b<terres de Firone>>, il vous faut accomplir\nla quête du dragon d'eau.\n\nLà où elle peut être utilisée, la<g< fonction\ndétection>> pourra vous aider à trouver\nl'<y<eau sacrée >>qu'elle vous a demandée.<entrypoint_296>")
          	}
          }

          void entrypoint_006_240() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          	  case 0:
/*< 53>*/ 		printf("Vous devez continuer à avancer,\n\x0E\x01\x12\x04\x00\x01Maître. La probabilité de retrouver\ndame <b<Zelda >>après avoir traversé la\n<r<porte du temps>> est de 99 %.<entrypoint_296>")
          	  case 1:
/*< 54>*/ 		printf("L'heure est enfin venue d'utiliser le\nnouveau pouvoir de votre épée pour\nréactiver la <r<porte du temps>>. Je vous\nrecommande d'agir sans tarder.<entrypoint_296>")
          	}
          }

          void entrypoint_006_208() {
/*< 73>*/ 	start()
/*< 74>*/ 	switch (story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */]) {
          	  case 0:
/*< 76>*/ 		printf("Après avoir rassemblé les cinq\nfragments de clé, vous vous dirigez\nvers le temple du volcan pour en\nouvrir la porte.<entrypoint_296>")
          	  case 1:
/*< 75>*/ 		printf("Vous êtes actuellement en quête de la\n<r<clé de la porte du temple>>, séparée en\ncinq fragments dissimulés. La <g<fonction\ndétection>> réagit aux fragments de clé.<entrypoint_296>")
          	}
          }

