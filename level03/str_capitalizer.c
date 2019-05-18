/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 21:04:10 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/05/17 21:06:27 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Assignment name  : str_capitalizer
**	Expected files   : str_capitalizer.c
**	Allowed functions: write
**	--------------------------------------------------------------------------------
**	
**	Write a program that takes one or several strings and, for each argument,
**	capitalizes the first character of each word (If it's a letter, obviously),
**	puts the rest in lowercase, and displays the result on the standard output,
**	followed by a \n.
**	
**	A "word" is defined as a part of a string delimited either by spaces/tabs, or
**	by the start/end of the string. If a word only has one letter, it must be
**	capitalized.
**	
**	If there are no arguments, the progam must display \n.
**	
**	Example:
**	
**	$> ./str_capitalizer | cat -e
**	$
**	$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
**	A First Little Test$
**	$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
**	__second Test A Little Bit   Moar Complex$
**	   But... This Is Not That Complex$
**	     Okay, This Is The Last 1239809147801 But Not    The Least    T$
**	$>
**
**  >>>>>>>>>> FAILURE <<<<<<<<<<
*/

#include <unistd.h>

void    str_capitalzer(char *str)
{
    int     i;

    i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || \
                str[i - 1] == '\t'))
            str[i] -= 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main (int ac, char **av)
{
    int     i;

    i = 1;
    if (ac == 1)
        write (1, "\n", 1);
    while (i < ac)
    {
        str_capitalzer(av[i]);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}

/*
= str_capitalizer ==============================================================
$> gcc -Wextra -Wall -Werror str_capitalizer.c -o user_exe

= Test 1 ===================================================
$> ./s1cjwspg7janikh8bmz9x2b9
$> diff -U 3 user_output_test1 test1.output | cat -e

Diff OK :D
= Test 2 ===================================================
$> ./z14e9yhewhf9fj4g0l6s6a1x
$> diff -U 3 user_output_test2 test2.output | cat -e

Diff OK :D
= Test 3 ===================================================
$> ./e99m1udzquetw4k6t5g54f0e "2tMqYGI9cZPRSnE6T"
$> diff -U 3 user_output_test3 test3.output | cat -e

Diff OK :D
= Test 4 ===================================================
$> ./cehjgyycosljvr84be4w09x1 "		LThiFft "
$> diff -U 3 user_output_test4 test4.output | cat -e

Diff OK :D
= Test 5 ===================================================
$> ./472dxqdwhrgea2guhvi6rt7i "7szRxhWr4y6etATlp3	-d4IvEWCs1UB 9mxDfviUbH5PXL	@yhU0cVEM4+XpB8sW2n4vuqigTk@Getg=Pq4J7Xh8NQz2jig<9OVH sq6WOx0HUsMVwTJahK	 		       	"
$> diff -U 3 user_output_test5 test5.output | cat -e

Diff OK :D
= Test 6 ===================================================
$> ./vfdqozscuaya2zkjpghqph33 "?AI3WJEqpbt79DTvjSFUzMNm-A980uB7UxFD5<GN54BGXTsEIJ776u1@SC1B6FxiQAgRTcu1WUdyY?EIowBQTG91Od	 "
$> diff -U 3 user_output_test6 test6.output | cat -e

Diff OK :D
= Test 7 ===================================================
$> ./brugjwo3a89kamjn1bqru8qo "-vLDx4y8ROz2gfTe	(sXPV7wYgnFtebB9KMvAVN8OW9562 0OtXC9pw6Ad0xV1Q2zeHN9Ut =qzcTM1c3QAOxJ6iT0Ym4Bf0Y		Wfl5YrqSBvbUZ4-IqUjSz6>"
$> diff -U 3 user_output_test7 test7.output | cat -e

Diff OK :D
= Test 8 ===================================================
$> ./xhsgt4m6n36p2udlwn3nurn8 "7xI7ViW5 )42P=t9CnQLx1iukT@Lso,KVYRg3 @"
$> diff -U 3 user_output_test8 test8.output | cat -e

Diff OK :D
= Test 9 ===================================================
$> ./kl2oyoycz72jx5emxb9d7o51 ",HRP,Tw5XFM6ucNE06Sm4kEM5mGHiKS3"
$> diff -U 3 user_output_test9 test9.output | cat -e

Diff OK :D
= Test 10 ==================================================
$> ./mm94quza9bnr451mh2cy55q3  "Kxd9W0Pesy	 D8r9nWYIkUCVp0 		  ljpyJfeF	 		tWSciTuMH 		  ELWsdm		OLus	 utQ90n		       	QFzP26sOc8wW	 SFV7qeGWKOZMkYAf 	" "SbEp63WU2qfkw	 	 W8sLZ6KtkvDgEAXN		 	 FAm82TEtHPQXi lqRutke9AjDwifWM  2OVDFq7EYXsRAut xaoM0JgEWmCdSOT	SYxdV2JvPut  		 SWPa54 		 	eRQMf1Fhw9xKsJLnv   	 " "F5sWXhbNCTaH4Dq9SnGzpY80AhIym YuR6EQc 	CvijtgbJhz4LfVA  	  4ij   	 zW537tU  sbPGwfT	     	qWxKCZ5ABsaU	 gw3demZuBA5O 			rh7f		" "9trumWLTbsEvFN	 	84jlbSHXT2B			pr1IH5h 		 	s9dtG2bJRLliZOk	iftldIZOGNDHbz     H7RTaVekABD2			 Y6yhbJU1Or	" "WoJ7zQKZMVdqH6ks   y8TuO		  ESXWt0ArIBP  	 cE56goKLhtr  		VOBfQ5DILa6eE	 iEalczO6Hg0XjV	 	 MscNPkbD 	 okb2			 xKHvwE507Pqd " "kul7isV2  		x03eZjFmWop9zd   u5KZbGSHp9VxLv 				" "FC5ept			ZvoglwCdjV7k6		      	 15DYh6WAF7TKV8	 	  " "WA923RxeqKZ0 EScuLlIDdPGZxjBU		 	Ys4hM8QK7ai		" "gv4OTRSNmIfP	 YbLjPX5K7cTwtSD3		NQdtLmWraVbjsAZI 	  " "KjLmBVRYaie58 	 		XHkv		 Ci1RXk2PWNFBvjs 	GiDvqYEHy0gOd 	   qg73jyo	 QXp1I5OYK4ZxHE8B	  	" "BJRSIQPrN		 	em9QtBbx	   rkzhsA9fG4bD	  	sl5xgIE2Mu0i4D1  23vc8tI nqzwb4ERs0jc			v0n	" "XyEb3hYCPxM  zo13VPx				Tn6Jjre9hNBqcZvg  	 1Wni0j	DXCG3OtJPnISlfW4N		   		9dKx2vnZ7 		2LEho7TepNX		  	" "B8gunI 	m5UhYTzAeGp 	p6KDMF9e1  		IbByolJg2c 	 psnCS4l  	 	WcnGkL9b0YMQyFKP w0RMWqei1SgfC89 		  Or5gTAQbji  		" "wIK09ydR2E3	 		c9qCEGMUHLS5 	7AU23 " "EdTCirlLtf6	fV3a  pEPMOt 		Rs4TnN51KWt3Q7A  BrMYbf2		sihtx1EBwWAn4FH 2yXI5   ikmRVFHAuSzsLv9  	" "l2AvHGQjuD  jTYFq0GMP 		mEd1MgTxRZ	tsXLMg 	 	 LviSnP			 Oj6om3gxqk0 		 dsEUM7    " "qt6JV0inKl	    	  	NK1p23w4nRZLI78vi			ifldNz5xuh	shEDdZXqCf	 		MAeUX12kuKJdONQ			 IgXuYC2mh7	 l3QFxEikIK		  " "CpFW26jzfvbxmKg8T	  	tMavPpWeyBIkKzTJ	 OtewiK  	Egb06TAPYFnhs7K   	 mgzvP80DKoGy9h		  " "DzEG5nu	P8dyH nikCTh  	Y7SaEKL				83yIjngqzD7vYM5		3hvrxFb8YCMIUqSu	8YrH20A9Pb1   vKrYzQUR2nP  		lATjLudVFGK 			" "xVn8d 		 	qI7pYV4	 	WnAI7EHqZLfd	  		HFpC8Bn	 " "QyMObfm  dkYt4MPeba6j0A9   	 b5Jg	  		ekhSnHO37g46xi8T 	 	 hwATmEgQ7xVso  	 	" "PMFc8peCTgKZEYvA4	 		J8deCVISqsaHgjO	  JPqIxn7gk56XZjUCr		 az364fh 	 "
$> diff -U 3 user_output_test10 test10.output | cat -e
--- user_output_test10	2019-05-17 20:57:45.000000000 -0700$
+++ test10.output	2019-05-17 20:57:45.000000000 -0700$
@@ -1,22 +1,22 @@$
-kxd9w0pesy	 D8r9nwyikucvp0 		  Ljpyjfef	 		Twscitumh 		  Elwsdm		Olus	 Utq90n			Qfzp26soc8ww	 Sfv7qegwkozmkyaf 	$
-sbep63wu2qfkw	 	 W8slz6ktkvdgeaxn		 	 Fam82tethpqxi Lqrutke9ajdwifwm  2ovdfq7eyxsraut Xaom0jgewmcdsot	Syxdv2jvput  		 Swpa54 		 	Erqmf1fhw9xksjlnv   	 $
-f5swxhbnctah4dq			9sngzpy80ahiym Yur6eqc 	Cvijtgbjhz4lfva  	  4ij   	 Zw537tu  Sbpgwft		Qwxkcz5absau	 Gw3demzuba5o 		       	Rh7f			$
+Kxd9w0pesy	 D8r9nwyikucvp0 		  Ljpyjfef	 		Twscitumh 		  Elwsdm		Olus	 Utq90n			Qfzp26soc8ww	 Sfv7qegwkozmkyaf 	$
+Sbep63wu2qfkw	 	 W8slz6ktkvdgeaxn		 	 Fam82tethpqxi Lqrutke9ajdwifwm  2ovdfq7eyxsraut Xaom0jgewmcdsot	Syxdv2jvput  		 Swpa54 		 	Erqmf1fhw9xksjlnv   	 $
+F5swxhbnctah4dq			9sngzpy80ahiym Yur6eqc 	Cvijtgbjhz4lfva  	  4ij   	 Zw537tu  Sbpgwft		Qwxkcz5absau	 Gw3demzuba5o 		       	Rh7f			$
 9trumwltbsevfn	 	84jlbshxt2b			Pr1ih5h 		 	S9dtg2bjrllizok	Iftldizogndhbz     H7rtavekabd2			 Y6yhbju1or	$
-woj7zqkzmvdqh6ks   Y8tuo		  Esxwt0aribp  	 Ce56goklhtr  		Vobfq5dila6ee	 Iealczo6hg0xjv	 	 Mscnpkbd 	 Okb2			 Xkhvwe507pqd $
+Woj7zqkzmvdqh6ks   Y8tuo		  Esxwt0aribp  	 Ce56goklhtr  		Vobfq5dila6ee	 Iealczo6hg0xjv	 	 Mscnpkbd 	 Okb2			 Xkhvwe507pqd $
 Kul7isv2  		X03ezjfmwop9zd   U5kzbgshp9vxlv 				$
-fc5ept			Zvoglwcdjv7k6			 15dyh6waf7tkv8	 	  $
-wa923rxeqkz0 Esculliddpgzxjbu		 	Ys4hm8qk7ai		$
+Fc5ept			Zvoglwcdjv7k6			 15dyh6waf7tkv8	 	  $
+Wa923rxeqkz0 Esculliddpgzxjbu		 	Ys4hm8qk7ai		$
 Gv4otrsnmifp	 Ybljpx5k7ctwtsd3		Nqdtlmwravbjsazi 	  $
-kjlmbvryaie58 	 		Xhkv		 Ci1rxk2pwnfbvjs 	Gidvqyehy0god 	   Qg73jyo	 	Qxp1i5oyk4zxhe8b	  	$
-bjrsiqprn		 	Em9qtbbx	   Rkzhsa9fg4bd	  	Sl5xgie2mu0i4d1  23vc8ti Nqzwb4ers0jc			V0n	$
-xyeb3hycpxm  Zo13vpx				Tn6jjre9hnbqczvg  	 1wni0j	Dxcg3otjpnislfw4n		 		9dkx2vnz7 		2leho7tepnx		  	$
-b8guni 	M5uhytzaegp 	P6kdmf9e1  		Ibbyoljg2c 	 Psncs4l  	 	Wcngkl9b0ymqyfkp W0rmwqei1sgfc89 		  Or5gtaqbji  		$
+Kjlmbvryaie58 	 		Xhkv		 Ci1rxk2pwnfbvjs 	Gidvqyehy0god 	   Qg73jyo	 	Qxp1i5oyk4zxhe8b	  	$
+Bjrsiqprn		 	Em9qtbbx	   Rkzhsa9fg4bd	  	Sl5xgie2mu0i4d1  23vc8ti Nqzwb4ers0jc			V0n	$
+Xyeb3hycpxm  Zo13vpx				Tn6jjre9hnbqczvg  	 1wni0j	Dxcg3otjpnislfw4n		 		9dkx2vnz7 		2leho7tepnx		  	$
+B8guni 	M5uhytzaegp 	P6kdmf9e1  		Ibbyoljg2c 	 Psncs4l  	 	Wcngkl9b0ymqyfkp W0rmwqei1sgfc89 		  Or5gtaqbji  		$
 Wik09ydr2e3	 		C9qcegmuhls5 	7au23 $
-edtcirlltf6	Fv3a  Pepmot 		Rs4tnn51kwt3q7a  Brmybf2		Sihtx1ebwwan4fh 2yxi5   Ikmrvfhauszslv9  	$
+Edtcirlltf6	Fv3a  Pepmot 		Rs4tnn51kwt3q7a  Brmybf2		Sihtx1ebwwan4fh 2yxi5   Ikmrvfhauszslv9  	$
 L2avhgqjud  Jtyfq0gmp 		Med1mgtxrz	Tsxlmg 	 	 Lvisnp				 Oj6om3gxqk0 		 Dseum7    $
 Qt6jv0inkl		  	Nk1p23w4nrzli78vi			Ifldnz5xuh	Sheddzxqcf	 			Maeux12kukjdonq			 Igxuyc2mh7	 L3qfxeikik    		  $
-cpfw26jzfvbxmkg8t	  	Tmavppweybikkztj	 Otewik  	Egb06tapyfnhs7k   	 Mgzvp80dkogy9h		  $
-dzeg5nu	P8dyh Nikcth  	Y7saekl				83yijngqzd7vym5		3hvrxfb8ycmiuqsu	8yrh20a9pb1   Vkryzqur2np  		Latjludvfgk 		       	$
+Cpfw26jzfvbxmkg8t	  	Tmavppweybikkztj	 Otewik  	Egb06tapyfnhs7k   	 Mgzvp80dkogy9h		  $
+Dzeg5nu	P8dyh Nikcth  	Y7saekl				83yijngqzd7vym5		3hvrxfb8ycmiuqsu	8yrh20a9pb1   Vkryzqur2np  		Latjludvfgk 		       	$
 Xvn8d 		 	Qi7pyv4	 	Wnai7ehqzlfd	  		Hfpc8bn	 $
-qymobfm		 	 Dkyt4mpeba6j0a9   	 B5jg	  		Ekhsnho37g46xi8t 	 	 Hwatmegq7xvso  	 	$
-pmfc8pectgkzeyva4	 		J8decvisqsahgjo	  Jpqixn7gk56xzjucr		 Az364fh 	 $
+Qymobfm		 	 Dkyt4mpeba6j0a9   	 B5jg	  		Ekhsnho37g46xi8t 	 	 Hwatmegq7xvso  	 	$
+Pmfc8pectgkzeyva4	 		J8decvisqsahgjo	  Jpqixn7gk56xzjucr		 Az364fh 	 $

Diff KO :(
Grade: 0

= Final grade: 0 ===============================================================
*/