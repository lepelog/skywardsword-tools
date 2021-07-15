          void entrypoint_006_810() {
/*<  9>*/ 	start()
/*< 28>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 24, 'param4': 3, 'param5': 23}) {
          	  case 0:
/*< 21>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 19}) {
          		  case 0:
/*< 11>*/ 			printf("\x0E\x01\x12\x04\x00\x01Master, I regret to inform you that\ncurrent circumstances prevent using\nan amiibo accessory to return to the sky.")
          		  case 1:
/*< 22>*/ 			printf("\x0E\x01\x12\x04\x00\x01Master, there is no return point\ncurrently established.\n\n\nOnly when you have used an amiibo\naccessory to ascend to the sky can you\nuse it again to return to that point.")
          		}
          	  case 1:
/*< 25>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 21}) {
          		  case 0:
/*< 26>*/ 			printf("\x0E\x01\x12\x04\x00\x01Master, I regret to inform you that\ncurrent circumstances prevent using\nan amiibo accessory to return to the sky.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x12\x04\x00\x01Master, it appears that present circumstances\nprevent amiibo usage.\n\n\nOnce the current situation has been\nresolved, amiibo functionality may be\nrestored.")
          		}
          	  case 2:
          		flw_10:
/*< 10>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 61}
/*< 12>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 25, 'param4': 4, 'param5': 9}) {
          		  case 0:
          		  case 1:
/*< 13>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 26, 'param4': 2, 'param5': 13}) {
          			  case 0:
/*< 14>*/ 				printf("\x0E\x01\x12\x04\x00\x05Yes, Master\x2014amiibo recognized.\nDo you wish to return to the sky?\n[1]Yes [2-]No")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 62}
          				  case 1:
          				}
          			  case 1:
/*< 15>*/ 				printf("\x0E\x01\x12\x04\x00\x05Yes, Master. This amiibo accessory has\nbeen recognized.\n\n\nAre you ready to return to\n<string arg0>?\n[1]Yes [2-]No")
          				goto flw_16
          			}
          		  case 2:
/*< 18>*/ 			printf("\x0E\x01\x12\x04\x00\x01Master, I am afraid that amiibo\naccessory is not one that I can\nrecognize.")
          		  case 3:
/*< 19>*/ 			printf("\x0E\x01\x12\x04\x00\x01Master, an error occurred while the\namiibo accessory was being read.\nShall I try again?\n[1]Yes [2-]No")
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
/*< 24>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, now that you have accessed\nthe stone statue, you can return to\nthe sky at will.\n\nFurthermore, by using a <r<certain amiibo\nfigure>>, you can return to the sky\nfrom anywhere on the surface and\ncome back to where you left. \nPlease call me anytime you would like\nto use an amiibo.\n\n\nYou can also enable or disable amiibo\nusage from the <g<Options>>.")
          }

          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf("Current Session Play Time: <rd<<r<\x0E\x02\x03\x06\x00\x00\x2CD<rd<\xFF1A<r<<numeric arg1(2)><rd<\n>>Total Play Time: <rd<<r<<numeric arg2(2)><rd<\xFF1A<r<\x0E\x02\x03\x06\x00\x03\x2CD<rd<>>\nNo further information.")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x12\x04\x00\nYou called for me, Master?\n[1]<string arg0>[2]<string arg1>[3]<string arg2>[4]<string arg3>")
/*<  4>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 23, 'param4': 5, 'param5': 0}) {
          	  case 0:
/*<  6>*/ 		printf("\x0E\x01\x12\x04\x00\nYes, Master. What information do\nyou seek?\n[1]<string arg0>[2]<string arg1>[3]<string arg2>[4-]<string arg3>")
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

