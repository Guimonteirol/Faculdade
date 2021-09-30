C,O,L, X =input().split()
C = int(C)
O = int(O)
L = int(L)
X = int(X)

A = C//4
B = O//8
D = L//2
E = X//1
if A ==B and A==D and A==E and B==D and B==E and D==E:
    segundos_str = 1259 * A
    total_segs = int(segundos_str)
    horas = total_segs // 3600
    segs_restantes = total_segs % 3600
    minutos = segs_restantes // 60
    segs_restantes_final = segs_restantes % 60
    print(horas,"h",minutos,"m",segs_restantes_final,"s")

elif A<B and A<D and A<E:
    segundos_str = 1259 * A
    total_segs = int(segundos_str)
    horas = total_segs // 3600
    segs_restantes = total_segs % 3600
    minutos = segs_restantes // 60
    segs_restantes_final = segs_restantes % 60
    print(horas,"h",minutos,"m",segs_restantes_final,"s")

elif B<A and B<D and B<E:
    segundos_str = 1259 * B
    total_segs = int(segundos_str)
    horas = total_segs // 3600
    segs_restantes = total_segs % 3600
    minutos = segs_restantes // 60
    segs_restantes_final = segs_restantes % 60
    print(horas,"h",minutos,"m",segs_restantes_final,"s")
elif D<A and D<B and D<E:
    segundos_str = 1259 * D
    total_segs = int(segundos_str)
    horas = total_segs // 3600
    segs_restantes = total_segs % 3600
    minutos = segs_restantes // 60
    segs_restantes_final = segs_restantes % 60
    print(horas,"h",minutos,"m",segs_restantes_final,"s")
elif E<A and E<D and E<B:
     segundos_str = 1259 * E
     total_segs = int(segundos_str)
     horas = total_segs // 3600
     segs_restantes = total_segs % 3600
     minutos = segs_restantes // 60
     segs_restantes_final = segs_restantes % 60
     print(horas,"h",minutos,"m",segs_restantes_final,"s")