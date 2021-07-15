          void entrypoint_006_209() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[463 /* us: 805A9B0F 0x01, jp: 805ACD8F 0x01 */]) {
          	  case 0:
/*< 34>*/ 		printf("Il est cependant à noter que dame Zelda vient d'être\nemmenée par un mystérieux individu qui s'est mis\nen chemin vers un autre lieu.\n\nCherchez conseil auprès de la statue de la Déesse à la\n<b<source de la terre>>, comme vous l'avez fait à la <b<source\nde la contemplation>>.<entrypoint_296>")
          	  case 1:
/*< 35>*/ 		printf("La probabilité de retrouver dame Zelda saine et sauve\ndiminue significativement. Il est primordial de la\nrejoindre dès que possible.<entrypoint_296>")
          	}
          }

          void entrypoint_006_243() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */]) {
          	  case 0:
/*< 63>*/ 		printf("Afin d'être en mesure de faire quelque chose pour\nNarisha, il vous faudra apprendre l'<g<attaque tornade\n>>auprès d'<b<Arfan>>.<entrypoint_296>")
          	  case 1:
/*< 64>*/ 		printf("<b<Arfan >>a longuement étudié Narisha. Je vous\nrecommande de l'interroger.<entrypoint_296>")
          	}
          }

          void entrypoint_006_226() {
/*< 65>*/ 	start()
/*< 66>*/ 	switch (story_flags[157 /* us: 805A9AE0 0x08, jp: 805ACD60 0x08 */]) {
          	  case 0:
/*< 67>*/ 		printf("Je vous suggère de mener vos recherches à la <b<mer\nde sable de Lanelle>>, dont l'accès vous est maintenant\npermis grâce au <y<grappin>>.<entrypoint_296>")
          	  case 1:
/*< 68>*/ 		printf("La probabilité que le <y<grappin >>obtenu lors de l'<r<épreuve\n>>du <b<désert de Lanelle >>vous permette d'accéder à une\nnouvelle zone des <b<terres de Lanelle >>est de 96 %.<entrypoint_296>")
          	}
          }

          void entrypoint_006_244() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 57>*/ 		printf("Attention cependant. Narisha se trouve dans des\ndispositions particulièrement agressives. Il semble\ndifficile de lui parler dans ces conditions.\n\nJe vous suggère de le débarrasser préalablement\ndu parasite qui l'affaiblit, au moyen de l'<g<attaque\ntornade>>.<entrypoint_296>")
          	  case 1:
/*< 60>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*< 58>*/ 			printf("La probabilité de voir apparaître <b<Narisha >>si vous lui\napportez sa <y<soupe de citrouille>> favorite est de 90 %.\n\n\nJe vous suggère d'apporter la soupe sur la petite\nîle surmontée d'un <r<arc\x2010en\x2010ciel>>, à l'intérieur du\n<b<cumulonimbus>>.<entrypoint_296>")
          		  case 1:
/*< 59>*/ 			printf("La probabilité d'obtenir des informations sur le lieu\noù se trouve Narisha en interrogeant le patron de la\nCitrouille perchée est de 85 %.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_296() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("Votre temps de jeu pour cette session est de <r<\x0E\x02\x03\x06\x00\x00\x2CD h <numeric arg1(2)>>>.\nVotre temps de jeu total est de <r<<numeric arg2(2)> h \x0E\x02\x03\x06\x00\x03\x2CD>>. Terminé.")
          }

          void entrypoint_006_227() {
/*< 77>*/ 	start()
/*< 78>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 80>*/ 		printf("Je vous recommande de retourner chez le capitaine\navec la carte marine que vous avez trouvée.<entrypoint_296>")
          	  case 1:
/*< 79>*/ 		printf("Trouvez la carte marine dans la <b<maison du capitaine\n>>et allez la lui remettre. Elle vous permettra de\nretrouver son navire.<entrypoint_296>")
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
/*<  6>*/ 				printf("Vous avez obtenu deux mélodies du <r<Chant du héros>>.\nÀ présent, allez trouver le troisième dragon, gardien\ndes <b<terres de Lanelle>>.\n[1]Et ensuite?[2-]D'accord!")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					printf("Une fois les trois mélodies du Chant du héros en\nvotre possession, vous pourrez le reconstituer auprès\nde <b<Narisha>>, le grand esprit des cieux.\n\nLa voie vers la <y+<Triforce>> s'ouvrira alors devant vous.\n\n\n\nVotre mission ultime est de triompher de l'<b<Avatar\ndu Néant>> grâce à la <y+<Triforce>>. C'est là votre destin,\n\x0E\x01\x12\x04\x00\x02Maître.<entrypoint_296>")
          				  case 1:
          				}
          			}
          		  case 1:
/*<  7>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*<  8>*/ 				printf("Vous avez obtenu deux mélodies du <r<Chant du héros>>.\nÀ présent, allez trouver le troisième dragon, gardien\ndes <b<terres d'Ordinn>>.\n[1]Et ensuite?[2-]D'accord!")
          				goto flw_16
          			  case 1:
/*<  9>*/ 				printf("Vous avez obtenu une mélodie du <r<Chant du héros>>.\nAllez trouver les deux autres dragons, gardiens des\n<b<terres d'Ordinn et de Lanelle>>.\n[1]Et ensuite?[2-]D'accord!")
          				goto flw_16
          			}
          		}
          	  case 1:
/*< 10>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 11>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 15>*/ 				printf("Vous avez obtenu deux mélodies du <r<Chant du héros>>.\nÀ présent, allez trouver le troisième dragon, gardien\ndes <b<terres de Firone>>.\n[1]Et ensuite?[2-]D'accord!")
          				goto flw_16
          			  case 1:
/*< 12>*/ 				printf("Vous avez obtenu une mélodie du <r<Chant du héros>>.\nAllez trouver les deux autres dragons, gardiens des\n<b<terres de Firone et de Lanelle>>.\n[1]Et ensuite?[2-]D'accord!")
          				goto flw_16
          			}
          		  case 1:
/*< 13>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 14>*/ 				printf("Vous avez obtenu une mélodie du <r<Chant du héros>>.\nAllez trouver les deux autres dragons, gardiens des\n<b<terres de Firone et d'Ordinn>>.\n[1]Et ensuite?[2-]D'accord!")
          				goto flw_16
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_006_249() {
/*< 18>*/ 	start()
/*< 19>*/ 	printf("Je vous suggère de retourner auprès de <b<Narisha>>, le\ngrand esprit des cieux, afin de reconstituer le Chant\ndu héros.\n[1]Et ensuite?[2-]D'accord!")
/*< 20>*/ 	switch (choice(2)) {
          	  case 0:
/*< 21>*/ 		printf("Une fois le Chant du héros reconstitué, la voie vers\nla <y+<Triforce >>vous sera ouverte.\n\n\nVotre mission ultime est de triompher de l'<b<Avatar\ndu Néant>> grâce à la <y+<Triforce>>. C'est là votre destin,\n\x0E\x01\x12\x04\x00\x02Maître.")
          	  case 1:
          	}
          }

          void entrypoint_006_217() {
/*< 36>*/ 	start()
/*< 84>*/ 	switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          	  case 0:
/*< 85>*/ 		printf("En dirigeant les moulins vers la tour de lumière,\nune structure est apparue à son sommet.<entrypoint_296>")
          	  case 1:
/*< 82>*/ 		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          		  case 0:
/*< 37>*/ 			printf("Il existe 80 % de chances que le moulin réparé par\n<b<Picoro >>soit l'une des <r<deux grandes ailes>>.<entrypoint_296>")
          		  case 1:
/*< 81>*/ 			switch (story_flags[1108 /* us: 805A9B54 0x04, jp: 805ACDD4 0x04 */]) {
          			  case 0:
/*< 83>*/ 				printf("Il y a 85 % de chances que l'objet que vous avez\nrécemment découvert soit l'<r<hélice du moulin>>. Je\nne connais pas le rapport entre celle\x2010ci et les\ndeux ailes.\nJe vous recommande de rapporter cette hélice\nà Célesbourg au moyen du robot de l'atelier de\nrénovation.<entrypoint_296>")
          			  case 1:
/*< 39>*/ 				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          				  case 0:
/*< 40>*/ 					printf("Bien que rien n'établisse un rapport certain entre ce\nfait et les deux ailes, il est clair que l'<r<hélice du moulin\n>>est tombée à travers les nuages.\n\nLocalisez l'hélice grâce à la <g<fonction détection>>, et\nvous pourrez alors utiliser le robot de l'atelier de\nrénovation pour la rapporter à Célesbourg.<entrypoint_296>")
          				  case 1:
/*< 41>*/ 					switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          					  case 0:
/*< 42>*/ 						printf("Bien que rien n'établisse un rapport certain entre ce\nfait et les deux ailes, il est clair que l'<r<hélice du moulin\n>>est tombée à travers les nuages.\n\nJe vous suggère de trouver le moyen de la récupérer.<entrypoint_296>")
          					  case 1:
/*< 38>*/ 						printf("La formulation est cryptique. Je vous suggère\nnéanmoins de parcourir Célesbourg en recherchant\ndeux éléments similaires à de grandes ailes.<entrypoint_296>")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_006_200() {
          	start()
/*<  1>*/ 	printf("Je vous suggère de <g<plonger >>dans la <r<colonne de lumière\n>>qui perce les nuages pour tenter de retrouver dame\n<b<Zelda >>sur la terre.\n\nLa colonne se trouve au sud de <b<Célesbourg>>.<entrypoint_296>")
          }

          void entrypoint_006_201() {
/*< 22>*/ 	start()
/*< 23>*/ 	switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          	  case 0:
/*< 24>*/ 		printf("Je vous suggère de suivre les recommandations de\nl'Ancienne au <b<temple du sceau >>en vous dirigeant vers\nla <b<forêt de Firone>>.<entrypoint_296>")
          	  case 1:
/*< 25>*/ 		printf("La terre présente des signes de civilisation. Je vous\nsuggère de commencer par explorer les environs de\nvotre point de chute.<entrypoint_296>")
          	}
          }

          void entrypoint_006_236() {
/*< 47>*/ 	start()
/*< 48>*/ 	switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          	  case 0:
/*< 49>*/ 		printf("Un édifice se trouve au sommet du volcan. Je vous\nsuggère de l'explorer.<entrypoint_296>")
          	  case 1:
/*< 50>*/ 		printf("Afin d'étouffer les flammes qui empêchent votre\nprogression, vous devez transporter la <r<cuvette d'eau\n>>du dragon d'eau jusqu'au mur de flammes.<entrypoint_296>")
          	}
          }

          void entrypoint_006_202() {
/*< 26>*/ 	start()
/*< 27>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*< 71>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 72>*/ 			printf("Je vous recommande de monter sur le dos du\nvénérable <b<Péko>> pour obtenir l'objet qui se\ntransmet dans la tribu des Kikwis.")
          		  case 1:
/*< 28>*/ 			printf("Selon les dires de <b<Péko >>le Vénérable Kikwi,\nretrouver tous les Kikwis perdus devrait nous\ngarantir leur coopération.<entrypoint_296>")
          		}
          	  case 1:
/*< 31>*/ 		switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          		  case 0:
/*< 29>*/ 			printf("Selon les dires de <b<Matéo>> le Kikwi, la probabilité qu'un\nrapport existe entre le Vénérable Kikwi et notre\nrecherche de dame Zelda est de 80 %.<entrypoint_296>")
          		  case 1:
/*< 30>*/ 			printf("Il est probable que la présence de dame Zelda ait été\nremarquée. La recherche de témoins pourrait s'avérer\nstratégiquement efficace.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_222() {
/*< 43>*/ 	start()
/*< 44>*/ 	switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("Le dragon d'eau a ouvert l'accès au lieu qui abrite\nla <r<flamme de Farore>>.\n\n\nJe détecte la présence d'ennemis, et vous suggère de\nvous équiper de manière appropriée avant de pénétrer\ndans l'enceinte.<entrypoint_296>")
          	  case 1:
/*< 46>*/ 		printf("Afin d'obtenir la flamme sacrée des <b<terres de Firone>>,\nil vous faut accomplir la quête du dragon d'eau.\n\n\nLà où elle peut être utilisée, la<g< fonction détection\n>>pourra vous aider à trouver l'<y<eau sacrée >>qu'elle\nvous a demandée.<entrypoint_296>")
          	}
          }

          void entrypoint_006_240() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          	  case 0:
/*< 53>*/ 		printf("Vous devez continuer à avancer, \x0E\x01\x12\x04\x00\x01Maître. La\nprobabilité de retrouver dame <b<Zelda >>après avoir\ntraversé la <r<porte du temps>> est de 99 %.<entrypoint_296>")
          	  case 1:
/*< 54>*/ 		printf("L'heure est enfin venue d'utiliser le nouveau pouvoir\nde votre épée pour réactiver la <r<porte du temps>>.\nJe vous recommande d'agir sans tarder.<entrypoint_296>")
          	}
          }

          void entrypoint_006_208() {
/*< 73>*/ 	start()
/*< 74>*/ 	switch (story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */]) {
          	  case 0:
/*< 76>*/ 		printf("Après avoir rassemblé les cinq fragments de clé, vous\nvous dirigez vers le temple du volcan pour en ouvrir\nla porte.<entrypoint_296>")
          	  case 1:
/*< 75>*/ 		printf("Vous êtes actuellement en quête de la <r<clé de la porte\ndu temple>>, séparée en cinq fragments dissimulés.\nLa <g<fonction détection>> réagit aux fragments de clé.<entrypoint_296>")
          	}
          }

