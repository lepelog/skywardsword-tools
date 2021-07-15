          void entrypoint_006_810() {
/*<  9>*/ 	start()
/*< 28>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 24, 'param4': 3, 'param5': 23}) {
          	  case 0:
/*< 21>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 19}) {
          		  case 0:
/*< 11>*/ 			printf("Me temo que he de informar al \x0E\x01\x12\x04\x00\x01amo de\nque las circunstancias no permiten usar\nun accesorio amiibo para alzar el vuelo.")
          		  case 1:
/*< 22>*/ 			printf("\x0E\x01\x12\x04\x00\x01Amo, no es posible descender\ndirectamente a las tierras inferiores\nsin haber regresado primero de ellas.\n\nEl amo debe usar un accesorio amiibo\npara alzar el vuelo antes de poder usarlo\nde nuevo para regresar al mismo lugar.")
          		}
          	  case 1:
/*< 25>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 21}) {
          		  case 0:
/*< 26>*/ 			printf("Me temo que he de informar al \x0E\x01\x12\x04\x00\x01amo de\nque las circunstancias no permiten usar\nun accesorio amiibo para alzar el vuelo.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x12\x04\x00\x01Amo, me temo que las circunstancias actuales\nimpiden usar el amiibo.\n\n\nCuando estas se hayan resuelto,\nse podrá volver a utilizar.")
          		}
          	  case 2:
          		flw_10:
/*< 10>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 61}
/*< 12>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 25, 'param4': 4, 'param5': 9}) {
          		  case 0:
          		  case 1:
/*< 13>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 13}) {
          			  case 0:
/*< 14>*/ 				printf("Se ha reconocido el accesorio amiibo.\n¿Desea el \x0E\x01\x12\x04\x00\x01amo alzar el vuelo?\n[1]Sí [2-]No")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 62}
          				  case 1:
          				}
          			  case 1:
/*< 15>*/ 				printf("\x0E\x01\x12\x04\x00\x05Sí, amo. Se ha reconocido el accesorio\namiibo.\n\n\n¿Está listo el amo para regresar aquí:\n<string arg0>?\n[1]Sí [2-]No")
          				goto flw_16
          			}
          		  case 2:
/*< 18>*/ 			printf("\x0E\x01\x12\x04\x00\x01Amo, me temo que este accesorio amiibo\nno es uno que pueda reconocer.")
          		  case 3:
/*< 19>*/ 			printf("Se ha producido un error al leer\nel accesorio amiibo. ¿Desea el \x0E\x01\x12\x04\x00\x01amo\nque lo intente de nuevo?\n[1]Sí [2-]No")
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
/*< 24>*/ 	printf("Acceder a la estatua de piedra permite al \x0E\x01\x12\x04\x00\x01amo\nalzar el vuelo.\n\n\nAsimismo, con <r<cierto amiibo>> es posible alzar el vuelo\ndesde cualquier punto de las tierras inferiores\ny regresar al mismo lugar. Ruego al amo que\nme avise cuando quiera usar amiibo.\nTambién se puede activar o desactivar el uso\nde amiibo en los <g<ajustes>>.")
          }

          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf("Tiempo de la sesión actual: <r<\x0E\x02\x03\x06\x00\x00\x2CD\xFF1A<numeric arg1(2)>>>\nTiempo total de juego: <r<<numeric arg2(2)>\xFF1A\x0E\x02\x03\x06\x00\x03\x2CD>>\nEsa es toda la información disponible.")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("¿Requiere el \x0E\x01\x12\x04\x00\namo de mis servicios?\n[1]<string arg0>[2]<string arg1>[3]<string arg2>[4]<string arg3>")
/*<  4>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 23, 'param4': 5, 'param5': 0}) {
          	  case 0:
/*<  6>*/ 		printf("¿Qué tipo de información en particular\ndesea mi \x0E\x01\x12\x04\x00\namo?\n[1]<string arg0>[2]<string arg1>[3]<string arg2>[4-]<string arg3>")
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

