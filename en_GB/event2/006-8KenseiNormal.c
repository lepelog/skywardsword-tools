          void entrypoint_006_800() {
          	start()
/*<  1>*/ 	printf("Current Session Play Time: <rd<<r<\x0E\x02\x03\x06\x00\x00\x2CD<rd<\xFF1A<r<<numeric arg1(2)><rd<\n>>Total Play Time: <rd<<r<<numeric arg2(2)><rd<\xFF1A<r<\x0E\x02\x03\x06\x00\x03\x2CD<rd<>>\nNo further information.")
          }

          void entrypoint_006_801() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x12\x04\x00\nYou called for me, Master?\n[1]<string arg0>[2]<string arg1>[3]<string arg2>[4-]<string arg3>")
/*<  4>*/ 	switch (choice(4)) {
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
          	}
          }

