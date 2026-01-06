          void entrypoint_006_810() {
/*<  9>*/ 	start()
/*< 28>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 24, 'param4': 3, 'param5': 23}) {
          	  case 0:
/*< 21>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 19}) {
          		  case 0:
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x00000001>Maître... Les circonstances actuelles vous empêchent\nmalheureusement d'utiliser un amiibo pour retourner\ndans le ciel.")
          		  case 1:
/*< 22>*/ 			printf(/* textboxtype: 2, unk: 0, line: 24 */ "<0x10012:0x00000001>Maître, il n'existe aucun point de chute auquel\nretourner pour le moment.\n\n\nSi vous utilisez un amiibo pour retourner dans le ciel\ndepuis la terre, vous pourrez ensuite redescendre au\nmême endroit grâce à cet amiibo.")
          		}
          	  case 1:
/*< 25>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 21}) {
          		  case 0:
/*< 26>*/ 			printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x00000001>Maître... Les circonstances actuelles vous empêchent\nmalheureusement d'utiliser un amiibo pour retourner\ndans le ciel.")
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10012:0x00000001>Maître, il semble que les circonstances actuelles\nne permettent pas l'utilisation des amiibo.\n\n\nLes fonctionnalités amiibo seront à nouveau\ndisponibles dès que la situation sera revenue\nà la normale.")
          		}
          	  case 2:
          		flw_10:
/*< 10>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 61}
/*< 12>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 25, 'param4': 4, 'param5': 9}) {
          		  case 0:
          		  case 1:
/*< 13>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 13}) {
          			  case 0:
/*< 14>*/ 				printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10012:0x00000005>Très bien, Maître. L'amiibo a été reconnu.\nVoulez‐vous retourner dans le ciel?\n[1-]Oui[2]Non")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 62}
          				  case 1:
          				}
          			  case 1:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10012:0x00000005>Très bien, Maître. L'amiibo a été reconnu.\n\n\n\nVoulez‐vous retourner à l'endroit suivant :\n« <string arg0> »?\n[1-]Oui[2]Non")
          				goto flw_16
          			}
          		  case 2:
/*< 18>*/ 			printf(/* textboxtype: 0, unk: 2, line: 22 */ "<0x10012:0x00000001>Maître, malheureusement, je ne parviens pas à\nreconnaître cet amiibo.")
          		  case 3:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10012:0x00000001>Maître, une erreur est survenue pendant la lecture\nde l'amiibo.\n\n\nVoulez‐vous que j'essaie à nouveau?\n[1-]Oui[2]Non")
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
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 2, line: 25 */ "<0x10012:0x00000001>Maître, la statue que vous avez activée vous permet\ndésormais de retourner dans le ciel.\n\n\nSachez également que l'utilisation d'un <color red<certain amiibo\n>coloroff>vous permet de regagner le ciel depuis n'importe quel\npoint sur la terre, et de redescendre au même endroit.\nAppelez-moi si vous souhaitez utiliser un amiibo.\nVous pouvez activer ou désactiver les fonctions\namiibo depuis l'écran des <color green<options>coloroff>.")
          }

          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Votre temps de jeu pour cette session est de <color red<<numeric arg0 2> h <numeric arg1 2>>coloroff>.\nVotre temps de jeu total est de <color red<<numeric arg2 2> h <numeric arg3 2>>coloroff>.")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 2, unk: 0, line: 6 */ "<0x10012:0x0000000a>Oui, Maître. Que puis‐je faire pour vous?\n[1-]<string arg0>[2-]<string arg1>[3-]<string arg2>[4-]<string arg3>")
/*<  4>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 23, 'param4': 5, 'param5': 0}) {
          	  case 0:
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000a>Très bien, Maître. Sur quel sujet puis‐je vous\nrenseigner?\n[1-]<string arg0>[2-]<string arg1>[3-]<string arg2>[4]<string arg3>")
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

