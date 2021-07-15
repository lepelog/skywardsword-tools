          void entrypoint_006_810() {
/*<  9>*/ 	start()
/*< 28>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 24, 'param4': 3, 'param5': 23}) {
          	  case 0:
/*< 21>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 19}) {
          		  case 0:
/*< 11>*/ 			printf("\x0E\x01\x12\x04\x00\x01Maître... Les circonstances actuelles vous empêchent\nmalheureusement d'utiliser un amiibo pour retourner\ndans le ciel.")
          		  case 1:
/*< 22>*/ 			printf("\x0E\x01\x12\x04\x00\x01Maître, il n'existe aucun point de chute auquel\nretourner pour le moment.\n\n\nSi vous utilisez un amiibo pour retourner dans le ciel\ndepuis la terre, vous pourrez ensuite redescendre au\nmême endroit grâce à cet amiibo.")
          		}
          	  case 1:
/*< 25>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 21}) {
          		  case 0:
/*< 26>*/ 			printf("\x0E\x01\x12\x04\x00\x01Maître... Les circonstances actuelles vous empêchent\nmalheureusement d'utiliser un amiibo pour retourner\ndans le ciel.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x12\x04\x00\x01Maître, il semble que les circonstances actuelles\nne permettent pas l'utilisation des amiibo.\n\n\nLes fonctionnalités amiibo seront à nouveau\ndisponibles dès que la situation sera revenue\nà la normale.")
          		}
          	  case 2:
          		flw_10:
/*< 10>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 61}
/*< 12>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 25, 'param4': 4, 'param5': 9}) {
          		  case 0:
          		  case 1:
/*< 13>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 13}) {
          			  case 0:
/*< 14>*/ 				printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. L'amiibo a été reconnu.\nVoulez\x2010vous retourner dans le ciel ?\n[1]Oui[2-]Non")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 62}
          				  case 1:
          				}
          			  case 1:
/*< 15>*/ 				printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. L'amiibo a été reconnu.\n\n\n\nVoulez\x2010vous retourner à l'endroit suivant :\n« <string arg0> » ?\n[1]Oui[2-]Non")
          				goto flw_16
          			}
          		  case 2:
/*< 18>*/ 			printf("\x0E\x01\x12\x04\x00\x01Maître, malheureusement, je ne parviens pas à\nreconnaître cet amiibo.")
          		  case 3:
/*< 19>*/ 			printf("\x0E\x01\x12\x04\x00\x01Maître, une erreur est survenue pendant la lecture\nde l'amiibo.\n\n\nVoulez\x2010vous que j'essaie à nouveau ?\n[1]Oui[2-]Non")
/*< 20>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_10
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_006_811() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, la statue que vous avez activée vous permet\ndésormais de retourner dans le ciel.\n\n\nSachez également que l'utilisation d'un <r<certain amiibo\n>>vous permet de regagner le ciel depuis n'importe quel\npoint sur la terre, et de redescendre au même endroit.\nAppelez-moi si vous souhaitez utiliser un amiibo.\nVous pouvez activer ou désactiver les fonctions\namiibo depuis l'écran des <g<options>>.")
          }

          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf("Votre temps de jeu pour cette session est de <r<\x0E\x02\x03\x06\x00\x00\x2CD h <numeric arg1(2)>>>.\nVotre temps de jeu total est de <r<<numeric arg2(2)> h \x0E\x02\x03\x06\x00\x03\x2CD>>.")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x12\x04\x00\nOui, Maître. Que puis\x2010je faire pour vous ?\n[1]<string arg0>[2]<string arg1>[3]<string arg2>[4]<string arg3>")
/*<  4>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 23, 'param4': 5, 'param5': 0}) {
          	  case 0:
/*<  6>*/ 		printf("\x0E\x01\x12\x04\x00\nTrès bien, Maître. Sur quel sujet puis\x2010je vous\nrenseigner ?\n[1]<string arg0>[2]<string arg1>[3]<string arg2>[4-]<string arg3>")
/*<  7>*/ 		switch (choice(4)) {
          		  case 0:
          			flw_8:
/*<  8>*/ 			entrypoint_-01_-1();
          		  case 1:
          			goto flw_8
          		  case 2:
          			goto flw_8
          		  case 3:
          		}
          	  case 1:
          		flw_5:
/*<  5>*/ 		entrypoint_-01_-1();
          	  case 2:
          		goto flw_5
          	  case 3:
          		goto flw_5
          	  case 4:
          	}
          }

