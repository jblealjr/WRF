! these define the various loop range variables
! that were defined in module_MPP. Defined as macros
! here to allow thread-safety/tile callability

#define MY_IS(A,B) max(ids+(A),its-(B))
#define MY_IE(A,B) min(ide-1-(A),ite+(B))
#define MY_JS(A,B) max(jds+(A),jts-(B))
#define MY_JE(A,B) min(jde-1-(A),jte+(B))

#define MYIS      MY_IS( 0 , 0  )
#define MYIS_P1   MY_IS( 0 , 1  )
#define MYIS_P2   MY_IS( 0 , 2  )
#define MYIS_P3   MY_IS( 0 , 3  )
#define MYIS_P4   MY_IS( 0 , 4  )
#define MYIS1     MY_IS( 1 , 0  )
#define MYIS1_P1  MY_IS( 1 , 1  )
#define MYIS1_P2  MY_IS( 1 , 2  )
#define MYIS1_P3  MY_IS( 1 , 3  )
#define MYIS1_P4  MY_IS( 1 , 4  )
#define MYIS2     MY_IS( 2 , 0  )
#define MYIS2_P1  MY_IS( 2 , 1  )
#define MYIS2_P2  MY_IS( 2 , 2  )
#define MYIS2_P3  MY_IS( 2 , 3  )
#define MYIS2_P4  MY_IS( 2 , 4  )
#define MYIS3     MY_IS( 3 , 0  )
#define MYIS3_P1  MY_IS( 3 , 1  )
#define MYIS3_P2  MY_IS( 3 , 2  )
#define MYIS3_P3  MY_IS( 3 , 3  )
#define MYIS3_P4  MY_IS( 3 , 4  )
#define MYIS4     MY_IS( 4 , 0  )
#define MYIS4_P1  MY_IS( 4 , 1  )
#define MYIS4_P2  MY_IS( 4 , 2  )
#define MYIS4_P3  MY_IS( 4 , 3  )
#define MYIS4_P4  MY_IS( 4 , 4  )

#define MYIE      MY_IE( 0 , 0  )
#define MYIE_P1   MY_IE( 0 , 1  )
#define MYIE_P2   MY_IE( 0 , 2  )
#define MYIE_P3   MY_IE( 0 , 3  )
#define MYIE_P4   MY_IE( 0 , 4  )
#define MYIE1     MY_IE( 1 , 0  )
#define MYIE1_P1  MY_IE( 1 , 1  )
#define MYIE1_P2  MY_IE( 1 , 2  )
#define MYIE1_P3  MY_IE( 1 , 3  )
#define MYIE1_P4  MY_IE( 1 , 4  )
#define MYIE2     MY_IE( 2 , 0  )
#define MYIE2_P1  MY_IE( 2 , 1  )
#define MYIE2_P2  MY_IE( 2 , 2  )
#define MYIE2_P3  MY_IE( 2 , 3  )
#define MYIE2_P4  MY_IE( 2 , 4  )
#define MYIE3     MY_IE( 3 , 0  )
#define MYIE3_P1  MY_IE( 3 , 1  )
#define MYIE3_P2  MY_IE( 3 , 2  )
#define MYIE3_P3  MY_IE( 3 , 3  )
#define MYIE3_P4  MY_IE( 3 , 4  )
#define MYIE4     MY_IE( 4 , 0  )
#define MYIE4_P1  MY_IE( 4 , 1  )
#define MYIE4_P2  MY_IE( 4 , 2  )
#define MYIE4_P3  MY_IE( 4 , 3  )
#define MYIE4_P4  MY_IE( 4 , 4  )

#define MYJS      MY_JS( 0 , 0  )
#define MYJS_P1   MY_JS( 0 , 1  )
#define MYJS_P2   MY_JS( 0 , 2  )
#define MYJS_P3   MY_JS( 0 , 3  )
#define MYJS_P4   MY_JS( 0 , 4  )
#define MYJS1     MY_JS( 1 , 0  )
#define MYJS1_P1  MY_JS( 1 , 1  )
#define MYJS1_P2  MY_JS( 1 , 2  )
#define MYJS1_P3  MY_JS( 1 , 3  )
#define MYJS1_P4  MY_JS( 1 , 4  )
#define MYJS2     MY_JS( 2 , 0  )
#define MYJS2_P1  MY_JS( 2 , 1  )
#define MYJS2_P2  MY_JS( 2 , 2  )
#define MYJS2_P3  MY_JS( 2 , 3  )
#define MYJS2_P4  MY_JS( 2 , 4  )
#define MYJS3     MY_JS( 3 , 0  )
#define MYJS3_P1  MY_JS( 3 , 1  )
#define MYJS3_P2  MY_JS( 3 , 2  )
#define MYJS3_P3  MY_JS( 3 , 3  )
#define MYJS3_P4  MY_JS( 3 , 4  )
#define MYJS4     MY_JS( 4 , 0  )
#define MYJS4_P1  MY_JS( 4 , 1  )
#define MYJS4_P2  MY_JS( 4 , 2  )
#define MYJS4_P3  MY_JS( 4 , 3  )
#define MYJS4_P4  MY_JS( 4 , 4  )

#define MYJE      MY_JE( 0 , 0  )
#define MYJE_P1   MY_JE( 0 , 1  )
#define MYJE_P2   MY_JE( 0 , 2  )
#define MYJE_P3   MY_JE( 0 , 3  )
#define MYJE_P4   MY_JE( 0 , 4  )
#define MYJE1     MY_JE( 1 , 0  )
#define MYJE1_P1  MY_JE( 1 , 1  )
#define MYJE1_P2  MY_JE( 1 , 2  )
#define MYJE1_P3  MY_JE( 1 , 3  )
#define MYJE1_P4  MY_JE( 1 , 4  )
#define MYJE2     MY_JE( 2 , 0  )
#define MYJE2_P1  MY_JE( 2 , 1  )
#define MYJE2_P2  MY_JE( 2 , 2  )
#define MYJE2_P3  MY_JE( 2 , 3  )
#define MYJE2_P4  MY_JE( 2 , 4  )
#define MYJE3     MY_JE( 3 , 0  )
#define MYJE3_P1  MY_JE( 3 , 1  )
#define MYJE3_P2  MY_JE( 3 , 2  )
#define MYJE3_P3  MY_JE( 3 , 3  )
#define MYJE3_P4  MY_JE( 3 , 4  )
#define MYJE4     MY_JE( 4 , 0  )
#define MYJE4_P1  MY_JE( 4 , 1  )
#define MYJE4_P2  MY_JE( 4 , 2  )
#define MYJE4_P3  MY_JE( 4 , 3  )
#define MYJE4_P4  MY_JE( 4 , 4  )

