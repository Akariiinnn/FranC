//
// Created by qrobert on 30/09/2022.
//

#ifndef UNTITLED_FRANC_H
#define UNTITLED_FRANC_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define entier int
#define assembleur asm
#define tantque while
#define octet uint8_t
#define pour for
#define flottant float
#define chaine string
#define caract char
#define retourner return
#define automatique auto
#define si if
#define sinon else
#define essaie try
#define attrape catch
#define principal main
#define booleen bool
#define vide void
#define oiseau volatile
#define allervers goto
#define deftype typedef
#define casser break
#define faire do
#define cas case
#define aiguiller switch
#define statique static
#define protege protected
#define prive private
#define publique public
#define nonsigne unsigned
#define taillede sizeof
#define signe signed
#define court short
#define enligne inline
#define externe extern
#define continuer continue
#define complexe _Complex
#define generique _Generic
#define imaginaire _Imaginary
#define vrai true
#define faux false
#define vaux =
#define longueurde strlen
#define nouveau new
#define supprimer delete
#define zero memset
#define et &&
#define ou ||
#define non !
#define etlogique &
#define oulogique |
#define ouexclusif ^
#define minimum min
#define maximum max
#define constante const
#define entiersigne signed int
#define flottantsigne signed float
#define doubleprecision double
#define longdouble long double
#define entiercourt short int
#define entiernonsigne unsigned int
#define octetnonsigne unsigned char

// Stdio

#define taille_t size_t
#define FICHIER FILE
#define entree scanf
#define afficherformat printf
#define posf_t fpos_t
#define FDF EOF
#define fouvre fopen
#define fouvre64 fopen64
#define fouvre_s fopen_s
#define fafficherformat fprintf
#define fafficherformat_s fprintf_s
#define fferme fclose
#define ferreur ferror
#define favoirposition fgetpos
#define favoirc fgetc
#define favoircaractere fgetchar
#define flire fread
#define flire_s fread_s
#define fchercher fseek
#define fcherchero fseeko
#define fchercher64 fseek64
#define fmettreposition fsetpos
#define fmettreposition64 fsetpos64
#define fraconte ftell
#define fraconteo ftello
#define fraconteo64 ftello64
#define fecrire fwrite
#define ffermetout fcloseall
#define ffdf feof
#define renommer rename
#define retirer remove
#define revenirenarrire rewind
#define mettretampon setbuf
#define fichiertemp tmpfile
#define nomtemp tmpfile
#define safficherformat sprintf
#define safficherformat_s sprintf_s
#define vfafficherformat vfprintf
#define vfafficherformat_s vfprintf_s
#define vafficherformat vprintf
#define fentree fscanf
#define sentree ssscanf
#define favoirchaine fgets
#define fmettrecaractere fputc
#define fmettrechaine fputs
#define avoirc getc
#define avoirchaine gets
#define mettrec putc
#define mettrecaract putchar
#define mettrechaine puts
#define perdrec ungetc
#define perreur
#define avoircaract
#define TAILTAMP BUFSIZ
#define MAX_NOMFICHIER FILENAME_MAX
#define MAX_FOUVRE FOPEN_MAX

// Stdlib
#define nul NULL
#define QUITTER_SUCCES EXIT_SUCCESS
#define QUITTER_ECHEC EXIT_FAILURE
#define ALEA_MAXIMAL RAND_MAX
#define MO_CUR_MAXIMAL MB_CUR_MAX
#define MO_TAI_MAXIMAL MB_LEN_MAX
#define avef atof
#define avee atoi
#define avel atol
#define chaved strtod
#define chavel strtol
#define chavensl strtoul
#define allouec calloc
#define realloue realloc
#define allouemem malloc
#define annule abort
#define quandquitte atexit
#define quitte exit
#define avoirenv getenv
#define systeme system
#define bcherche bsearch
#define trierq qsort
#define absolu abs
#define diviser div
#define diviser_t div_t
#define absolong labs
#define absolonglong llabs
#define divisierlong ldiv
#define alea rand
#define galea srand
#define motai mblen
#define movewc mbtowc

// math.h
#define GRANDE_VAL HUGE_VAL
#define arcos acos
#define arcsin asin
#define arctan atan
#define arctan2 atan2
#define puiss pow
#define racinecarre sqrt
#define plaf ceil
#define sol floor

// time.h
#define horloge_t clock_t
#define temps_t time_t
#define tempsasc asctime
#define horloge clock
#define ctemps ctime
#define difftemps difftime
#define tempsgm gmtime
#define tempslocal localtime
#define tempsmk mktime
#define tempsstrf strftime
#define temps time

// string.h
#define caramem memchr
#define memcopie memcpy
#define membouge memmove
#define memmettre memset
#define chacat strcat
#define chaincat strncat
#define chaistr strchr
#define chacmp strcmp
#define chaincmp strncmp
#define chaicoll strcoll
#define chaicopie strcpy
#define chaincopie strncpy
#define chaispn strcspn
#define chaierreur strerror
#define chaitaille strlen
#define chaprm strpbrk
#define chaider strrchr
#define chaitaillrel strstr
#define chaitok strtok
#define chaitrf strxfrm

#endif //UNTITLED_FRANC_H
