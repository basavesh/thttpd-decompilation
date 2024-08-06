
int64_t __cxa_finalize = 0;

void fun_5720(int64_t rdi) {
    goto __cxa_finalize;
}

int64_t openlog = 0x55f6;

void fun_55f0(void** rdi, void** rsi, int64_t rdx) {
    goto openlog;
}

int64_t strcmp = 0x5376;

int32_t fun_5370(void** rdi, void** rsi, ...) {
    goto strcmp;
}

int64_t fopen = 0x5596;

void** fun_5590(void** rdi, void** rsi, ...) {
    goto fopen;
}

int64_t fgets = 0x5356;

int64_t fun_5350(void** rdi, void** rsi, void** rdx, ...) {
    goto fgets;
}

int64_t fclose = 0x5196;

void fun_5190(void** rdi, void** rsi, void** rdx, ...) {
    goto fclose;
}

int64_t strchr = 0x5226;

void** fun_5220(void** rdi, void** rsi, void** rdx, ...) {
    goto strchr;
}

int64_t strcspn = 0x5316;

void** fun_5310(void** rdi, int64_t rsi, void** rdx) {
    goto strcspn;
}

int64_t strcasecmp = 0x5056;

int32_t fun_5050(void** rdi, void** rsi, void** rdx) {
    goto strcasecmp;
}

int64_t strdup = 0x5676;

void** fun_5670(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto strdup;
}

int64_t strtol = 0x53c6;

void** fun_53c0(void** rdi) {
    goto strtol;
}

int64_t tzset = 0x53e6;

void fun_53e0(void** rdi, void** rsi) {
    goto tzset;
}

int64_t snprintf = 0x5236;

void fun_5230(void** rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    goto snprintf;
}

int64_t getaddrinfo = 0x5666;

void** fun_5660(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto getaddrinfo;
}

int64_t memmove = 0x5546;

void fun_5540(void** rdi, void** rsi, void** rdx, ...) {
    goto memmove;
}

int64_t freeaddrinfo = 0x5706;

void fun_5700(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto freeaddrinfo;
}

int64_t syslog = 0x5486;

void fun_5480(void** rdi, void** rsi, ...) {
    goto syslog;
}

int64_t gettimeofday = 0x5266;

void fun_5260(void** rdi, ...) {
    goto gettimeofday;
}

int64_t getuid = 0x51f6;

int32_t fun_51f0() {
    goto getuid;
}

struct s0 {
    signed char[16] pad16;
    int32_t f10;
    void** f14;
};

int64_t getpwnam = 0x5396;

struct s0* fun_5390(void** rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    goto getpwnam;
}

int64_t fprintf = 0x53a6;

void fun_53a0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8, ...) {
    goto fprintf;
}

int64_t fileno = 0x5416;

int32_t fun_5410(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto fileno;
}

int64_t fchown = 0x5586;

int32_t fun_5580(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    goto fchown;
}

int64_t perror = 0x55a6;

void fun_55a0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto perror;
}

int64_t chdir = 0x51e6;

int32_t fun_51e0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto chdir;
}

int64_t exit = 0x5626;

int64_t fun_5620() {
    goto exit;
}

int64_t strlen = 0x51d6;

void** fun_51d0(void** rdi, void** rsi, ...) {
    goto strlen;
}

int64_t setsid = 0x52e6;

void fun_52e0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto setsid;
}

int64_t daemon = 0x54a6;

int32_t fun_54a0(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto daemon;
}

int64_t __isoc99_sscanf = 0x5476;

int32_t fun_5470(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8, void** a9, void** a10) {
    goto __isoc99_sscanf;
}

int64_t strstr = 0x56c6;

void** fun_56c0(void** rdi, void** rsi, void** rdx, ...) {
    goto strstr;
}

int64_t realloc = 0x54d6;

void** fun_54d0(void** rdi, void** rsi, void** rdx) {
    goto realloc;
}

int64_t chroot = 0x50e6;

int32_t fun_50e0(void* rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto chroot;
}

int64_t strncmp = 0x50b6;

int32_t fun_50b0(void** rdi, void** rsi, void** rdx, ...) {
    goto strncmp;
}

void** fun_5430(void** rdi, ...);

int32_t fun_5600(int64_t rdi, void** rsi);

/* httpd_initialize.ghnbuf */
signed char httpd_initialize_ghnbuf = 0;

void** initialize_listen_socket(void** rdi);

void free_httpd_server(void** rdi, void** rsi, void** rdx);

void fun_5110(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

void ext_compare(int64_t rdi, int64_t rsi);

void** enc_tab = reinterpret_cast<void**>(0xed);

void** g193d8 = reinterpret_cast<void**>(0);

void** g193e0 = reinterpret_cast<void**>(62);

void** g193e8 = reinterpret_cast<void**>(0);

void** g193f0 = reinterpret_cast<void**>(0x88);

void** g193f8 = reinterpret_cast<void**>(0);

void** g19400 = reinterpret_cast<void**>(71);

void** g19408 = reinterpret_cast<void**>(0);

void** g19410 = reinterpret_cast<void**>(76);

void** g19418 = reinterpret_cast<void**>(0);

void** g19420 = reinterpret_cast<void**>(79);

void** g19428 = reinterpret_cast<void**>(0);

struct s1 {
    signed char[103472] pad103472;
    void** f19430;
};

int32_t fun_52d0(void** rdi, void** rsi, void** rdx, void** rcx, ...);

/* httpd_ntoa.str */
uint56_t httpd_ntoa_str = 0;

void** httpd_initialize(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8, void** a9, void** a10, uint32_t a11, void** a12, void** a13, void** a14, void** a15, void** a16, void** a17, void** a18) {
    void** r12d19;
    int32_t r13d20;
    void** r14_21;
    void** v22;
    void** rax23;
    void** rsi24;
    void** r15_25;
    int32_t eax26;
    int1_t zf27;
    void** rax28;
    void* rdi29;
    void** rax30;
    void** rax31;
    void** rbx32;
    void** rbx33;
    void** rax34;
    void** rdi35;
    void** rax36;
    void** rax37;
    void** rax38;
    void** rax39;
    void** r13_40;
    void** rax41;
    void** r14_42;
    void** rax43;
    void** rdx44;
    void** rsi45;
    void** eax46;
    void** eax47;
    void*** r12_48;
    void** rdi49;
    void** rax50;
    void** rdi51;
    void** rax52;
    void** rdi53;
    void** rax54;
    void** rdi55;
    void** rax56;
    void** rdi57;
    void** rax58;
    void** rdi59;
    void** rax60;
    struct s1* rbx61;
    void** rdi62;
    void** rax63;
    void** rdi64;
    void** rax65;
    uint32_t eax66;
    int32_t edx67;
    void** rsi68;
    int32_t eax69;
    uint32_t eax70;
    uint32_t ecx71;
    void** rax72;

    r12d19 = r9;
    r13d20 = *reinterpret_cast<int32_t*>(&rcx);
    r14_21 = rdx;
    v22 = rsi;
    rax23 = fun_5430(0x88);
    if (!rax23) {
        rsi24 = reinterpret_cast<void**>("out of memory allocating an httpd_server");
    } else {
        r15_25 = rax23;
        if (!rdi) {
            __asm__("xorps xmm0, xmm0");
            __asm__("movups [r15], xmm0");
            *reinterpret_cast<int32_t*>(&rsi) = 0x100;
            *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
            eax26 = fun_5600(0x1b000, 0x100);
            if (eax26 < 0) {
                httpd_initialize_ghnbuf = 0;
                goto addr_8aa3_6;
            } else {
                if (!*reinterpret_cast<void***>(r15_25 + 8) && (zf27 = httpd_initialize_ghnbuf == 0, !zf27)) {
                    *reinterpret_cast<void***>(r15_25 + 8) = reinterpret_cast<void**>(0x1b000);
                    goto addr_8aa3_6;
                }
            }
        } else {
            rax28 = fun_5670(rdi, rsi, rdx, rcx, r8, r9);
            *reinterpret_cast<void***>(r15_25) = rax28;
            if (!rax28) {
                rsi24 = reinterpret_cast<void**>("out of memory copying hostname");
            } else {
                *reinterpret_cast<void***>(r15_25 + 8) = rax28;
                goto addr_8aa3_6;
            }
        }
    }
    addr_8be1_12:
    *reinterpret_cast<int32_t*>(&r15_25) = 0;
    *reinterpret_cast<int32_t*>(&r15_25 + 4) = 0;
    fun_5480(2, rsi24, 2, rsi24);
    addr_8bf0_13:
    return r15_25;
    addr_8aa3_6:
    *reinterpret_cast<void***>(r15_25 + 16) = *reinterpret_cast<void***>(&r13d20);
    if (!r8) {
        *reinterpret_cast<void***>(r15_25 + 24) = reinterpret_cast<void**>(0);
    } else {
        *reinterpret_cast<int32_t*>(&rdi29) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = 0;
        *reinterpret_cast<unsigned char*>(&rdi29) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(r8) == 47);
        rax30 = fun_5670(reinterpret_cast<int64_t>(rdi29) + reinterpret_cast<unsigned char>(r8), rsi, rdx, rcx, r8, r9);
        *reinterpret_cast<void***>(r15_25 + 24) = rax30;
        if (!rax30) {
            rsi24 = reinterpret_cast<void**>("out of memory copying cgi_pattern");
            goto addr_8be1_12;
        } else {
            rsi = reinterpret_cast<void**>("|/");
            rax31 = fun_56c0(rax30, "|/", rdx);
            if (rax31) {
                rbx32 = rax31;
                do {
                    rbx33 = rbx32 + 2;
                    rax34 = fun_51d0(rbx33, "|/", rbx33, "|/");
                    rdx = rax34 + 1;
                    fun_5540(rbx32 + 1, rbx33, rdx);
                    rdi35 = *reinterpret_cast<void***>(r15_25 + 24);
                    rsi = reinterpret_cast<void**>("|/");
                    rax36 = fun_56c0(rdi35, "|/", rdx);
                    rbx32 = rax36;
                } while (rax36);
            }
        }
    }
    *reinterpret_cast<void***>(r15_25 + 32) = r12d19;
    *reinterpret_cast<void***>(r15_25 + 36) = reinterpret_cast<void**>(0);
    rax37 = fun_5670(a7, rsi, rdx, rcx, r8, r9);
    *reinterpret_cast<void***>(r15_25 + 40) = rax37;
    rax38 = fun_5670(a8, rsi, rdx, rcx, r8, r9);
    *reinterpret_cast<void***>(r15_25 + 48) = rax38;
    *reinterpret_cast<void***>(r15_25 + 56) = a9;
    rax39 = fun_5670(a10, rsi, rdx, rcx, r8, r9);
    *reinterpret_cast<void***>(r15_25 + 64) = rax39;
    if (!rax39) {
        rsi24 = reinterpret_cast<void**>("out of memory copying cwd");
        goto addr_8be1_12;
    } else {
        if (!a16) {
            *reinterpret_cast<void***>(r15_25 + 0x70) = reinterpret_cast<void**>(0);
            r13_40 = r14_21;
            goto addr_8bba_25;
        }
        rax41 = fun_5670(a16, rsi, rdx, rcx, r8, r9);
        *reinterpret_cast<void***>(r15_25 + 0x70) = rax41;
        r13_40 = r14_21;
        if (rax41) {
            addr_8bba_25:
            if (!a17) {
                *reinterpret_cast<void***>(r15_25 + 0x78) = reinterpret_cast<void**>(0);
                r14_42 = v22;
                goto addr_8c0f_28;
            }
        } else {
            rsi24 = reinterpret_cast<void**>("out of memory copying url_pattern");
            goto addr_8be1_12;
        }
    }
    rax43 = fun_5670(a17, rsi, rdx, rcx, r8, r9);
    *reinterpret_cast<void***>(r15_25 + 0x78) = rax43;
    r14_42 = v22;
    if (rax43) {
        addr_8c0f_28:
        rdx44 = a14;
        *reinterpret_cast<int32_t*>(&rdx44 + 4) = 0;
        rsi45 = a13;
        *reinterpret_cast<int32_t*>(&rsi45 + 4) = 0;
        *reinterpret_cast<uint32_t*>(r15_25 + 80) = a11;
        *reinterpret_cast<void***>(r15_25 + 88) = a12;
        *reinterpret_cast<void***>(r15_25 + 96) = rsi45;
        *reinterpret_cast<void***>(r15_25 + 100) = rdx44;
        *reinterpret_cast<void***>(r15_25 + 0x68) = a15;
        *reinterpret_cast<void***>(r15_25 + 0x80) = a18;
        if (!r13_40) {
            eax46 = reinterpret_cast<void**>(0xffffffff);
        } else {
            eax46 = initialize_listen_socket(r13_40);
        }
    } else {
        rsi24 = reinterpret_cast<void**>("out of memory copying local_pattern");
        goto addr_8be1_12;
    }
    *reinterpret_cast<void***>(r15_25 + 76) = eax46;
    if (r14_42) {
        eax47 = initialize_listen_socket(r14_42);
        r12_48 = reinterpret_cast<void***>(r15_25 + 72);
        *reinterpret_cast<void***>(r15_25 + 72) = eax47;
        if (!reinterpret_cast<int1_t>(eax47 == 0xffffffff)) 
            goto addr_8cb1_36;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r15_25 + 76) == 0xffffffff)) 
            goto addr_8cb1_36; else 
            goto addr_8c8d_38;
    }
    r12_48 = reinterpret_cast<void***>(r15_25 + 72);
    *reinterpret_cast<void***>(r15_25 + 72) = reinterpret_cast<void**>(0xffffffff);
    if (eax46 == 0xffffffff) {
        addr_8c8d_38:
        free_httpd_server(r15_25, rsi45, rdx44);
        *reinterpret_cast<int32_t*>(&r15_25) = 0;
        *reinterpret_cast<int32_t*>(&r15_25 + 4) = 0;
        goto addr_8bf0_13;
    } else {
        addr_8cb1_36:
        fun_5110(0x193d0, 3, 32, ext_compare, r8, r9);
        fun_5110(0x19430, 0xc1, 32, ext_compare, r8, r9);
        rdi49 = enc_tab;
        rax50 = fun_51d0(rdi49, 0xc1, rdi49, 0xc1);
        g193d8 = rax50;
        rdi51 = g193e0;
        rax52 = fun_51d0(rdi51, 0xc1, rdi51, 0xc1);
        g193e8 = rax52;
        rdi53 = g193f0;
        rax54 = fun_51d0(rdi53, 0xc1, rdi53, 0xc1);
        g193f8 = rax54;
        rdi55 = g19400;
        rax56 = fun_51d0(rdi55, 0xc1, rdi55, 0xc1);
        g19408 = rax56;
        rdi57 = g19410;
        rax58 = fun_51d0(rdi57, 0xc1, rdi57, 0xc1);
        g19418 = rax58;
        rdi59 = g19420;
        rax60 = fun_51d0(rdi59, 0xc1, rdi59, 0xc1);
        g19428 = rax60;
        *reinterpret_cast<int32_t*>(&rbx61) = 24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx61) + 4) = 0;
    }
    do {
        rdi62 = *(&rbx61->f19430 - 24);
        rax63 = fun_51d0(rdi62, 0xc1, rdi62, 0xc1);
        *(&rbx61->f19430 - 16) = rax63;
        rdi64 = *(&rbx61->f19430 - 8);
        rax65 = fun_51d0(rdi64, 0xc1, rdi64, 0xc1);
        rbx61->f19430 = rax65;
        rbx61 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rbx61) + 32);
    } while (!reinterpret_cast<int1_t>(rbx61 == 0x1838));
    if (!*reinterpret_cast<void***>(r15_25)) {
        fun_5480(5, "%.80s starting on port %d", 5, "%.80s starting on port %d");
        goto addr_8bf0_13;
    } else {
        if (*r12_48 == 0xffffffff) {
            r14_42 = r13_40;
        }
        eax66 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_42));
        edx67 = 28;
        if (*reinterpret_cast<int16_t*>(&eax66) != 10) {
            edx67 = 0;
        }
        *reinterpret_cast<int32_t*>(&rsi68) = 16;
        *reinterpret_cast<int32_t*>(&rsi68 + 4) = 0;
        if (*reinterpret_cast<int16_t*>(&eax66) != 2) {
            *reinterpret_cast<int32_t*>(&rsi68) = edx67;
            *reinterpret_cast<int32_t*>(&rsi68 + 4) = 0;
        }
        eax69 = fun_52d0(r14_42, rsi68, 0x1b110, 0xc8, r14_42, rsi68, 0x1b110, 0xc8);
        if (!eax69) {
            if (!*reinterpret_cast<void***>(r14_42 + 8) && (!*reinterpret_cast<signed char*>(r14_42 + 12) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r14_42 + 16) == 0xffff0000) && (eax70 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx71 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx71 | eax70))))) {
                rax72 = fun_51d0(0x1b117, rsi68, 0x1b117, rsi68);
                fun_5540(0x1b110, 0x1b117, rax72 + 1);
            }
        } else {
            *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
        }
        fun_5480(5, "%.80s starting on %.80s, port %d", 5, "%.80s starting on %.80s, port %d");
        goto addr_8bf0_13;
    }
}

void** free_timers = reinterpret_cast<void**>(0);

int32_t active_count = 0;

void** tmr_create(void** rdi, void** rsi, void** rdx, void** rcx, void** r8d, void** r9) {
    void** rbx7;
    void** rax8;
    int32_t eax9;
    int32_t* rcx10;
    void* rcx11;
    void** rcx12;
    void** rsi13;
    void* rdx14;
    uint64_t rdx15;
    int64_t rax16;
    uint64_t rax17;
    int64_t rdx18;
    void** rax19;
    void** rdx20;
    void** rbp21;
    void** rdi22;
    int32_t tmp32_23;

    rbx7 = free_timers;
    if (!rbx7) {
        rax8 = fun_5430(72);
        if (!rax8) {
            *reinterpret_cast<int32_t*>(&rbx7) = 0;
            *reinterpret_cast<int32_t*>(&rbx7 + 4) = 0;
        } else {
            rbx7 = rax8;
            eax9 = 1;
            rcx10 = reinterpret_cast<int32_t*>(0x1b758);
            goto addr_11051_5;
        }
    } else {
        free_timers = *reinterpret_cast<void***>(rbx7 + 56);
        eax9 = -1;
        rcx10 = reinterpret_cast<int32_t*>(0x1b750);
        goto addr_11051_5;
    }
    addr_111c3_7:
    return rbx7;
    addr_11051_5:
    *rcx10 = *rcx10 + eax9;
    *reinterpret_cast<void***>(rbx7) = rsi;
    *reinterpret_cast<void***>(rbx7 + 8) = rdx;
    *reinterpret_cast<void***>(rbx7 + 16) = rcx;
    *reinterpret_cast<void***>(rbx7 + 24) = r8d;
    if (!rdi) {
        fun_5260(rbx7 + 32);
    } else {
        __asm__("movups xmm0, [r15]");
        __asm__("movups [rdi], xmm0");
    }
    rcx11 = reinterpret_cast<void*>((reinterpret_cast<int64_t>(__intrinsic()) >> 7) + (__intrinsic() >> 63));
    rcx12 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rcx11) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7 + 32)));
    *reinterpret_cast<void***>(rbx7 + 32) = rcx12;
    rsi13 = *reinterpret_cast<void***>(rbx7 + 40) + reinterpret_cast<uint64_t>(rcx - reinterpret_cast<uint64_t>(rcx11) * 0x3e8) * 0x3e8;
    *reinterpret_cast<void***>(rbx7 + 40) = rsi13;
    if (reinterpret_cast<signed char>(rsi13) >= reinterpret_cast<signed char>(0xf4240)) {
        rdx14 = reinterpret_cast<void*>(__intrinsic() >> 18);
        rcx12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx12) + reinterpret_cast<uint64_t>(rdx14));
        *reinterpret_cast<void***>(rbx7 + 32) = rcx12;
        rsi13 = rsi13 - reinterpret_cast<uint64_t>(rdx14) * 0xf4240;
        *reinterpret_cast<void***>(rbx7 + 40) = rsi13;
    }
    rdx15 = reinterpret_cast<unsigned char>(rsi13) ^ reinterpret_cast<unsigned char>(rcx12);
    *reinterpret_cast<void****>(&rax16) = *reinterpret_cast<void****>(&rdx15);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
    rax17 = reinterpret_cast<uint64_t>(rax16 * 0x7a44c6b) >> 33;
    *reinterpret_cast<void***>(&rdx18) = reinterpret_cast<void**>(*reinterpret_cast<void****>(&rdx15) - *reinterpret_cast<int32_t*>(&rax17) * 67);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
    *reinterpret_cast<void***>(rbx7 + 64) = *reinterpret_cast<void***>(&rdx18);
    rax19 = *reinterpret_cast<void***>(0x1b530 + rdx18 * 8);
    if (!rax19) {
        *reinterpret_cast<void***>(0x1b530 + rdx18 * 8) = rbx7;
        __asm__("xorps xmm0, xmm0");
        __asm__("movups [rbx+0x30], xmm0");
    } else {
        if (reinterpret_cast<signed char>(rcx12) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax19 + 32)) || rcx12 == *reinterpret_cast<void***>(rax19 + 32) && reinterpret_cast<signed char>(rsi13) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax19 + 40))) {
            *reinterpret_cast<void***>(0x1b530 + rdx18 * 8) = rbx7;
            *reinterpret_cast<void***>(rbx7 + 48) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(rbx7 + 56) = rax19;
            *reinterpret_cast<void***>(rax19 + 48) = rbx7;
        } else {
            rdx20 = *reinterpret_cast<void***>(rax19 + 56);
            if (!rdx20) {
                addr_111ac_17:
                *reinterpret_cast<void***>(rax19 + 56) = rbx7;
                *reinterpret_cast<void***>(rbx7 + 48) = rax19;
                *reinterpret_cast<void***>(rbx7 + 56) = reinterpret_cast<void**>(0);
            } else {
                rbp21 = *reinterpret_cast<void***>(rdx20 + 32);
                if (reinterpret_cast<signed char>(rcx12) >= reinterpret_cast<signed char>(rbp21)) {
                    do {
                        rdi22 = rdx20;
                        if (rcx12 != rbp21) 
                            goto addr_1117e_20;
                        if (reinterpret_cast<signed char>(rsi13) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdi22 + 40))) 
                            goto addr_111d5_22;
                        addr_1117e_20:
                        rdx20 = *reinterpret_cast<void***>(rdi22 + 56);
                        if (!rdx20) 
                            goto addr_111a9_23;
                        rbp21 = *reinterpret_cast<void***>(rdx20 + 32);
                        rax19 = rdi22;
                    } while (reinterpret_cast<signed char>(rcx12) >= reinterpret_cast<signed char>(rbp21));
                    goto addr_11193_25;
                } else {
                    addr_11160_26:
                    rdi22 = rax19;
                    goto addr_11193_25;
                }
            }
        }
    }
    addr_111bc_27:
    tmp32_23 = active_count + 1;
    active_count = tmp32_23;
    goto addr_111c3_7;
    addr_111d5_22:
    rdx20 = rdi22;
    goto addr_11160_26;
    addr_111a9_23:
    rax19 = rdi22;
    goto addr_111ac_17;
    addr_11193_25:
    *reinterpret_cast<void***>(rdi22 + 56) = rbx7;
    *reinterpret_cast<void***>(rbx7 + 48) = rdi22;
    *reinterpret_cast<void***>(rbx7 + 56) = rdx20;
    *reinterpret_cast<void***>(rdx20 + 48) = rbx7;
    goto addr_111bc_27;
}

int64_t setgroups = 0x52b6;

int32_t fun_52b0() {
    goto setgroups;
}

int64_t setuid = 0x5656;

int32_t fun_5650(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto setuid;
}

int64_t malloc = 0x5436;

void** fun_5430(void** rdi, ...) {
    goto malloc;
}

void** nfiles = reinterpret_cast<void**>(0);

void** fd_rw = reinterpret_cast<void**>(0);

void** npoll_fds = reinterpret_cast<void**>(0);

void** pollfds = reinterpret_cast<void**>(0);

void** poll_fdidx = reinterpret_cast<void**>(0);

void** fd_data = reinterpret_cast<void**>(0);

void fdwatch_add_fd(void** edi, void** rsi, void** edx, void** rcx, void** r8, void** r9, void** a7) {
    void** esi8;
    void** rax9;
    int64_t rbx10;
    void** ecx11;
    int64_t rsi12;
    void** rdi13;
    int16_t dx14;
    void** rdx15;
    void** rax16;

    if (reinterpret_cast<signed char>(edi) < reinterpret_cast<signed char>(0) || ((esi8 = nfiles, reinterpret_cast<signed char>(esi8) <= reinterpret_cast<signed char>(edi)) || (rax9 = fd_rw, *reinterpret_cast<void***>(&rbx10) = edi, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx10) + 4) = 0, *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax9) + reinterpret_cast<uint64_t>(rbx10 * 4)) != 0xffffffff))) {
        goto syslog;
    }
    ecx11 = npoll_fds;
    if (reinterpret_cast<signed char>(ecx11) >= reinterpret_cast<signed char>(esi8)) {
        fun_5480(3, "too many fds in poll_add_fd!");
        rax9 = fd_rw;
    } else {
        rsi12 = reinterpret_cast<int32_t>(ecx11);
        rdi13 = pollfds;
        *reinterpret_cast<void***>(rdi13 + rsi12 * 8) = edi;
        if (!edx) {
            dx14 = 1;
            goto addr_10325_8;
        } else {
            if (!reinterpret_cast<int1_t>(edx == 1)) {
                addr_1032a_10:
                rdx15 = poll_fdidx;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx15) + reinterpret_cast<uint64_t>(rbx10 * 4)) = ecx11;
                npoll_fds = ecx11 + 1;
            } else {
                dx14 = 4;
                goto addr_10325_8;
            }
        }
    }
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax9) + reinterpret_cast<uint64_t>(rbx10 * 4)) = edx;
    rax16 = fd_data;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax16) + reinterpret_cast<uint64_t>(rbx10 * 8)) = rsi;
    return;
    addr_10325_8:
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rdi13 + rsi12 * 8) + 4) = dx14;
    goto addr_1032a_10;
}

int64_t fcntl = 0x5166;

void** fun_5160(void** rdi, void** rsi, ...) {
    goto fcntl;
}

void httpd_set_logfp(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** rdi7;

    rdi7 = *reinterpret_cast<void***>(rdi + 88);
    if (rdi7) {
        fun_5190(rdi7, rsi, rdx);
    }
    *reinterpret_cast<void***>(rdi + 88) = rsi;
    return;
}

uint32_t fdwatch_check_fd(void** edi, ...) {
    void** ecx2;
    void** rax3;
    int64_t rsi4;
    void** rsi5;
    uint32_t ebx6;
    void** rdx7;
    int64_t rdx8;
    void** rcx9;
    uint32_t ecx10;
    uint32_t ecx11;

    if (reinterpret_cast<signed char>(edi) < reinterpret_cast<signed char>(0) || ((ecx2 = nfiles, reinterpret_cast<signed char>(ecx2) <= reinterpret_cast<signed char>(edi)) || (rax3 = fd_rw, *reinterpret_cast<void***>(&rsi4) = edi, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = 0, *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax3) + reinterpret_cast<uint64_t>(rsi4 * 4)) == 0xffffffff))) {
        rsi5 = reinterpret_cast<void**>("bad fd (%d) passed to fdwatch_check_fd!");
        ebx6 = 0;
    } else {
        rdx7 = poll_fdidx;
        *reinterpret_cast<void***>(&rdx8) = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx7) + reinterpret_cast<uint64_t>(rsi4 * 4));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx8)) < reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx8)) >= reinterpret_cast<signed char>(ecx2)) {
            rsi5 = reinterpret_cast<void**>("bad fdidx (%d) in poll_check_fd!");
            ebx6 = 0;
        } else {
            rcx9 = pollfds;
            ecx10 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(rcx9) + reinterpret_cast<uint64_t>(rdx8 * 8) + 6);
            ebx6 = 0;
            if (*reinterpret_cast<unsigned char*>(&ecx10) & 8) 
                goto addr_1050a_6;
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax3) + reinterpret_cast<uint64_t>(rsi4 * 4)) == 1) 
                goto addr_1051e_8; else 
                goto addr_104ec_9;
        }
    }
    fun_5480(3, rsi5);
    goto addr_1050a_6;
    addr_1051e_8:
    ecx11 = ecx10 & 52;
    addr_10521_11:
    ebx6 = ecx11;
    goto addr_1050a_6;
    addr_104ec_9:
    if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax3) + reinterpret_cast<uint64_t>(rsi4 * 4))) {
        addr_1050a_6:
        return ebx6;
    } else {
        ecx11 = ecx10 & 49;
        goto addr_10521_11;
    }
}

void** num_connects = reinterpret_cast<void**>(0);

void** max_connects = reinterpret_cast<void**>(0);

void** first_free_connect = reinterpret_cast<void**>(0);

void** connects = reinterpret_cast<void**>(0);

int32_t httpd_conn_count = 0;

void** hs = reinterpret_cast<void**>(0);

int32_t httpd_get_conn(void** rdi, void** esi, void** rdx, void** rcx, void** r8, void** r9, void** a7);

void httpd_set_ndelay(void** rdi, int64_t rsi, void** rdx);

void* stats_connections = reinterpret_cast<void*>(0);

void** stats_simultaneous = reinterpret_cast<void**>(0);

void tmr_run(void** rdi, ...);

int32_t handle_newconnect(void** rdi, void** esi, void** rdx, void** rcx, void** r8, void** r9) {
    void** v7;
    void** rax8;
    void** r14_9;
    void** eax10;
    int1_t less11;
    void** r15d12;
    int64_t rax13;
    void** rbp14;
    void* rbx15;
    void*** r12_16;
    void** rax17;
    int32_t tmp32_18;
    void** rdi19;
    int64_t rsi20;
    int32_t eax21;
    void** r13_22;
    void** tmp32_23;
    void** rdi24;
    void** edi25;
    void* tmp64_26;
    void** eax27;
    int1_t less_or_equal28;
    int1_t less29;
    int32_t eax30;
    void** rsi31;

    v7 = rax8;
    r14_9 = rdi;
    eax10 = num_connects;
    less11 = reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(max_connects);
    if (!less11) {
        addr_8511_2:
        fun_5480(4, "too many connections!", 4, "too many connections!");
    } else {
        r15d12 = esi;
        do {
            rax13 = reinterpret_cast<int32_t>(first_free_connect);
            if (rax13 == -1) 
                goto addr_8544_5;
            rbp14 = connects;
            rbx15 = reinterpret_cast<void*>(rax13 + rax13 * 8 << 4);
            if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbp14) + reinterpret_cast<uint64_t>(rbx15))) 
                goto addr_8544_5;
            r12_16 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rbx15) + reinterpret_cast<unsigned char>(rbp14) + 8);
            rax17 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbp14) + reinterpret_cast<uint64_t>(rbx15) + 8);
            if (!rax17) {
                rax17 = fun_5430(0x2d0, 0x2d0);
                *r12_16 = rax17;
                if (!rax17) 
                    goto addr_8561_9;
                *reinterpret_cast<void***>(rax17) = reinterpret_cast<void**>(0);
                tmp32_18 = httpd_conn_count + 1;
                httpd_conn_count = tmp32_18;
            }
            rdi19 = hs;
            *reinterpret_cast<void***>(&rsi20) = r15d12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = 0;
            eax21 = httpd_get_conn(rdi19, *reinterpret_cast<void***>(&rsi20), rax17, rcx, r8, r9, v7);
            if (!eax21) 
                break;
            if (eax21 == 2) 
                goto addr_853d_13;
            r13_22 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx15) + reinterpret_cast<unsigned char>(rbp14));
            *reinterpret_cast<void***>(r13_22) = reinterpret_cast<void**>(1);
            first_free_connect = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbp14) + reinterpret_cast<uint64_t>(rbx15) + 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp14) + reinterpret_cast<uint64_t>(rbx15) + 4) = -1;
            tmp32_23 = num_connects + 1;
            num_connects = tmp32_23;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbp14) + reinterpret_cast<uint64_t>(rbx15) + 88) = *reinterpret_cast<void***>(r14_9);
            *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbp14) + reinterpret_cast<uint64_t>(rbx15) + 0x88) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbp14) + reinterpret_cast<uint64_t>(rbx15) + 56) = 0;
            __asm__("xorps xmm0, xmm0");
            __asm__("movups [rbp+rbx+0x60], xmm0");
            rdi24 = *reinterpret_cast<void***>(*r12_16 + 0x2c0);
            *reinterpret_cast<int32_t*>(&rdi24 + 4) = 0;
            httpd_set_ndelay(rdi24, rsi20, rax17);
            edi25 = *reinterpret_cast<void***>(*r12_16 + 0x2c0);
            fdwatch_add_fd(edi25, r13_22, 0, rcx, r8, r9, v7);
            tmp64_26 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(stats_connections) + 1);
            stats_connections = tmp64_26;
            eax27 = num_connects;
            less_or_equal28 = reinterpret_cast<signed char>(eax27) <= reinterpret_cast<signed char>(stats_simultaneous);
            if (!less_or_equal28) {
                stats_simultaneous = eax27;
            }
            less29 = reinterpret_cast<signed char>(eax27) < reinterpret_cast<signed char>(max_connects);
        } while (less29);
        goto addr_8511_2;
    }
    tmr_run(r14_9, r14_9);
    eax30 = 0;
    addr_852e_18:
    return eax30;
    addr_8544_5:
    rsi31 = reinterpret_cast<void**>("the connects free list is messed up");
    while (1) {
        fun_5480(2, rsi31, 2, rsi31);
        fun_5620();
        addr_8561_9:
        rsi31 = reinterpret_cast<void**>("out of memory allocating an httpd_conn");
    }
    addr_853d_13:
    eax30 = 1;
    goto addr_852e_18;
}

int32_t str_alloc_count = 0;

uint64_t str_alloc_size = 0;

struct s2 {
    signed char[100] pad100;
    int32_t f64;
    signed char[600] pad704;
    void** f2c0;
};

struct s2* g9;

void** g159;

void my_snprintf(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8, void** a9, void** a10, int40_t a11, void** a12, void** a13, void** a14, int16_t a15);

int32_t send_err_file(void** rdi, void** esi, void** rdx, void** rcx, void** r8, void** r9);

void send_mime(void** rdi, void** esi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8);

void** g1d9;

void* g171;

void fun_53d0(void*** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

void** g119;

int32_t match(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

void httpd_realloc_str(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, ...) {
    int64_t* rsp7;
    int64_t v8;
    int64_t rax9;
    void** rdx10;
    void** r15_11;
    void** rax12;
    int32_t tmp32_13;
    uint64_t rbx14;
    uint64_t rbx15;
    void** rax16;
    void** rsi17;
    void** rdi18;
    void* rsp19;
    void** v20;
    struct s2* rax21;
    void** rcx22;
    void** r14_23;
    void** v24;
    void** v25;
    void** v26;
    int40_t v27;
    void** v28;
    void** v29;
    void** v30;
    int16_t v31;
    int32_t eax32;
    void** r14_33;
    void** v34;
    void** v35;
    void** v36;
    int40_t v37;
    void** v38;
    void** v39;
    void** v40;
    int16_t v41;
    int32_t eax42;
    void** v43;
    void* rsp44;
    void** r12_45;
    void** r8_46;
    void** v47;
    int40_t v48;
    void** v49;
    void** v50;
    void** v51;
    int16_t v52;
    void** rax53;
    void** rdx54;
    void* rdi55;
    void*** tmp64_56;
    void* rsp57;
    void** tmp64_58;
    uint32_t ecx59;
    void** rdx60;
    void** r12_61;
    void** rcx62;
    void** v63;
    void** v64;
    void** v65;
    int40_t v66;
    void** v67;
    void** v68;
    void** v69;
    void** rax70;
    void** rdx71;
    void* rdi72;
    void*** tmp64_73;
    void** tmp64_74;
    void** rsi75;
    int32_t eax76;
    void* rsp77;
    void** rdx78;
    void* rax79;
    void** rcx80;
    void** rdx81;
    void** rcx82;
    void** rdx83;
    void** rcx84;
    void** rdx85;
    void** rcx86;
    void** rdx87;
    void** rcx88;
    void** rdx89;
    void** rcx90;
    void** rdx91;
    void** rcx92;
    void** rdx93;
    void* rax94;
    void** rcx95;
    void** tmp64_96;
    void** r12_97;
    void** v98;
    void** v99;
    void** v100;
    int40_t v101;
    void** v102;
    void** v103;
    void** v104;
    void** rax105;
    void** rdx106;
    void* rdi107;
    void*** tmp64_108;
    void** tmp64_109;
    void* rdi110;
    void** rbx111;
    void* rax112;
    int32_t esi113;

    rsp7 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8);
    v8 = rax9;
    if (!*reinterpret_cast<void***>(rsi)) {
        rdx10 = rdx + 100;
        *reinterpret_cast<int32_t*>(&r15_11) = 0xc8;
        *reinterpret_cast<int32_t*>(&r15_11 + 4) = 0;
        if (reinterpret_cast<unsigned char>(rdx10) >= reinterpret_cast<unsigned char>(0xc9)) {
            r15_11 = rdx10;
        }
        *reinterpret_cast<void***>(rsi) = r15_11;
        rax12 = fun_5430(r15_11 + 1);
        rsp7 = rsp7 - 1 + 1;
        *reinterpret_cast<void***>(rdi) = rax12;
        tmp32_13 = str_alloc_count + 1;
        str_alloc_count = tmp32_13;
        rbx14 = str_alloc_size;
    } else {
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi)) >= reinterpret_cast<unsigned char>(rdx)) 
            goto addr_95d2_6;
        rbx15 = str_alloc_size;
        rbx14 = rbx15 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi));
        rax16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi)));
        rsi17 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rdx + reinterpret_cast<unsigned char>(rdx) * 4) >> 2);
        if (reinterpret_cast<unsigned char>(rax16) > reinterpret_cast<unsigned char>(rsi17)) {
            rsi17 = rax16;
        }
        *reinterpret_cast<void***>(rsi) = rsi17;
        rdi18 = *reinterpret_cast<void***>(rdi);
        rax12 = fun_54d0(rdi18, rsi17 + 1, rdx);
        rsp7 = rsp7 - 1 + 1;
        *reinterpret_cast<void***>(rdi) = rax12;
        r15_11 = *reinterpret_cast<void***>(rsi);
    }
    str_alloc_size = rbx14 + reinterpret_cast<unsigned char>(r15_11);
    if (!rax12) {
        fun_5480(3, "out of memory reallocating a string to %ld bytes");
        fun_5620();
        rsp19 = reinterpret_cast<void*>(rsp7 - 1 + 1 - 1 + 1 - 1 - 1 - 1 - 1 - 1 - 1 - 0x7f);
        v20 = r9;
        rax21 = g9;
        if (!rax21->f64) 
            goto addr_9676_13;
        rcx22 = g159;
        if (!*reinterpret_cast<void***>(rcx22)) 
            goto addr_9676_13;
        r14_23 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp19) + 16);
        *reinterpret_cast<int32_t*>(&r9) = reinterpret_cast<int32_t>("out of memory reallocating a string to %ld bytes");
        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        my_snprintf(r14_23, 0x3e8, "%s/%s/err%d.html", rcx22, "errors", "out of memory reallocating a string to %ld bytes", v24, v20, v25, v26, v27, v28, v29, v30, v31);
        eax32 = send_err_file(1, "out of memory reallocating a string to %ld bytes", r15_11, rcx, r14_23, "out of memory reallocating a string to %ld bytes");
        rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8 - 8 + 8);
        if (eax32) 
            goto addr_96b2_16;
        addr_9676_13:
        r14_33 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp19) + 16);
        my_snprintf(r14_33, 0x3e8, "%s/err%d.html", "errors", "out of memory reallocating a string to %ld bytes", r9, v34, v20, v35, v36, v37, v38, v39, v40, v41);
        eax42 = send_err_file(1, "out of memory reallocating a string to %ld bytes", r15_11, rcx, r14_33, r9);
        rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8 - 8 + 8);
        if (!eax42) 
            goto addr_96c4_17;
    } else {
        addr_95d2_6:
        return;
    }
    addr_96b2_16:
    goto v8;
    addr_96c4_17:
    v43 = r8;
    send_mime(1, "out of memory reallocating a string to %ld bytes", r15_11, 0x13553, rcx, "text/html; charset=%s", 0xff, 0);
    rsp44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) + 0x3f8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - reinterpret_cast<int64_t>("addrinfo") - 8 - 8 - 8 + 8 + 8);
    r12_45 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp44) + 0x408);
    r8_46 = r15_11;
    my_snprintf(r12_45, 0x7d0, "<!DOCTYPE html PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">\n\n<html>\n\n  <head>\n    <meta http-equiv=\"Content-type\" content=\"text/html;charset=UTF-8\">\n    <title>%d %s</title>\n  </head>\n\n  <body bgcolor=\"#cc9999\" text=\"#000000\" link=\"#2020ff\" vlink=\"#4040cc\">\n\n    <h2>%d %s</h2>\n", "out of memory reallocating a string to %ld bytes", r8_46, "out of memory reallocating a string to %ld bytes", r15_11, 0, v47, v43, v48, v49, v50, v51, v52);
    rax53 = fun_51d0(r12_45, 0x7d0, r12_45, 0x7d0);
    rdx54 = g1d9;
    httpd_realloc_str(0x171, 0x1d1, reinterpret_cast<unsigned char>(rdx54) + reinterpret_cast<unsigned char>(rax53), "out of memory reallocating a string to %ld bytes", r8_46, "out of memory reallocating a string to %ld bytes");
    rdi55 = g171;
    tmp64_56 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rdi55) + reinterpret_cast<unsigned char>(g1d9));
    fun_53d0(tmp64_56, r12_45, rax53, "out of memory reallocating a string to %ld bytes", r8_46, "out of memory reallocating a string to %ld bytes");
    rsp57 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp44) - 8 - 8 + 8 + 16 - 8 + 8 - 8 + 8 - 8 + 8);
    tmp64_58 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g1d9) + reinterpret_cast<unsigned char>(rax53));
    g1d9 = tmp64_58;
    *reinterpret_cast<void***>(&ecx59) = *reinterpret_cast<void***>(v20);
    if (*reinterpret_cast<void***>(&ecx59)) 
        goto addr_99cf_19;
    rdx60 = v43;
    addr_9a3c_21:
    r12_61 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp57) + 0x400);
    rcx62 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp57) + 16);
    my_snprintf(r12_61, 0x7d0, rdx60, rcx62, r8_46, "out of memory reallocating a string to %ld bytes", v63, v43, v64, v65, v66, v67, v68, v69, 0x6726);
    rax70 = fun_51d0(r12_61, 0x7d0, r12_61, 0x7d0);
    rdx71 = g1d9;
    httpd_realloc_str(0x171, 0x1d1, reinterpret_cast<unsigned char>(rdx71) + reinterpret_cast<unsigned char>(rax70), rcx62, r8_46, "out of memory reallocating a string to %ld bytes");
    rdi72 = g171;
    tmp64_73 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rdi72) + reinterpret_cast<unsigned char>(g1d9));
    fun_53d0(tmp64_73, r12_61, rax70, rcx62, r8_46, "out of memory reallocating a string to %ld bytes");
    tmp64_74 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g1d9) + reinterpret_cast<unsigned char>(rax70));
    g1d9 = tmp64_74;
    rsi75 = g119;
    eax76 = match("**MSIE**", rsi75, rax70, rcx62, r8_46, "out of memory reallocating a string to %ld bytes");
    rsp77 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp57) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
    if (eax76) {
        rdx78 = g1d9;
        httpd_realloc_str(0x171, 0x1d1, rdx78 + 5, rcx62, r8_46, "out of memory reallocating a string to %ld bytes");
        rax79 = g171;
        rcx80 = g1d9;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax79) + reinterpret_cast<unsigned char>(rcx80) + 4) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax79) + reinterpret_cast<unsigned char>(rcx80)) = 0x2d2d213c;
        rdx81 = g1d9;
        g1d9 = rdx81 + 5;
        httpd_realloc_str(0x171, 0x1d1, rdx81 + 83, rcx80, r8_46, "out of memory reallocating a string to %ld bytes");
        rcx82 = g1d9;
        __asm__("movups xmm0, [rip+0x9e7a]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9e60]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9e44]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9e28]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9e0c]");
        __asm__("movups [rax+rcx], xmm0");
        rdx83 = g1d9;
        g1d9 = rdx83 + 78;
        httpd_realloc_str(0x171, 0x1d1, rdx83 + 0x9c, rcx82, r8_46, "out of memory reallocating a string to %ld bytes");
        rcx84 = g1d9;
        __asm__("movups xmm0, [rip+0x9e1d]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9e03]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9de7]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9dcb]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9daf]");
        __asm__("movups [rax+rcx], xmm0");
        rdx85 = g1d9;
        g1d9 = rdx85 + 78;
        httpd_realloc_str(0x171, 0x1d1, rdx85 + 0x9c, rcx84, r8_46, "out of memory reallocating a string to %ld bytes");
        rcx86 = g1d9;
        __asm__("movups xmm0, [rip+0x9dc0]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9da6]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9d8a]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9d6e]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9d52]");
        __asm__("movups [rax+rcx], xmm0");
        rdx87 = g1d9;
        g1d9 = rdx87 + 78;
        httpd_realloc_str(0x171, 0x1d1, rdx87 + 0x9c, rcx86, r8_46, "out of memory reallocating a string to %ld bytes");
        rcx88 = g1d9;
        __asm__("movups xmm0, [rip+0x9d63]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9d49]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9d2d]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9d11]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9cf5]");
        __asm__("movups [rax+rcx], xmm0");
        rdx89 = g1d9;
        g1d9 = rdx89 + 78;
        httpd_realloc_str(0x171, 0x1d1, rdx89 + 0x9c, rcx88, r8_46, "out of memory reallocating a string to %ld bytes");
        rcx90 = g1d9;
        __asm__("movups xmm0, [rip+0x9d06]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9cec]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9cd0]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9cb4]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9c98]");
        __asm__("movups [rax+rcx], xmm0");
        rdx91 = g1d9;
        g1d9 = rdx91 + 78;
        httpd_realloc_str(0x171, 0x1d1, rdx91 + 0x9c, rcx90, r8_46, "out of memory reallocating a string to %ld bytes");
        rcx92 = g1d9;
        __asm__("movups xmm0, [rip+0x9ca9]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9c8f]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9c73]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9c57]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9c3b]");
        __asm__("movups [rax+rcx], xmm0");
        rdx93 = g1d9;
        g1d9 = rdx93 + 78;
        httpd_realloc_str(0x171, 0x1d1, rdx93 + 82, rcx92, r8_46, "out of memory reallocating a string to %ld bytes");
        rsp77 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp77) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        rax94 = g171;
        rcx95 = g1d9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax94) + reinterpret_cast<unsigned char>(rcx95)) = 0xa3e2d2d;
        tmp64_96 = g1d9 + 4;
        g1d9 = tmp64_96;
    }
    r12_97 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp77) + 0xbd0);
    my_snprintf(r12_97, 0x3e8, "    <hr>\n\n    <address><a href=\"%s\">%s</a></address>\n\n  </body>\n\n</html>\n", "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", "out of memory reallocating a string to %ld bytes", v98, v43, v99, v100, v101, v102, v103, v104, 0x6726);
    rax105 = fun_51d0(r12_97, 0x3e8, r12_97, 0x3e8);
    rdx106 = g1d9;
    httpd_realloc_str(0x171, 0x1d1, reinterpret_cast<unsigned char>(rdx106) + reinterpret_cast<unsigned char>(rax105), "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", "out of memory reallocating a string to %ld bytes");
    rdi107 = g171;
    tmp64_108 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rdi107) + reinterpret_cast<unsigned char>(g1d9));
    fun_53d0(tmp64_108, r12_97, rax105, "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", "out of memory reallocating a string to %ld bytes");
    tmp64_109 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(g1d9) + reinterpret_cast<unsigned char>(rax105));
    g1d9 = tmp64_109;
    goto v8;
    addr_99cf_19:
    rdi110 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp57) + 16);
    rbx111 = v20 + 1;
    rax112 = rdi110;
    rdx60 = v43;
    do {
        esi113 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(&ecx59));
        if (esi113 == 62) {
            rax112 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax112) + 3);
        } else {
            if (esi113 == 60) {
                rax112 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax112) + 3);
            }
        }
        rax112 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax112) + 1);
        ecx59 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx111));
        if (!*reinterpret_cast<void***>(&ecx59)) 
            goto addr_9a3c_21;
        ++rbx111;
    } while (reinterpret_cast<int64_t>(rax112) - reinterpret_cast<int64_t>(rdi110) < 0x3e3);
    goto addr_9a3c_21;
}

int32_t httpd_got_request(void** rdi) {
    uint32_t ebp2;
    void** rdx3;
    void* rcx4;
    uint64_t rax5;
    int64_t rbx6;

    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0xa8)) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0xa0))) {
        addr_a3ec_2:
    } else {
        ebp2 = *reinterpret_cast<uint32_t*>(rdi + 0xb0);
        rdx3 = *reinterpret_cast<void***>(rdi + 0xa8) + 1;
        rcx4 = reinterpret_cast<void*>(-reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0xa0)));
        do {
            if (ebp2 <= 11) 
                goto addr_a2aa_5;
            *reinterpret_cast<void***>(rdi + 0xa8) = rdx3;
            rax5 = reinterpret_cast<int64_t>(rcx4) + reinterpret_cast<unsigned char>(rdx3) + 1;
            ++rdx3;
        } while (rax5 != 1);
        goto addr_a3ec_2;
    }
    return 0;
    addr_a2aa_5:
    *reinterpret_cast<uint32_t*>(&rbx6) = ebp2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx6) + 4) = 0;
    goto *reinterpret_cast<int32_t*>(0x12b00 + rbx6 * 4) + 0x12b00;
}

struct s3 {
    signed char f0;
    void** f1;
};

struct s3* fun_54b0(void** rdi, int64_t rsi);

void* fun_52f0(void** rdi, void** rsi, void** rdx);

int32_t fun_5440(void** rdi, void** rsi, void** rdx);

void fun_50d0(void** rdi, void** rsi, void** rdx, ...);

void*** fun_56f0(void** rdi, ...);

int32_t fun_55d0(int64_t rdi, void* rsi, void* rdx);

unsigned char** fun_56e0(void** rdi, void** rsi, void** rdx, void** rcx);

/* vhost_map.tempfilename */
void** vhost_map_tempfilename = reinterpret_cast<void**>(0);

void fun_55e0(void** rdi, void** rsi, void** rdx, void** rcx);

void** httpd_err400title = reinterpret_cast<void**>(0x95);

void** httpd_err400form = reinterpret_cast<void**>(0xa1);

void** httpd_ntoa(void** rdi, void** rsi, void** rdx, ...);

void** tdate_parse(void** rdi, void** rsi, void** rdx);

void** fun_5380(void** rdi);

void** expand_symlinks(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, int32_t a7);

void httpd_send_err(void** rdi, void** esi, void** rdx, void** rcx, void** r8, void** r9, ...);

int32_t httpd_parse_request(void** rdi) {
    void* rsp2;
    void** r13_3;
    void** r15_4;
    void** rcx5;
    void* rax6;
    void** rdx7;
    uint32_t ebx8;
    uint64_t rsi9;
    struct s3* rax10;
    void* rax11;
    void** r12_12;
    struct s3* rax13;
    void* rsp14;
    void** rbp15;
    void* rax16;
    struct s3* rax17;
    int32_t eax18;
    void** rdx19;
    int32_t eax20;
    void* rsp21;
    void** r12_22;
    void** rax23;
    void** rax24;
    void** rax25;
    void** r8_26;
    void** r9_27;
    void** rdi28;
    void** rsi29;
    int32_t eax30;
    int32_t eax31;
    int32_t eax32;
    int32_t eax33;
    int32_t eax34;
    int32_t eax35;
    int32_t eax36;
    void** rdx37;
    void** r8_38;
    void** rdi39;
    void** esi40;
    void** r9_41;
    void** rax42;
    void** rdi43;
    void** rsi44;
    void** r8_45;
    void** r9_46;
    void* rsp47;
    void** rbp48;
    void** rbx49;
    uint32_t edx50;
    void*** rax51;
    int64_t rax52;
    int32_t ecx53;
    int32_t ecx54;
    uint32_t edx55;
    int32_t edx56;
    int32_t edx57;
    void** rbp58;
    void** rdi59;
    void** rax60;
    void** rdx61;
    void** r8_62;
    void** r9_63;
    void** rdi64;
    void** rsi65;
    void** rdi66;
    void** rax67;
    void* rsp68;
    void** rbx69;
    void** rax70;
    void** r8_71;
    void** r9_72;
    void** rdi73;
    void** rdi74;
    void** rax75;
    void** v76;
    void** rbp77;
    void** rax78;
    void* rsp79;
    void** r14_80;
    void** rbx81;
    void** rax82;
    void** rdx83;
    void** rax84;
    int32_t eax85;
    void* rsp86;
    void** rbx87;
    void** rax88;
    int32_t eax89;
    void** v90;
    void** rax91;
    void* rsp92;
    void** rbx93;
    void** r15_94;
    void** rax95;
    void** rdx96;
    void** rax97;
    void** rbx98;
    int32_t eax99;
    void* rsp100;
    void** rax101;
    void* rsp102;
    void** rdx103;
    void** rdi104;
    void** rsi105;
    void** rsi106;
    void** rax107;
    void* rsp108;
    void** r14_109;
    void** rax110;
    void** r12_111;
    void** r14_112;
    void** rax113;
    void** rax114;
    void* r12_115;
    void* r15_116;
    void* rbx117;
    void** rdi118;
    int32_t eax119;
    void** rbx120;
    void** rax121;
    void** rax122;
    void** r15_123;
    void** r14_124;
    void** rdi125;
    void** rax126;
    void** rdx127;
    void** r8_128;
    void** r9_129;
    void** rsi130;
    void** rdi131;
    void* rsp132;
    void** rax133;
    void** rbp134;
    int64_t rdi135;
    int32_t eax136;
    void* rsp137;
    uint32_t eax138;
    uint16_t v139;
    int32_t edx140;
    int32_t eax141;
    int32_t v142;
    int32_t v143;
    int32_t v144;
    uint32_t eax145;
    uint32_t ecx146;
    void** rax147;
    uint32_t ebx148;
    void*** rax149;
    void*** r12_150;
    void** rbp151;
    int64_t rbx152;
    unsigned char** rax153;
    uint32_t eax154;
    void** rdi155;
    void** rax156;
    void** rdi157;
    void** rsi158;
    void** rdi159;
    void** rsi160;
    void** rdi161;
    void** rax162;
    void** rbx163;
    void** rdi164;
    void** rsi165;
    void** rdi166;
    void** rax167;
    void** rdx168;
    void** rdi169;
    void** rsi170;
    void** rbx171;
    void** rax172;
    void** rdi173;
    void** rsi174;
    void** v175;
    void** v176;
    void** v177;
    void** r14_178;
    void** v179;
    void** rdx180;
    uint32_t ebx181;
    uint64_t rdi182;
    void** r15_183;
    void** r15_184;
    int32_t eax185;
    void* rsp186;
    void* rax187;
    void** rax188;
    int32_t eax189;
    void* rsp190;
    void* rax191;
    int32_t eax192;
    void* rsp193;
    void* rax194;
    void** rbx195;
    int32_t eax196;
    void* rsp197;
    void* rax198;
    void** rbp199;
    void** rax200;
    void** rax201;
    int32_t eax202;
    void* rsp203;
    void* rax204;
    void* rsp205;
    void** r15_206;
    void** rdi207;
    void** rax208;
    void** rdx209;
    void** r8_210;
    void** r9_211;
    void* rsp212;
    void** rax213;
    void* rsp214;
    void** rax215;
    void** r8_216;
    void** r9_217;
    void** rbx218;
    void** rax219;
    void* rsp220;
    int32_t eax221;
    void* rsp222;
    void* rax223;
    void* rsp224;
    void** r15_225;
    void** rdi226;
    void** rax227;
    void** rdx228;
    void** r8_229;
    void** r9_230;
    void* rsp231;
    void** rax232;
    void* rsp233;
    void** rax234;
    void** r8_235;
    void** r9_236;
    void** rbx237;
    void** rax238;
    int32_t eax239;
    void* rsp240;
    void* rax241;
    int32_t eax242;
    void* rsp243;
    void** rax244;
    int32_t eax245;
    void* rsp246;
    void* rax247;
    int32_t eax248;
    void* rsp249;
    void** rax250;
    void** rax251;
    void** rbp252;
    void** rax253;
    void** rax254;
    void*** rax255;
    void** rax256;
    int32_t eax257;
    void* rsp258;
    int32_t eax259;
    int32_t eax260;
    void* rsp261;
    void* rax262;
    int32_t eax263;
    void* rsp264;
    void** rax265;
    int32_t eax266;
    void* rsp267;
    void* rax268;
    int32_t eax269;
    void* rax270;
    int32_t eax271;
    void** rdi272;
    void** rdi273;
    void** rdi274;
    void** rdx275;
    void** rcx276;
    void** rsi277;
    void** rax278;
    void** rax279;
    void** rdi280;
    void** v281;
    void** rax282;
    void** rdi283;
    void** rsi284;
    void** rdi285;
    void** rsi286;
    void** rbx287;
    void** r14_288;
    void** rax289;
    void** rax290;
    void* rbp291;
    void** rdi292;
    int32_t eax293;
    void* rbp294;
    void** rbp295;
    int32_t ebx296;
    void** r15_297;
    void** rax298;
    int32_t eax299;
    void** r14_300;
    void** rax301;
    void** rdx302;
    void** rdi303;
    void** rax304;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0xc8);
    r13_3 = rdi;
    *reinterpret_cast<void***>(rdi + 0xa8) = reinterpret_cast<void**>(0);
    if (!*reinterpret_cast<void***>(rdi + 0xa0)) {
        *reinterpret_cast<int32_t*>(&r15_4) = 0;
        *reinterpret_cast<int32_t*>(&r15_4 + 4) = 0;
    } else {
        rcx5 = *reinterpret_cast<void***>(r13_3 + 0x90);
        rax6 = reinterpret_cast<void*>(-reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0xa0)));
        *reinterpret_cast<int32_t*>(&rdx7) = 1;
        *reinterpret_cast<int32_t*>(&rdx7 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r15_4) = 0;
        *reinterpret_cast<int32_t*>(&r15_4 + 4) = 0;
        do {
            ebx8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx5) + reinterpret_cast<unsigned char>(rdx7) + 0xffffffffffffffff);
            if (*reinterpret_cast<signed char*>(&ebx8) == 13) 
                goto addr_a48a_5;
            if (*reinterpret_cast<signed char*>(&ebx8) == 10) 
                goto addr_a48a_5;
            *reinterpret_cast<void***>(r13_3 + 0xa8) = rdx7;
            rsi9 = reinterpret_cast<int64_t>(rax6) + reinterpret_cast<unsigned char>(rdx7) + 1;
            ++rdx7;
        } while (rsi9 != 1);
        goto addr_a488_8;
    }
    addr_a4d4_9:
    rax10 = fun_54b0(r15_4, " \t\n\r");
    if (!rax10) 
        goto addr_b33c_10;
    rax10->f0 = 0;
    rax11 = fun_52f0(&rax10->f1, " \t\n\r", rdx7);
    r12_12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax10) + reinterpret_cast<uint64_t>(rax11) + 1);
    rax13 = fun_54b0(r12_12, " \t\n\r");
    rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 - 8 + 8 - 8 + 8);
    if (!rax13) {
        *reinterpret_cast<int32_t*>(r13_3 + 0x208) = 0;
        rbp15 = reinterpret_cast<void**>("HTTP/0.9");
    } else {
        rax13->f0 = 0;
        rax16 = fun_52f0(&rax13->f1, " \t\n\r", rdx7);
        rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
        rbp15 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(rax16) + 1);
        if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax13) + reinterpret_cast<uint64_t>(rax16) + 1)) {
            rax17 = fun_54b0(rbp15, " \t\n\r");
            if (rax17) {
                rax17->f0 = 0;
            }
            eax18 = fun_5050(rbp15, "HTTP/1.0", rdx7);
            rsp14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8 - 8 + 8);
            if (eax18) {
                *reinterpret_cast<int32_t*>(r13_3 + 0x20c) = 1;
            }
        }
    }
    *reinterpret_cast<void***>(r13_3 + 0xe0) = rbp15;
    *reinterpret_cast<int32_t*>(&rdx19) = 7;
    *reinterpret_cast<int32_t*>(&rdx19 + 4) = 0;
    eax20 = fun_5440(r12_12, "http://", 7);
    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp14) - 8 + 8);
    if (eax20) 
        goto addr_a5ae_19;
    if (!*reinterpret_cast<int32_t*>(r13_3 + 0x20c)) 
        goto addr_b33c_10;
    r12_22 = r12_12 + 7;
    rax23 = fun_5220(r12_22, 47, 7);
    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
    if (!rax23) 
        goto addr_b33c_10;
    *reinterpret_cast<void***>(rax23) = reinterpret_cast<void**>(0);
    rax24 = fun_5220(r12_22, 47, 7);
    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
    if (rax24) 
        goto addr_b33c_10;
    if (*reinterpret_cast<void***>(r12_22) == 46) 
        goto addr_b33c_10;
    rax25 = fun_51d0(r12_22, 47, r12_22, 47);
    rdx19 = rax25;
    httpd_realloc_str(r13_3 + 0x148, r13_3 + 0x1b8, rdx19, rcx5, r8_26, r9_27);
    rdi28 = *reinterpret_cast<void***>(r13_3 + 0x148);
    fun_50d0(rdi28, r12_22, rdx19);
    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8 - 8 + 8 - 8 + 8);
    *reinterpret_cast<void***>(rax23) = reinterpret_cast<void**>(47);
    r12_12 = rax23;
    addr_a5b9_25:
    rsi29 = reinterpret_cast<void**>("GET");
    eax30 = fun_5050(r15_4, "GET", rdx19);
    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
    if (!eax30) {
        eax31 = 1;
    } else {
        rsi29 = reinterpret_cast<void**>("HEAD");
        eax32 = fun_5050(r15_4, "HEAD", rdx19);
        rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
        if (!eax32) {
            eax31 = 2;
        } else {
            rsi29 = reinterpret_cast<void**>("POST");
            eax33 = fun_5050(r15_4, "POST", rdx19);
            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
            if (!eax33) {
                eax31 = 3;
            } else {
                rsi29 = reinterpret_cast<void**>("PUT");
                eax34 = fun_5050(r15_4, "PUT", rdx19);
                rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
                if (!eax34) {
                    eax31 = 4;
                } else {
                    rsi29 = reinterpret_cast<void**>("DELETE");
                    eax35 = fun_5050(r15_4, "DELETE", rdx19);
                    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
                    if (!eax35) {
                        eax31 = 5;
                    } else {
                        rsi29 = reinterpret_cast<void**>("TRACE");
                        eax36 = fun_5050(r15_4, "TRACE", rdx19);
                        rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
                        if (!eax36) {
                            eax31 = 6;
                        } else {
                            rdx37 = reinterpret_cast<void**>("Not Implemented");
                            r8_38 = reinterpret_cast<void**>("The requested method '%.80s' is not implemented by this server.\n");
                            rdi39 = r13_3;
                            esi40 = reinterpret_cast<void**>(0x1f5);
                            r9_41 = r15_4;
                            goto addr_b35c_38;
                        }
                    }
                }
            }
        }
    }
    *reinterpret_cast<int32_t*>(r13_3 + 0xb4) = eax31;
    *reinterpret_cast<void***>(r13_3 + 0xd0) = r12_12;
    rax42 = fun_51d0(r12_12, rsi29, r12_12, rsi29);
    rdi43 = r13_3 + 0xd8;
    rsi44 = r13_3 + 0x178;
    httpd_realloc_str(rdi43, rsi44, rax42, rcx5, r8_45, r9_46);
    rsp47 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8 - 8 + 8);
    rbp48 = *reinterpret_cast<void***>(r13_3 + 0xd0);
    rbx49 = *reinterpret_cast<void***>(r13_3 + 0xd8);
    while (1) {
        edx50 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp48));
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&edx50) == 37)) {
            if (!*reinterpret_cast<void***>(&edx50)) 
                break;
        } else {
            rax51 = fun_56f0(rdi43, rdi43);
            rsp47 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp47) - 8 + 8);
            rcx5 = *rax51;
            rsi44 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp48 + 1))));
            *reinterpret_cast<void***>(&edx50) = reinterpret_cast<void**>(37);
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rcx5 + reinterpret_cast<unsigned char>(rsi44) * 2) + 1) & 16 && (rax52 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp48 + 2)), !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rcx5 + rax52 * 2) + 1) & 16))) {
                *reinterpret_cast<uint32_t*>(&rcx5) = static_cast<uint32_t>(reinterpret_cast<uint64_t>(rsi44 + 0xffffffffffffffd0));
                *reinterpret_cast<int32_t*>(&rcx5 + 4) = 0;
                if (reinterpret_cast<unsigned char>(rcx5) >= 10) {
                    ecx53 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rsi44 + 0xffffffffffffff9f));
                    if (*reinterpret_cast<unsigned char*>(&ecx53) > 5) {
                        ecx54 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rsi44 + 0xffffffffffffffbf));
                        *reinterpret_cast<unsigned char*>(&rsi44) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi44) - 55);
                        *reinterpret_cast<uint32_t*>(&rcx5) = *reinterpret_cast<unsigned char*>(&rsi44);
                        *reinterpret_cast<int32_t*>(&rcx5 + 4) = 0;
                        if (*reinterpret_cast<unsigned char*>(&ecx54) >= 6) {
                            *reinterpret_cast<uint32_t*>(&rcx5) = 0;
                            *reinterpret_cast<int32_t*>(&rcx5 + 4) = 0;
                        }
                    } else {
                        *reinterpret_cast<unsigned char*>(&rsi44) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi44) - 87);
                        *reinterpret_cast<uint32_t*>(&rcx5) = *reinterpret_cast<uint32_t*>(&rsi44);
                        *reinterpret_cast<int32_t*>(&rcx5 + 4) = 0;
                    }
                }
                rcx5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx5) << 4);
                edx55 = static_cast<uint32_t>(rax52 - 48);
                if (reinterpret_cast<unsigned char>(*reinterpret_cast<void****>(&edx55)) >= 10) {
                    edx56 = static_cast<int32_t>(rax52 - 97);
                    if (*reinterpret_cast<unsigned char*>(&edx56) > 5) {
                        edx57 = static_cast<int32_t>(rax52 - 65);
                        edx55 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax52) - 55);
                        if (*reinterpret_cast<unsigned char*>(&edx57) >= 6) {
                            edx55 = 0;
                        }
                    } else {
                        *reinterpret_cast<signed char*>(&rax52) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax52) - 87);
                        edx55 = *reinterpret_cast<uint32_t*>(&rax52);
                    }
                }
                *reinterpret_cast<void***>(&edx50) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void****>(&edx55)) + reinterpret_cast<unsigned char>(rcx5));
                rbp48 = rbp48 + 2;
            }
        }
        *reinterpret_cast<void***>(rbx49) = *reinterpret_cast<void***>(&edx50);
        ++rbx49;
        ++rbp48;
    }
    *reinterpret_cast<void***>(rbx49) = reinterpret_cast<void**>(0);
    rbp58 = r13_3 + 0xe8;
    rdi59 = *reinterpret_cast<void***>(r13_3 + 0xd8);
    rax60 = fun_51d0(rdi59, rsi44);
    rdx61 = rax60;
    httpd_realloc_str(rbp58, r13_3 + 0x180, rdx61, rcx5, r8_62, r9_63);
    rdi64 = *reinterpret_cast<void***>(r13_3 + 0xe8);
    rsi65 = *reinterpret_cast<void***>(r13_3 + 0xd8) + 1;
    fun_50d0(rdi64, rsi65, rdx61);
    if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_3 + 0xe8))) {
        *reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_3 + 0xe8)) = reinterpret_cast<void**>(46);
    }
    rdi66 = *reinterpret_cast<void***>(r13_3 + 0xd0);
    rax67 = fun_5220(rdi66, 63, rdx61);
    rsp68 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp47) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
    if (rax67 && (rbx69 = rax67 + 1, rax70 = fun_51d0(rbx69, 63, rbx69, 63), rdx61 = rax70, httpd_realloc_str(r13_3 + 0x108, r13_3 + 0x1a0, rdx61, rcx5, r8_71, r9_72), rdi73 = *reinterpret_cast<void***>(r13_3 + 0x108), fun_50d0(rdi73, rbx69, rdx61), rdi74 = *reinterpret_cast<void***>(r13_3 + 0xe8), rax75 = fun_5220(rdi74, 63, rdx61), rsp68 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp68) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8), !!rax75)) {
        *reinterpret_cast<void***>(rax75) = reinterpret_cast<void**>(0);
    }
    v76 = rbp58;
    rbp77 = *reinterpret_cast<void***>(rbp58);
    rax78 = fun_56c0(rbp77, "//", rdx61);
    rsp79 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp68) - 8 + 8);
    if (rax78) {
        r14_80 = rax78;
        do {
            rbx81 = r14_80 + 1;
            do {
                ++rbx81;
            } while (*reinterpret_cast<void***>(rbx81 + 1) == 47);
            rax82 = fun_51d0(rbx81, "//", rbx81, "//");
            rdx83 = rax82 + 1;
            fun_5540(r14_80 + 1, rbx81, rdx83);
            rax84 = fun_56c0(rbp77, "//", rdx83);
            rsp79 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp79) - 8 + 8 - 8 + 8 - 8 + 8);
            r14_80 = rax84;
        } while (rax84);
    }
    eax85 = fun_50b0(rbp77, "./", 2);
    rsp86 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp79) - 8 + 8);
    if (!eax85) {
        rbx87 = rbp77 + 2;
        do {
            rax88 = fun_51d0(rbx87, "./", rbx87, "./");
            fun_5540(rbp77, rbx87, rax88 + 1);
            eax89 = fun_50b0(rbp77, "./", 2);
            rsp86 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp86) - 8 + 8 - 8 + 8 - 8 + 8);
        } while (!eax89);
    }
    v90 = r13_3;
    rax91 = fun_56c0(rbp77, "/./", 2);
    rsp92 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp86) - 8 + 8);
    if (rax91) {
        rbx93 = rax91;
        do {
            r15_94 = rbx93 + 2;
            rax95 = fun_51d0(r15_94, "/./", r15_94, "/./");
            rdx96 = rax95 + 1;
            fun_5540(rbx93, r15_94, rdx96);
            rax97 = fun_56c0(rbp77, "/./", rdx96);
            rsp92 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp92) - 8 + 8 - 8 + 8 - 8 + 8);
            rbx93 = rax97;
        } while (rax97);
    }
    rbx98 = rbp77 + 3;
    while (1) {
        eax99 = fun_50b0(rbp77, "../", 3);
        rsp100 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp92) - 8 + 8);
        if (!eax99) {
            rax101 = fun_51d0(rbx98, "../", rbx98, "../");
            rsp102 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp100) - 8 + 8);
            rdx103 = rax101 + 1;
            rdi104 = rbp77;
            rsi105 = rbx98;
        } else {
            rsi106 = reinterpret_cast<void**>("/../");
            rax107 = fun_56c0(rbp77, "/../", 3);
            rsp108 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp100) - 8 + 8);
            if (!rax107) 
                break;
            r14_109 = rax107;
            rax110 = rax107 + 0xffffffffffffffff;
            do {
                r12_111 = rax110;
                if (reinterpret_cast<unsigned char>(rax110) < reinterpret_cast<unsigned char>(rbp77)) 
                    break;
                rax110 = r12_111 + 0xffffffffffffffff;
            } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r12_111) == 47));
            r14_112 = r14_109 + 4;
            rax113 = fun_51d0(r14_112, "/../", r14_112, "/../");
            rsp102 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp108) - 8 + 8);
            rdx103 = rax113 + 1;
            rdi104 = r12_111 + 1;
            rsi105 = r14_112;
        }
        fun_5540(rdi104, rsi105, rdx103);
        rsp92 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp102) - 8 + 8);
    }
    rax114 = fun_51d0(rbp77, "/../", rbp77, "/../");
    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp108) - 8 + 8);
    r13_3 = v90;
    if (*reinterpret_cast<int32_t*>(&rax114) >= 4) {
        r12_115 = reinterpret_cast<void*>(rbp77 + 0xfffffffffffffffd);
        r15_116 = reinterpret_cast<void*>(rbp77 + 0xfffffffffffffffc);
        do {
            rbx117 = reinterpret_cast<void*>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax114)));
            rdi118 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r12_115) + reinterpret_cast<uint64_t>(rbx117));
            rsi106 = reinterpret_cast<void**>("/..");
            eax119 = fun_5370(rdi118, "/..", rdi118, "/..");
            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
            if (eax119) 
                break;
            rbx120 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx117) + reinterpret_cast<uint64_t>(r15_116));
            do {
                if (reinterpret_cast<unsigned char>(rbx120) < reinterpret_cast<unsigned char>(rbp77)) 
                    goto addr_aae2_84;
                rax121 = rbx120 + 0xffffffffffffffff;
                rbx120 = rax121;
            } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx120) == 47));
            *reinterpret_cast<void***>(rax121 + 1) = reinterpret_cast<void**>(0);
            rax114 = fun_51d0(rbp77, "/..", rbp77, "/..");
            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
        } while (*reinterpret_cast<int32_t*>(&rax114) > 3);
    }
    addr_aae2_84:
    rcx5 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v76));
    if (rcx5 == 47) 
        goto addr_b33c_10;
    if (!reinterpret_cast<int1_t>(rcx5 == 46)) 
        goto addr_ab13_88;
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v76) + 1) == 46)) 
        goto addr_ab13_88;
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(v76) + 2) == 47) 
        goto addr_b33c_10;
    if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(v76) + 2)) 
        goto addr_b33c_10;
    addr_ab13_88:
    if (!*reinterpret_cast<int32_t*>(r13_3 + 0x208) || (rcx5 = *reinterpret_cast<void***>(v90 + 0xa0), rax122 = *reinterpret_cast<void***>(v90 + 0xa8), reinterpret_cast<unsigned char>(rax122) >= reinterpret_cast<unsigned char>(rcx5))) {
        addr_b242_92:
        r13_3 = v90;
        if (!*reinterpret_cast<int32_t*>(r13_3 + 0x20c)) {
            addr_b282_93:
            r15_123 = r13_3 + 0xf0;
            r14_124 = r13_3 + 0x188;
            rdi125 = *reinterpret_cast<void***>(r13_3 + 0xe8);
            rax126 = fun_51d0(rdi125, rsi106, rdi125, rsi106);
            rdx127 = rax126;
            httpd_realloc_str(r15_123, r14_124, rdx127, rcx5, r8_128, r9_129);
            rsi130 = *reinterpret_cast<void***>(r13_3 + 0xe8);
            rdi131 = *reinterpret_cast<void***>(r13_3 + 0xf0);
            fun_50d0(rdi131, rsi130, rdx127);
            rsp132 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8 - 8 + 8 - 8 + 8);
            rax133 = *reinterpret_cast<void***>(r13_3 + 8);
            if (*reinterpret_cast<void***>(rax133 + 100)) {
                rbp134 = *reinterpret_cast<void***>(r13_3 + 0x148);
                if (!*reinterpret_cast<void***>(rbp134) && (rbp134 = *reinterpret_cast<void***>(r13_3 + 0x150), *reinterpret_cast<void***>(rbp134) == 0)) {
                    *reinterpret_cast<void***>(&rdi135) = *reinterpret_cast<void***>(r13_3 + 0x2c0);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi135) + 4) = 0;
                    eax136 = fun_55d0(rdi135, reinterpret_cast<int64_t>(rsp132) + 72, reinterpret_cast<int64_t>(rsp132) + 28);
                    rsp137 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp132) - 8 + 8);
                    if (eax136 < 0) {
                        fun_5480(3, "getsockname - %m", 3, "getsockname - %m");
                        goto addr_b657_97;
                    } else {
                        eax138 = v139;
                        edx140 = 28;
                        if (*reinterpret_cast<int16_t*>(&eax138) != 10) {
                            edx140 = 0;
                        }
                        *reinterpret_cast<int32_t*>(&rsi130) = 16;
                        *reinterpret_cast<int32_t*>(&rsi130 + 4) = 0;
                        if (*reinterpret_cast<int16_t*>(&eax138) != 2) {
                            *reinterpret_cast<int32_t*>(&rsi130) = edx140;
                            *reinterpret_cast<int32_t*>(&rsi130 + 4) = 0;
                        }
                        rbp134 = reinterpret_cast<void**>(0x1b110);
                        rdi131 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp137) + 72);
                        rdx127 = reinterpret_cast<void**>(0x1b110);
                        *reinterpret_cast<uint32_t*>(&rcx5) = 0xc8;
                        *reinterpret_cast<int32_t*>(&rcx5 + 4) = 0;
                        eax141 = fun_52d0(rdi131, rsi130, 0x1b110, 0xc8, rdi131, rsi130, 0x1b110, 0xc8);
                        rsp132 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp137) - 8 + 8);
                        if (!eax141) {
                            if (!v142 && (!v143 && (v144 == 0xffff0000 && (eax145 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx146 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), *reinterpret_cast<uint32_t*>(&rcx5) = ecx146 | eax145, *reinterpret_cast<int32_t*>(&rcx5 + 4) = 0, !*reinterpret_cast<uint32_t*>(&rcx5))))) {
                                rax147 = fun_51d0(0x1b117, rsi130, 0x1b117, rsi130);
                                rbp134 = reinterpret_cast<void**>(0x1b110);
                                rdx127 = rax147 + 1;
                                rdi131 = reinterpret_cast<void**>(0x1b110);
                                rsi130 = reinterpret_cast<void**>(0x1b117);
                                fun_5540(0x1b110, 0x1b117, rdx127);
                                rsp132 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp132) - 8 + 8 - 8 + 8);
                            }
                        } else {
                            *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
                        }
                    }
                }
                *reinterpret_cast<void***>(r13_3 + 0x200) = rbp134;
                *reinterpret_cast<void***>(&ebx148) = *reinterpret_cast<void***>(rbp134);
                if (*reinterpret_cast<void***>(&ebx148)) {
                    rax149 = fun_56f0(rdi131, rdi131);
                    rsp132 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp132) - 8 + 8);
                    r12_150 = rax149;
                    rbp151 = rbp134 + 1;
                    do {
                        rbx152 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(&ebx148));
                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(*r12_150 + rbx152 * 2) + 1) & 1) {
                            rax153 = fun_56e0(rdi131, rsi130, rdx127, rcx5);
                            rsp132 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp132) - 8 + 8);
                            eax154 = (*rax153)[rbx152 * 4];
                            *reinterpret_cast<void***>(rbp151 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&eax154);
                        }
                        ebx148 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp151));
                        ++rbp151;
                    } while (*reinterpret_cast<void***>(&ebx148));
                }
                if (!*reinterpret_cast<int32_t*>(r13_3 + 0x214)) {
                    rdi155 = *reinterpret_cast<void***>(r13_3 + 0x200);
                    rax156 = fun_51d0(rdi155, rsi130, rdi155, rsi130);
                    rdi157 = r13_3 + 0x158;
                    rsi158 = r13_3 + 0x1c0;
                    httpd_realloc_str(rdi157, rsi158, rax156, rcx5, 0, 0, rdi157, rsi158, rax156, rcx5, 0, 0);
                    rdi159 = *reinterpret_cast<void***>(r13_3 + 0x158);
                    rsi160 = *reinterpret_cast<void***>(r13_3 + 0x200);
                    fun_50d0(rdi159, rsi160, rax156, rdi159, rsi160, rax156);
                    rdi161 = *reinterpret_cast<void***>(r13_3 + 0xf0);
                    rax162 = fun_51d0(rdi161, rsi160, rdi161, rsi160);
                    rbx163 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax162)));
                    httpd_realloc_str(0x1b1d8, 0x1b1e0, rbx163, rcx5, 0, 0, 0x1b1d8, 0x1b1e0, rbx163, rcx5, 0, 0);
                    rdi164 = vhost_map_tempfilename;
                    rsi165 = *reinterpret_cast<void***>(r13_3 + 0xf0);
                    fun_50d0(rdi164, rsi165, rbx163, rdi164, rsi165, rbx163);
                    rdi166 = *reinterpret_cast<void***>(r13_3 + 0x158);
                    rax167 = fun_51d0(rdi166, rsi165, rdi166, rsi165);
                    rdx168 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx163) + reinterpret_cast<unsigned char>(rax167) + 1);
                    httpd_realloc_str(r15_123, r14_124, rdx168, rcx5, 0, 0, r15_123, r14_124, rdx168, rcx5, 0, 0);
                    rdi169 = *reinterpret_cast<void***>(r13_3 + 0xf0);
                    rsi170 = *reinterpret_cast<void***>(r13_3 + 0x158);
                    fun_50d0(rdi169, rsi170, rdx168, rdi169, rsi170, rdx168);
                    rbx171 = *reinterpret_cast<void***>(r13_3 + 0xf0);
                    rax172 = fun_51d0(rbx171, rsi170, rbx171, rsi170);
                    *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rbx171) + reinterpret_cast<unsigned char>(rax172)) = 47;
                    rdi173 = *reinterpret_cast<void***>(r13_3 + 0xf0);
                    rsi174 = vhost_map_tempfilename;
                    fun_55e0(rdi173, rsi174, rdx168, rcx5);
                    rsp132 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp132) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
                }
                rax133 = *reinterpret_cast<void***>(r13_3 + 8);
            }
        } else {
            if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_3 + 0x148)) || *reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_3 + 0x150))) {
                if (*reinterpret_cast<int32_t*>(r13_3 + 0x228)) {
                    *reinterpret_cast<int32_t*>(r13_3 + 0x22c) = 1;
                    goto addr_b282_93;
                }
            } else {
                addr_b33c_10:
                rdx37 = httpd_err400title;
                r8_38 = httpd_err400form;
                rdi39 = r13_3;
                goto addr_b354_117;
            }
        }
    } else {
        v175 = v90 + 0x128;
        v176 = v90 + 0x1b0;
        v177 = v90 + 16;
        r14_178 = v90 + 0x120;
        v179 = v90 + 0x1a8;
        do {
            rdx180 = *reinterpret_cast<void***>(v90 + 0x90);
            rsi106 = rax122 + 1;
            rcx5 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx5));
            do {
                ebx181 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx180) + reinterpret_cast<unsigned char>(rsi106) + 0xffffffffffffffff);
                if (*reinterpret_cast<signed char*>(&ebx181) == 13) 
                    break;
                if (*reinterpret_cast<signed char*>(&ebx181) == 10) 
                    break;
                *reinterpret_cast<void***>(v90 + 0xa8) = rsi106;
                rdi182 = reinterpret_cast<unsigned char>(rcx5) + reinterpret_cast<unsigned char>(rsi106) + 1;
                ++rsi106;
            } while (rdi182 != 1);
            goto addr_abcd_123;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdx180) + reinterpret_cast<unsigned char>(rsi106) + 0xffffffffffffffff) = 0;
            rcx5 = *reinterpret_cast<void***>(v90 + 0xa8) + 1;
            *reinterpret_cast<void***>(v90 + 0xa8) = rcx5;
            if (*reinterpret_cast<signed char*>(&ebx181) != 13 || reinterpret_cast<unsigned char>(rcx5) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v90 + 0xa0))) {
                addr_ac17_125:
                r15_183 = *reinterpret_cast<void***>(v90 + 0x90);
                if (!r15_183) 
                    goto addr_b242_92; else 
                    goto addr_ac27_126;
            } else {
                r15_183 = *reinterpret_cast<void***>(v90 + 0x90);
                if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r15_183) + reinterpret_cast<unsigned char>(rcx5)) != 10) {
                    addr_ac27_126:
                    r15_184 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_183) + reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax122))));
                    if (!*reinterpret_cast<void***>(r15_184)) 
                        goto addr_b242_92;
                } else {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r15_183) + reinterpret_cast<unsigned char>(rcx5)) = 0;
                    *reinterpret_cast<void***>(v90 + 0xa8) = *reinterpret_cast<void***>(v90 + 0xa8) + 1;
                    goto addr_ac17_125;
                }
            }
            eax185 = fun_5440(r15_184, "Referer:", 8);
            rsp186 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
            if (!eax185) {
                rsi106 = reinterpret_cast<void**>(" \t");
                rax187 = fun_52f0(r15_184 + 8, " \t", 8);
                rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp186) - 8 + 8);
                rax188 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax187) + reinterpret_cast<unsigned char>(r15_184) + 8);
            } else {
                eax189 = fun_5440(r15_184, "Referrer:", 9);
                rsp190 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp186) - 8 + 8);
                if (!eax189) {
                    rsi106 = reinterpret_cast<void**>(" \t");
                    rax191 = fun_52f0(r15_184 + 9, " \t", 9);
                    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp190) - 8 + 8);
                    rax188 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax191) + reinterpret_cast<unsigned char>(r15_184) + 9);
                } else {
                    eax192 = fun_5440(r15_184, "User-Agent:", 11);
                    rsp193 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp190) - 8 + 8);
                    if (!eax192) {
                        rsi106 = reinterpret_cast<void**>(" \t");
                        rax194 = fun_52f0(r15_184 + 11, " \t", 11);
                        rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp193) - 8 + 8);
                        rbx195 = v90;
                        *reinterpret_cast<void***>(rbx195 + 0x118) = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax194) + reinterpret_cast<unsigned char>(r15_184) + 11);
                        continue;
                    } else {
                        eax196 = fun_5440(r15_184, "Host:", 5);
                        rsp197 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp193) - 8 + 8);
                        if (!eax196) {
                            rax198 = fun_52f0(r15_184 + 5, " \t", 5);
                            rbp199 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_184) + reinterpret_cast<uint64_t>(rax198) + 5);
                            rbx195 = v90;
                            *reinterpret_cast<void***>(rbx195 + 0x150) = rbp199;
                            rax200 = fun_5220(rbp199, 58, 5);
                            if (rax200) {
                                *reinterpret_cast<void***>(rax200) = reinterpret_cast<void**>(0);
                                rbp199 = *reinterpret_cast<void***>(rbx195 + 0x150);
                            }
                            *reinterpret_cast<int32_t*>(&rsi106) = 47;
                            *reinterpret_cast<int32_t*>(&rsi106 + 4) = 0;
                            rax201 = fun_5220(rbp199, 47, 5);
                            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp197) - 8 + 8 - 8 + 8 - 8 + 8);
                            if (rax201) 
                                goto addr_b6ec_139;
                            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbp199) == 46)) 
                                continue; else 
                                goto addr_aef0_141;
                        } else {
                            eax202 = fun_5440(r15_184, "Accept:", 7);
                            rsp203 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp197) - 8 + 8);
                            if (!eax202) {
                                rax204 = fun_52f0(r15_184 + 7, " \t", 7);
                                rsp205 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp203) - 8 + 8);
                                r15_206 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_184) + reinterpret_cast<uint64_t>(rax204) + 7);
                                rdi207 = *reinterpret_cast<void***>(r14_178);
                                if (!*reinterpret_cast<void***>(rdi207)) {
                                    rax208 = fun_51d0(r15_206, " \t", r15_206, " \t");
                                    rdx209 = rax208;
                                    httpd_realloc_str(r14_178, v179, rdx209, rcx5, r8_210, r9_211);
                                    rsp212 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp205) - 8 + 8 - 8 + 8);
                                    goto addr_b014_145;
                                } else {
                                    rax213 = fun_51d0(rdi207, " \t", rdi207, " \t");
                                    rsp214 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp205) - 8 + 8);
                                    if (reinterpret_cast<unsigned char>(rax213) < reinterpret_cast<unsigned char>(0x1389)) {
                                        rax215 = fun_51d0(r15_206, " \t", r15_206, " \t");
                                        rdx209 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax213) + reinterpret_cast<unsigned char>(rax215) + 2);
                                        httpd_realloc_str(r14_178, v179, rdx209, rcx5, r8_216, r9_217);
                                        rbx218 = *reinterpret_cast<void***>(r14_178);
                                        rax219 = fun_51d0(rbx218, v179);
                                        rsp212 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp214) - 8 + 8 - 8 + 8 - 8 + 8);
                                        *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rbx218) + reinterpret_cast<unsigned char>(rax219)) = 0x202c;
                                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rbx218) + reinterpret_cast<unsigned char>(rax219) + 2) = 0;
                                        goto addr_b014_145;
                                    } else {
                                        httpd_ntoa(v177, " \t", 7);
                                        rsp220 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp214) - 8 + 8);
                                        rsi106 = reinterpret_cast<void**>("%.80s way too much Accept: data");
                                        goto addr_af8c_149;
                                    }
                                }
                            } else {
                                eax221 = fun_5440(r15_184, "Accept-Encoding:", 16);
                                rsp222 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp203) - 8 + 8);
                                if (!eax221) {
                                    rax223 = fun_52f0(r15_184 + 16, " \t", 16);
                                    rsp224 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp222) - 8 + 8);
                                    r15_225 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_184) + reinterpret_cast<uint64_t>(rax223) + 16);
                                    rdi226 = *reinterpret_cast<void***>(v175);
                                    if (!*reinterpret_cast<void***>(rdi226)) {
                                        rax227 = fun_51d0(r15_225, " \t", r15_225, " \t");
                                        rdx228 = rax227;
                                        httpd_realloc_str(v175, v176, rdx228, rcx5, r8_229, r9_230);
                                        rsp231 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp224) - 8 + 8 - 8 + 8);
                                        goto addr_b090_153;
                                    } else {
                                        rax232 = fun_51d0(rdi226, " \t", rdi226, " \t");
                                        rsp233 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp224) - 8 + 8);
                                        if (reinterpret_cast<unsigned char>(rax232) < reinterpret_cast<unsigned char>(0x1389)) {
                                            rax234 = fun_51d0(r15_225, " \t", r15_225, " \t");
                                            rdx228 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax232) + reinterpret_cast<unsigned char>(rax234) + 2);
                                            httpd_realloc_str(v175, v176, rdx228, rcx5, r8_235, r9_236);
                                            rbx237 = *reinterpret_cast<void***>(v175);
                                            rax238 = fun_51d0(rbx237, v176);
                                            rsp231 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp233) - 8 + 8 - 8 + 8 - 8 + 8);
                                            *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rbx237) + reinterpret_cast<unsigned char>(rax238)) = 0x202c;
                                            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rbx237) + reinterpret_cast<unsigned char>(rax238) + 2) = 0;
                                            goto addr_b090_153;
                                        } else {
                                            httpd_ntoa(v177, " \t", 16);
                                            rsp220 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp233) - 8 + 8);
                                            rsi106 = reinterpret_cast<void**>("%.80s way too much Accept-Encoding: data");
                                            goto addr_af8c_149;
                                        }
                                    }
                                } else {
                                    eax239 = fun_5440(r15_184, "Accept-Language:", 16);
                                    rsp240 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp222) - 8 + 8);
                                    if (!eax239) {
                                        rsi106 = reinterpret_cast<void**>(" \t");
                                        rax241 = fun_52f0(r15_184 + 16, " \t", 16);
                                        rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp240) - 8 + 8);
                                        rbx195 = v90;
                                        *reinterpret_cast<void***>(rbx195 + 0x130) = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax241) + reinterpret_cast<unsigned char>(r15_184) + 16);
                                        continue;
                                    } else {
                                        rsi106 = reinterpret_cast<void**>("If-Modified-Since:");
                                        eax242 = fun_5440(r15_184, "If-Modified-Since:", 18);
                                        rsp243 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp240) - 8 + 8);
                                        if (!eax242) {
                                            rax244 = tdate_parse(r15_184 + 18, "If-Modified-Since:", 18);
                                            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp243) - 8 + 8);
                                            rbx195 = v90;
                                            *reinterpret_cast<void***>(rbx195 + 0x1e0) = rax244;
                                            goto addr_b0e2_161;
                                        } else {
                                            eax245 = fun_5440(r15_184, "Cookie:", 7);
                                            rsp246 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp243) - 8 + 8);
                                            if (!eax245) {
                                                rsi106 = reinterpret_cast<void**>(" \t");
                                                rax247 = fun_52f0(r15_184 + 7, " \t", 7);
                                                rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp246) - 8 + 8);
                                                rbx195 = v90;
                                                *reinterpret_cast<void***>(rbx195 + 0x138) = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax247) + reinterpret_cast<unsigned char>(r15_184) + 7);
                                                continue;
                                            } else {
                                                eax248 = fun_5440(r15_184, "Range:", 6);
                                                rsp249 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp246) - 8 + 8);
                                                if (!eax248) {
                                                    *reinterpret_cast<int32_t*>(&rsi106) = 44;
                                                    *reinterpret_cast<int32_t*>(&rsi106 + 4) = 0;
                                                    rax250 = fun_5220(r15_184, 44, 6);
                                                    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp249) - 8 + 8);
                                                    rbx195 = v90;
                                                    if (!rax250 && ((*reinterpret_cast<int32_t*>(&rsi106) = 61, *reinterpret_cast<int32_t*>(&rsi106 + 4) = 0, rax251 = fun_5220(r15_184, 61, 6), rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8), !!rax251) && ((rbp252 = rax251 + 1, *reinterpret_cast<int32_t*>(&rsi106) = 45, *reinterpret_cast<int32_t*>(&rsi106 + 4) = 0, rax253 = fun_5220(rbp252, 45, 6), rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8), !!rax253) && rax253 != rbp252))) {
                                                        *reinterpret_cast<void***>(rax253) = reinterpret_cast<void**>(0);
                                                        *reinterpret_cast<int32_t*>(rbx195 + 0x210) = 1;
                                                        *reinterpret_cast<int32_t*>(&rsi106) = 0;
                                                        *reinterpret_cast<int32_t*>(&rsi106 + 4) = 0;
                                                        rax254 = fun_5380(rbp252);
                                                        if (reinterpret_cast<signed char>(rax254) < reinterpret_cast<signed char>(0)) {
                                                            rax254 = reinterpret_cast<void**>(0);
                                                        }
                                                        *reinterpret_cast<void***>(rbx195 + 0x218) = rax254;
                                                        rax255 = fun_56f0(rbp252, rbp252);
                                                        rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8 - 8 + 8);
                                                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(*rax255 + reinterpret_cast<signed char>(*reinterpret_cast<void***>(rax253 + 1)) * 2) + 1) & 8) {
                                                            *reinterpret_cast<int32_t*>(&rsi106) = 0;
                                                            *reinterpret_cast<int32_t*>(&rsi106 + 4) = 0;
                                                            rax256 = fun_5380(rax253 + 1);
                                                            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
                                                            if (reinterpret_cast<signed char>(rax256) < reinterpret_cast<signed char>(0)) {
                                                                rax256 = reinterpret_cast<void**>(0xffffffffffffffff);
                                                            }
                                                            *reinterpret_cast<void***>(rbx195 + 0x220) = rax256;
                                                            continue;
                                                        }
                                                    }
                                                } else {
                                                    rsi106 = reinterpret_cast<void**>("Range-If:");
                                                    eax257 = fun_5440(r15_184, "Range-If:", 9);
                                                    rsp258 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp249) - 8 + 8);
                                                    if (!eax257 || (rsi106 = reinterpret_cast<void**>("If-Range:"), eax259 = fun_5440(r15_184, "If-Range:", 9), rsp258 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp258) - 8 + 8), eax259 == 0)) {
                                                        rax244 = tdate_parse(r15_184 + 9, rsi106, 9);
                                                        rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp258) - 8 + 8);
                                                        rbx195 = v90;
                                                        *reinterpret_cast<void***>(rbx195 + 0x1e8) = rax244;
                                                        goto addr_b0e2_161;
                                                    } else {
                                                        eax260 = fun_5440(r15_184, "Content-Type:", 13);
                                                        rsp261 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp258) - 8 + 8);
                                                        if (!eax260) {
                                                            rsi106 = reinterpret_cast<void**>(" \t");
                                                            rax262 = fun_52f0(r15_184 + 13, " \t", 13);
                                                            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp261) - 8 + 8);
                                                            rbx195 = v90;
                                                            *reinterpret_cast<void***>(rbx195 + 0x140) = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax262) + reinterpret_cast<unsigned char>(r15_184) + 13);
                                                            continue;
                                                        } else {
                                                            eax263 = fun_5440(r15_184, "Content-Length:", 15);
                                                            rsp264 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp261) - 8 + 8);
                                                            if (!eax263) {
                                                                *reinterpret_cast<int32_t*>(&rsi106) = 0;
                                                                *reinterpret_cast<int32_t*>(&rsi106 + 4) = 0;
                                                                rax265 = fun_53c0(r15_184 + 15);
                                                                rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp264) - 8 + 8);
                                                                rbx195 = v90;
                                                                *reinterpret_cast<void***>(rbx195 + 0x1f0) = rax265;
                                                                continue;
                                                            } else {
                                                                eax266 = fun_5440(r15_184, "Authorization:", 14);
                                                                rsp267 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp264) - 8 + 8);
                                                                if (!eax266) {
                                                                    rsi106 = reinterpret_cast<void**>(" \t");
                                                                    rax268 = fun_52f0(r15_184 + 14, " \t", 14);
                                                                    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp267) - 8 + 8);
                                                                    rbx195 = v90;
                                                                    *reinterpret_cast<void***>(rbx195 + 0x160) = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax268) + reinterpret_cast<unsigned char>(r15_184) + 14);
                                                                    continue;
                                                                } else {
                                                                    rsi106 = reinterpret_cast<void**>("Connection:");
                                                                    eax269 = fun_5440(r15_184, "Connection:", 11);
                                                                    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp267) - 8 + 8);
                                                                    rbx195 = v90;
                                                                    if (!eax269 && (rax270 = fun_52f0(r15_184 + 11, " \t", 11), rsi106 = reinterpret_cast<void**>("keep-alive"), eax271 = fun_5050(reinterpret_cast<unsigned char>(r15_184) + reinterpret_cast<uint64_t>(rax270) + 11, "keep-alive", 11), rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8 - 8 + 8), !eax271)) {
                                                                        *reinterpret_cast<int32_t*>(rbx195 + 0x228) = 1;
                                                                        continue;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            rbx195 = v90;
            *reinterpret_cast<void***>(rbx195 + 0x110) = rax188;
            continue;
            addr_b014_145:
            rdi272 = *reinterpret_cast<void***>(r14_178);
            rsi106 = r15_206;
            fun_55e0(rdi272, rsi106, rdx209, rcx5);
            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp212) - 8 + 8);
            addr_b09c_183:
            rbx195 = v90;
            continue;
            addr_af8c_149:
            fun_5480(3, rsi106, 3, rsi106);
            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp220) - 8 + 8);
            goto addr_b09c_183;
            addr_b090_153:
            rdi273 = *reinterpret_cast<void***>(v175);
            rsi106 = r15_225;
            fun_50d0(rdi273, rsi106, rdx228);
            rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp231) - 8 + 8);
            goto addr_b09c_183;
            addr_b0e2_161:
            if (reinterpret_cast<int1_t>(rax244 == 0xffffffffffffffff)) {
                rsi106 = reinterpret_cast<void**>("unparsable time: %.80s");
                fun_5480(7, "unparsable time: %.80s", 7, "unparsable time: %.80s");
                rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
            }
            rcx5 = *reinterpret_cast<void***>(rbx195 + 0xa0);
            rax122 = *reinterpret_cast<void***>(rbx195 + 0xa8);
        } while (reinterpret_cast<unsigned char>(rax122) < reinterpret_cast<unsigned char>(rcx5));
        goto addr_ae6e_186;
    }
    rdi274 = *reinterpret_cast<void***>(r13_3 + 0xf0);
    rdx275 = *reinterpret_cast<void***>(rax133 + 96);
    *reinterpret_cast<int32_t*>(&rdx275 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rcx276) = *reinterpret_cast<int32_t*>(r13_3 + 0x214);
    *reinterpret_cast<int32_t*>(&rcx276 + 4) = 0;
    rsi277 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp132) + 72);
    rax278 = expand_symlinks(rdi274, rsi277, rdx275, rcx276, 0, 0, 1);
    if (!rax278) {
        addr_b657_97:
        r9_41 = *reinterpret_cast<void***>(r13_3 + 0xd0);
        rdx37 = reinterpret_cast<void**>("Internal Error");
        r8_38 = reinterpret_cast<void**>("There was an unusual problem serving the requested URL '%.80s'.\n");
        rdi39 = r13_3;
        esi40 = reinterpret_cast<void**>(0x1f4);
    } else {
        rax279 = fun_51d0(rax278, rsi277, rax278, rsi277);
        httpd_realloc_str(r15_123, r14_124, rax279, rcx276, 0, 0, r15_123, r14_124, rax279, rcx276, 0, 0);
        rdi280 = *reinterpret_cast<void***>(r13_3 + 0xf0);
        fun_50d0(rdi280, rax278, rax279, rdi280, rax278, rax279);
        rax282 = fun_51d0(v281, rax278, v281, rax278);
        rdi283 = r13_3 + 0x100;
        rsi284 = r13_3 + 0x198;
        httpd_realloc_str(rdi283, rsi284, rax282, rcx276, 0, 0, rdi283, rsi284, rax282, rcx276, 0, 0);
        rdi285 = *reinterpret_cast<void***>(r13_3 + 0x100);
        rsi286 = v281;
        fun_50d0(rdi285, rsi286, rax282, rdi285, rsi286, rax282);
        rbx287 = *reinterpret_cast<void***>(r13_3 + 0x100);
        if (*reinterpret_cast<void***>(rbx287) && ((r14_288 = *reinterpret_cast<void***>(v76), rax289 = fun_51d0(r14_288, rsi286, r14_288, rsi286), rax290 = fun_51d0(rbx287, rsi286, rbx287, rsi286), rbp291 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax289) - reinterpret_cast<unsigned char>(rax290)), !(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbp291) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbp291) == 0))) && (rdi292 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rbp291)) + reinterpret_cast<unsigned char>(r14_288)), rsi286 = rbx287, eax293 = fun_5370(rdi292, rsi286, rdi292, rsi286), !eax293))) {
            *reinterpret_cast<int32_t*>(&rbp294) = *reinterpret_cast<int32_t*>(&rbp291) - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp294) + 4) = 0;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r14_288) + reinterpret_cast<uint64_t>(rbp294)) = 0;
        }
        rbp295 = *reinterpret_cast<void***>(r15_123);
        ebx296 = 0;
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbp295) == 47)) 
            goto addr_b366_191; else 
            goto addr_b534_192;
    }
    addr_b35c_38:
    httpd_send_err(rdi39, esi40, rdx37, 0x13553, r8_38, r9_41, rdi39, esi40, rdx37, 0x13553, r8_38, r9_41);
    ebx296 = -1;
    addr_b366_191:
    return ebx296;
    addr_b534_192:
    r15_297 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_3 + 8) + 64);
    rax298 = fun_51d0(r15_297, rsi286, r15_297, rsi286);
    eax299 = fun_50b0(rbp295, r15_297, rax298, rbp295, r15_297, rax298);
    if (!eax299) {
        r14_300 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax298) + reinterpret_cast<unsigned char>(rbp295));
        rax301 = fun_51d0(r14_300, r15_297, r14_300, r15_297);
        rdx302 = rax301 + 1;
        fun_5540(rbp295, r14_300, rdx302, rbp295, r14_300, rdx302);
        goto addr_b366_191;
    } else {
        rdi303 = r13_3 + 16;
        httpd_ntoa(rdi303, r15_297, rax298, rdi303, r15_297, rax298);
        fun_5480(5, "%.80s URL \"%.80s\" goes outside the web tree", 5, "%.80s URL \"%.80s\" goes outside the web tree");
        r9_41 = *reinterpret_cast<void***>(r13_3 + 0xd0);
        rdx37 = reinterpret_cast<void**>("Forbidden");
        r8_38 = reinterpret_cast<void**>("The requested URL '%.80s' resolves to a file outside the permitted web server directory tree.\n");
        rdi39 = r13_3;
        esi40 = reinterpret_cast<void**>(0x193);
        goto addr_b35c_38;
    }
    addr_b354_117:
    esi40 = reinterpret_cast<void**>(0x190);
    r9_41 = reinterpret_cast<void**>(0x13553);
    goto addr_b35c_38;
    addr_abcd_123:
    goto addr_b242_92;
    addr_ae6e_186:
    goto addr_b242_92;
    addr_b6ec_139:
    rdx37 = httpd_err400title;
    r8_38 = httpd_err400form;
    rdi39 = rbx195;
    goto addr_b354_117;
    addr_aef0_141:
    goto addr_b6ec_139;
    addr_a5ae_19:
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r12_12) == 47)) 
        goto addr_b33c_10; else 
        goto addr_a5b9_25;
    addr_a48a_5:
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx5) + reinterpret_cast<unsigned char>(rdx7) + 0xffffffffffffffff) = 0;
    rax304 = *reinterpret_cast<void***>(r13_3 + 0xa8) + 1;
    *reinterpret_cast<void***>(r13_3 + 0xa8) = rax304;
    if (*reinterpret_cast<signed char*>(&ebx8) == 13 && (reinterpret_cast<unsigned char>(rax304) < reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_3 + 0xa0)) && (rcx5 = *reinterpret_cast<void***>(r13_3 + 0x90), *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx5) + reinterpret_cast<unsigned char>(rax304)) == 10))) {
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx5) + reinterpret_cast<unsigned char>(rax304)) = 0;
        *reinterpret_cast<void***>(r13_3 + 0xa8) = *reinterpret_cast<void***>(r13_3 + 0xa8) + 1;
    }
    r15_4 = *reinterpret_cast<void***>(r13_3 + 0x90);
    goto addr_a4d4_9;
    addr_a488_8:
    goto addr_a4d4_9;
}

int32_t match_one(void** rdi, int32_t esi, void** rdx);

int32_t match(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** r14_7;
    void** rbx8;
    void** rax9;
    void** rax10;
    void** r15_11;
    int32_t eax12;
    void** rax13;
    void** r15_14;
    int32_t r13d15;
    int32_t r12d16;
    void** r14_17;
    void** rcx18;
    void** rsi19;
    void** rbx20;
    void** rdx21;
    uint32_t eax22;
    void** r15_23;
    void** rax24;
    int32_t r14d25;
    void* rbp26;
    int32_t eax27;
    uint1_t less_or_equal28;

    r14_7 = rsi;
    rbx8 = rdi;
    rax9 = fun_5220(rdi, 0x7c, rdx);
    if (!rax9) {
        addr_118f0_2:
        rax10 = fun_51d0(rbx8, 0x7c, rbx8, 0x7c);
    } else {
        r15_11 = rax9;
        do {
            eax12 = match_one(rbx8, *reinterpret_cast<int32_t*>(&r15_11) - *reinterpret_cast<int32_t*>(&rbx8), r14_7);
            if (eax12) 
                goto addr_11907_5;
            rbx8 = r15_11 + 1;
            rax13 = fun_5220(rbx8, 0x7c, r14_7);
            r15_11 = rax13;
        } while (rax13);
        goto addr_118f0_2;
    }
    r15_14 = r14_7;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax10) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax10) == 0)) {
        addr_1197e_8:
        r13d15 = 0;
        *reinterpret_cast<unsigned char*>(&r13d15) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(r15_14) == 0);
        goto addr_11989_9;
    } else {
        r12d16 = *reinterpret_cast<int32_t*>(&rax10);
        r14_17 = rbx8;
        rcx18 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax10)));
        rsi19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_14) + reinterpret_cast<unsigned char>(rcx18));
        rbx20 = rbx8 + 1;
        *reinterpret_cast<int32_t*>(&rdx21) = 0;
        *reinterpret_cast<int32_t*>(&rdx21 + 4) = 0;
        do {
            eax22 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx20 + 0xffffffffffffffff));
            if (*reinterpret_cast<signed char*>(&eax22) == 63) {
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r15_14) + reinterpret_cast<unsigned char>(rdx21))) 
                    break;
            } else {
                if (*reinterpret_cast<signed char*>(&eax22) == 42) 
                    goto addr_1199b_14;
                if (*reinterpret_cast<signed char*>(&eax22) != *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r15_14) + reinterpret_cast<unsigned char>(rdx21))) 
                    break;
            }
            ++rbx20;
            ++rdx21;
        } while (reinterpret_cast<signed char>(rdx21) < reinterpret_cast<signed char>(rcx18));
        goto addr_1197b_17;
    }
    r13d15 = 0;
    goto addr_11989_9;
    addr_1197b_17:
    r15_14 = rsi19;
    goto addr_1197e_8;
    addr_1199b_14:
    r15_23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_14) + reinterpret_cast<unsigned char>(rdx21));
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx20) == 42)) {
        rax24 = fun_5310(r15_23, "/", rdx21);
    } else {
        ++rbx20;
        rax24 = fun_51d0(r15_23, rsi19, r15_23, rsi19);
    }
    r13d15 = 0;
    if (*reinterpret_cast<uint32_t*>(&rax24) & 0x80000000) {
        addr_11989_9:
        return r13d15;
    } else {
        r14d25 = *reinterpret_cast<int32_t*>(&r14_17) - *reinterpret_cast<int32_t*>(&rbx20) + r12d16;
        *reinterpret_cast<uint32_t*>(&rbp26) = *reinterpret_cast<uint32_t*>(&rax24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp26) + 4) = 0;
        do {
            eax27 = match_one(rbx20, r14d25, reinterpret_cast<unsigned char>(r15_23) + reinterpret_cast<uint64_t>(rbp26));
            if (eax27) 
                break;
            less_or_equal28 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rbp26) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rbp26 == 0));
            rbp26 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbp26) + 0xffffffffffffffff);
        } while (!less_or_equal28);
        goto addr_119ff_25;
    }
    r13d15 = 1;
    goto addr_11989_9;
    addr_119ff_25:
    goto addr_11989_9;
    addr_11907_5:
    return 1;
}

int32_t fun_53b0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

/* send_dirredirect.location */
void** send_dirredirect_location = reinterpret_cast<void**>(0);

/* send_dirredirect.maxlocation */
void** send_dirredirect_maxlocation = reinterpret_cast<void**>(0);

/* send_dirredirect.header */
void** send_dirredirect_header = reinterpret_cast<void**>(0);

/* send_dirredirect.maxheader */
void** send_dirredirect_maxheader = reinterpret_cast<void**>(0);

void send_response(void** rdi, void** esi, void** rdx, void** rcx, void** r8, void** r9);

/* really_start_request.indexname */
void** really_start_request_indexname = reinterpret_cast<void**>(0);

/* really_start_request.dirname */
void** really_start_request_dirname = reinterpret_cast<void**>(0);

struct s4 {
    signed char f0;
    void** f1;
};

struct s4* fun_5250(void** rdi, void** rsi, void** rdx, void** rcx, ...);

int32_t auth_check2(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

int32_t check_referrer(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

uint32_t fun_56b0(void** rdi, void** rsi, ...);

void** httpd_err503title = reinterpret_cast<void**>(44);

void** httpd_err503form = reinterpret_cast<void**>(75);

void** mmc_map(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

struct s5 {
    signed char[103472] pad103472;
    void** f19430;
};

signed char sub_process = 0;

void fun_52a0();

void fun_5060(void** rdi, void** rsi, ...);

void** fun_5210();

void** build_env(void** rdi, void** rsi, ...);

/* make_envp.envp */
void** make_envp_envp = reinterpret_cast<void**>(0);

void** g1b308 = reinterpret_cast<void**>(0);

void** g1b310 = reinterpret_cast<void**>(0);

void cgi_kill(void** rdi, void** rsi);

void** fun_51a0(void** rdi, void** rsi, void** rdx);

void fun_5300(void** rdi, void** rsi, ...);

void** httpd_write_response(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7);

void fun_5460(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

void** fun_54e0(int64_t rdi, int64_t rsi, void** rdx);

void fun_5520(int64_t rdi, ...);

void fun_5360(void** rdi, void** rsi, int64_t rdx, void** rcx, void** r8, void** r9);

void fun_50c0(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

void** fun_5420(void** rdi, void** rsi, void** rdx);

/* ls.maxnames */
uint32_t ls_maxnames = 0;

/* ls.nameptrs */
void** ls_nameptrs = reinterpret_cast<void**>(0);

/* ls.names */
void** ls_names = reinterpret_cast<void**>(0);

void fun_50a0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

void name_compare(int64_t rdi, int64_t rsi);

/* ls.name */
void** ls_name = reinterpret_cast<void**>(0);

/* ls.rname */
void** ls_rname = reinterpret_cast<void**>(0);

/* ls.maxname */
void** ls_maxname = reinterpret_cast<void**>(0);

/* ls.maxrname */
void** ls_maxrname = reinterpret_cast<void**>(0);

/* ls.encrname */
void** ls_encrname = reinterpret_cast<void**>(0);

/* ls.maxencrname */
int32_t ls_maxencrname = 0;

int32_t fun_5340(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

int64_t fun_5320(int64_t rdi, int64_t rsi, void** rdx);

void fun_5610(void** rdi, int64_t rsi, void** rdx);

void** fun_5400();

void** fun_51b0(void* rdi);

void** fun_5030(int64_t rdi, void** rsi);

int32_t fun_52c0(void** rdi, void** rsi, ...);

void** cgi_interpose_input(void** rdi, int32_t esi);

void fun_5630(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

void cgi_interpose_output(void** rdi, int32_t esi, void** rdx, void** rcx, void** r8, void** r9);

int32_t httpd_start_request(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** r15_7;
    void** r13_8;
    void** rbx9;
    void** rax10;
    void** r12_11;
    void** rsi12;
    void** v13;
    int32_t eax14;
    void*** rsp15;
    unsigned char eax16;
    void** rdi17;
    uint32_t eax18;
    int32_t edx19;
    void** rsi20;
    int32_t eax21;
    uint32_t eax22;
    uint32_t ecx23;
    void** rax24;
    void** r9_25;
    void** rdx26;
    void** r8_27;
    void** r14_28;
    void** rdi29;
    void** esi30;
    void** rbx31;
    int32_t eax32;
    void** rax33;
    void** rbp34;
    void** rbx35;
    void** rax36;
    void** rdi37;
    void** rsi38;
    void** rcx39;
    void** v40;
    void** v41;
    void** v42;
    int40_t v43;
    void** v44;
    void** v45;
    void** v46;
    int16_t v47;
    void** rax48;
    void** rax49;
    void** rax50;
    void** rdi51;
    void** v52;
    void** v53;
    void** v54;
    int40_t v55;
    void** v56;
    void** v57;
    void** v58;
    int16_t v59;
    void** rdi60;
    void** rax61;
    void** rdi62;
    void** rsi63;
    void** r8_64;
    void** v65;
    void** v66;
    void** v67;
    int40_t v68;
    void** v69;
    void** v70;
    void** v71;
    int16_t v72;
    void** rcx73;
    void** r9_74;
    void** v75;
    void** v76;
    int64_t r13_77;
    void** r15_78;
    void** rax79;
    void** rdx80;
    void** rdi81;
    void** rbp82;
    void** rsi83;
    void** r14_84;
    void** rax85;
    void* rsp86;
    void** rax87;
    int32_t eax88;
    void** rdi89;
    int32_t eax90;
    void** rdi91;
    void** rdx92;
    void** rsi93;
    void** rax94;
    signed char* v95;
    void** rax96;
    void** rdi97;
    void** rdi98;
    uint32_t eax99;
    int32_t edx100;
    void** rsi101;
    int32_t eax102;
    uint32_t eax103;
    uint32_t ecx104;
    void** rax105;
    void** rdi106;
    void** rsi107;
    void** rbx108;
    struct s4* rax109;
    void** rbx110;
    void** rsi111;
    int32_t eax112;
    int32_t ebp113;
    int32_t eax114;
    void** rdi115;
    int32_t eax116;
    void** rbx117;
    void** rdi118;
    int32_t eax119;
    int32_t eax120;
    void** rdi121;
    int32_t eax122;
    void** rdi123;
    uint32_t eax124;
    int32_t edx125;
    void** rsi126;
    int32_t eax127;
    uint32_t eax128;
    uint32_t ecx129;
    void** rax130;
    void** r9_131;
    void** r8_132;
    int64_t rax133;
    uint32_t eax134;
    void** r9_135;
    void** rdi136;
    void** rbx137;
    void** rax138;
    void* rax139;
    void** rdx140;
    void** rcx141;
    void** v142;
    void** rsi143;
    void** rcx144;
    void** v145;
    void** rcx146;
    void** rdi147;
    void** v148;
    void** v149;
    void* v150;
    void** v151;
    void* v152;
    void** v153;
    void* rbp154;
    int64_t v155;
    uint64_t r14_156;
    void** rcx157;
    void** v158;
    void** v159;
    void* r12_160;
    void* r15_161;
    void** rax162;
    void** rdi163;
    void** v164;
    int32_t eax165;
    int32_t eax166;
    int32_t eax167;
    int64_t rdx168;
    int64_t rax169;
    int64_t rdx170;
    void** rdi171;
    uint32_t eax172;
    int32_t edx173;
    void** rsi174;
    int32_t eax175;
    uint32_t eax176;
    uint32_t ecx177;
    void** rax178;
    void** ebx179;
    void** rdi180;
    void** rsi181;
    void** rax182;
    void* rsp183;
    uint32_t eax184;
    void*** rsp185;
    void** rdx186;
    void** r8_187;
    void** r9_188;
    void** rdi189;
    uint32_t eax190;
    int32_t edx191;
    void** v192;
    void** r13_193;
    void** v194;
    void* r12_195;
    int64_t rax196;
    int64_t r15_197;
    void* rbp198;
    void** rdx199;
    void** rdi200;
    void** rsi201;
    void** rbx202;
    void** rcx203;
    void** rdi204;
    void** rax205;
    void** rcx206;
    void** r9_207;
    void** rdx208;
    void** rdi209;
    void** esi210;
    void** v211;
    void** v212;
    int64_t r12_213;
    int64_t r15_214;
    uint32_t eax215;
    int32_t ebx216;
    struct s5* rbp217;
    void** rsi218;
    int32_t eax219;
    void** r9_220;
    void** rbx221;
    void** rdi222;
    void*** rsp223;
    void** eax224;
    void** rax225;
    void** rax226;
    void*** rsp227;
    void** rsi228;
    void** rax229;
    int64_t rbp230;
    void** rsi231;
    void** rax232;
    void* rsp233;
    void** rcx234;
    void** r14_235;
    void** v236;
    int40_t v237;
    void** v238;
    void** v239;
    void** v240;
    int16_t v241;
    void** rax242;
    void* rsp243;
    uint32_t eax244;
    void** rsi245;
    void** rdx246;
    void** rax247;
    void** rsi248;
    void** rdi249;
    void** rsi250;
    int32_t eax251;
    uint32_t eax252;
    uint32_t ecx253;
    void** rax254;
    void** r15_255;
    void** rsi256;
    int32_t eax257;
    int32_t eax258;
    int32_t eax259;
    void** rdi260;
    void** rax261;
    void** r15_262;
    uint32_t eax263;
    void*** rsp264;
    uint32_t eax265;
    void** rdi266;
    uint32_t eax267;
    int32_t edx268;
    void** rsi269;
    int32_t eax270;
    uint32_t eax271;
    uint32_t ecx272;
    void** rax273;
    void** rbp274;
    void** r8_275;
    void** v276;
    int64_t rdi277;
    void** rax278;
    void*** rsp279;
    void** v280;
    void** rdx281;
    void** rax282;
    int64_t rax283;
    void** rsi284;
    void*** rsp285;
    void** rdx286;
    void** rcx287;
    void** r14_288;
    void** rax289;
    void* rsp290;
    struct s4* rax291;
    void** rsi292;
    void* rsp293;
    int32_t v294;
    int32_t v295;
    int64_t rdi296;
    int32_t v297;
    void** rsi298;
    void** rcx299;
    void** rsi300;
    uint64_t rbx301;
    void** rdx302;
    void** rax303;
    uint64_t r13_304;
    void** rax305;
    void** rbp306;
    void** rax307;
    uint32_t eax308;
    void** rdi309;
    void** rax310;
    void** rdi311;
    void** rax312;
    int64_t rax313;
    void** rdx314;
    void* rdi315;
    int64_t rdi316;
    int64_t rdi317;
    int64_t rdi318;
    int64_t rdx319;
    void* rdi320;
    void** r14_321;
    void** rax322;
    void** rdi323;
    void** rbp324;
    void** rax325;
    void** rdi326;
    void** rsi327;
    void** rcx328;
    void*** rsp329;
    void** rbx330;
    void** rdi331;
    void** rax332;
    void** rax333;
    void** rdi334;
    void** rax335;
    void** rdi336;
    void** rax337;
    void** rax338;
    void** rdi339;
    void** rax340;
    void** rdx341;
    void* rsp342;
    void** rbp343;
    int1_t zf344;
    int32_t eax345;
    void** rdi346;
    void** rbp347;
    void** rsi348;
    void** rdi349;
    void** rsi350;
    void* rsp351;
    void** rdi352;
    void** rsi353;
    void** rax354;
    void** r8_355;
    int40_t v356;
    void** v357;
    void** v358;
    void** v359;
    int16_t v360;
    void** rbp361;
    int32_t eax362;
    void* rsp363;
    void** rdi364;
    void** rcx365;
    void** v366;
    void** v367;
    void** v368;
    int16_t v369;
    void** v370;
    void** v371;
    void** v372;
    int16_t v373;
    void** rdi374;
    void** rax375;
    void** rdx376;
    void* rsp377;
    void** rbp378;
    int32_t ebx379;
    void** rdi380;
    int32_t eax381;
    void** rdi382;
    int32_t eax383;
    int32_t v384;
    uint32_t v385;
    int32_t eax386;
    int32_t v387;
    int32_t ecx388;
    void*** rax389;
    void*** r13_390;
    int64_t r14_391;
    int64_t rsi392;
    int64_t rax393;
    int64_t rax394;
    int32_t edx395;
    int32_t eax396;
    void** rax397;
    void* rsp398;
    void** rax399;
    void* rsp400;
    uint32_t ecx401;
    uint32_t ecx402;
    uint64_t v403;
    uint32_t ecx404;
    uint32_t edx405;
    uint32_t ecx406;
    uint32_t v407;
    uint32_t edx408;
    uint32_t esi409;
    void** v410;
    void** v411;
    void** rbx412;
    void** rdx413;
    void** v414;
    void** rax415;
    void*** rsp416;
    int64_t rbp417;
    int64_t rcx418;
    void** rsi419;
    void** rax420;
    int64_t rcx421;
    void** r14_422;
    void** rax423;
    void** r15_424;
    void** rax425;
    void** r13_426;
    void** rax427;
    void** v428;
    void** v429;
    void** v430;
    int16_t v431;
    void** rax432;
    int64_t rcx433;
    void** rbx434;
    int32_t eax435;
    void** rsi436;
    void** rax437;
    void*** rsp438;
    int64_t rbx439;
    int64_t rcx440;
    void** rsi441;
    void** rax442;
    int64_t rcx443;
    void** rdi444;
    uint32_t eax445;
    int32_t edx446;
    void** rsi447;
    int32_t eax448;
    void*** rsp449;
    uint32_t eax450;
    uint32_t ecx451;
    void** rax452;
    void** rax453;
    void*** rsp454;
    uint32_t ebp455;
    int64_t rcx456;
    void** rsi457;
    void** rax458;
    int64_t r14_459;
    int64_t rcx460;
    void** rsi461;
    void** rax462;
    void** rsi463;
    void** rax464;
    int64_t rcx465;
    void** rsi466;
    void** rax467;
    int64_t rcx468;
    void** rsi469;
    void** rax470;
    int64_t rcx471;
    void** rsi472;
    void** rax473;
    int64_t rcx474;
    void** rsi475;
    void** rax476;
    int64_t rcx477;
    void** rsi478;
    void** rax479;
    int64_t rcx480;
    void** rsi481;
    void** rax482;
    int64_t rcx483;
    void** rcx484;
    void** rbx485;
    void** v486;
    void** v487;
    void** v488;
    int16_t v489;
    void** rax490;
    int64_t rcx491;
    void** rsi492;
    void** rax493;
    int64_t rcx494;
    void** rax495;
    int64_t rcx496;
    void** rax497;
    void*** rsp498;
    void** rax499;
    int64_t rcx500;
    void** rsi501;
    void** rax502;
    int64_t rcx503;
    int64_t rbp504;
    void** rax505;
    void** rdi506;
    void** rax507;
    void*** rsp508;
    void** r14_509;
    struct s4* rax510;
    void** rcx511;
    void** rdi512;
    void** rax513;
    int32_t r14d514;
    void** rdi515;
    int32_t eax516;
    uint32_t eax517;
    int32_t v518;
    void** rbp519;
    void** rbx520;
    void** r13_521;
    uint32_t edx522;
    void*** rax523;
    int64_t rax524;
    uint32_t ecx525;
    int32_t ecx526;
    int32_t ecx527;
    uint32_t edx528;
    int32_t edx529;
    int32_t edx530;
    int64_t rax531;
    void** rbx532;
    void** rbp533;
    uint32_t edx534;
    void*** rax535;
    int64_t rax536;
    uint32_t ecx537;
    int32_t ecx538;
    int32_t ecx539;
    uint32_t edx540;
    int32_t edx541;
    int32_t edx542;
    int64_t rax543;
    int1_t zf544;
    void** rdi545;
    int32_t eax546;
    void** rdi547;
    int32_t eax548;
    uint32_t eax549;

    r15_7 = rsi;
    r13_8 = rdi;
    rbx9 = *reinterpret_cast<void***>(rdi + 0xf0);
    rax10 = fun_51d0(rbx9, rsi);
    r12_11 = rax10;
    rsi12 = r13_8 + 0x230;
    v13 = rsi12;
    eax14 = fun_53b0(rbx9, rsi12, rdx, rcx, r8, r9);
    rsp15 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - reinterpret_cast<int64_t>("up2") - 8 + 8 - 8 + 8);
    if (eax14 < 0) 
        goto addr_c5a8_2;
    eax16 = *reinterpret_cast<unsigned char*>(r13_8 + 0x248);
    if (!(eax16 & 5)) {
        rdi17 = r13_8 + 16;
        eax18 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r13_8 + 16));
        edx19 = 28;
        if (*reinterpret_cast<int16_t*>(&eax18) != 10) {
            edx19 = 0;
        }
        *reinterpret_cast<int32_t*>(&rsi20) = 16;
        *reinterpret_cast<int32_t*>(&rsi20 + 4) = 0;
        if (*reinterpret_cast<int16_t*>(&eax18) != 2) {
            *reinterpret_cast<int32_t*>(&rsi20) = edx19;
            *reinterpret_cast<int32_t*>(&rsi20 + 4) = 0;
        }
        eax21 = fun_52d0(rdi17, rsi20, 0x1b110, 0xc8, rdi17, rsi20, 0x1b110, 0xc8);
        if (!eax21) {
            if (!*reinterpret_cast<void***>(r13_8 + 24) && (!*reinterpret_cast<int32_t*>(r13_8 + 28) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r13_8 + 32) == 0xffff0000) && (eax22 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx23 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx23 | eax22))))) {
                rax24 = fun_51d0(0x1b117, rsi20, 0x1b117, rsi20);
                fun_5540(0x1b110, 0x1b117, rax24 + 1);
            }
        } else {
            *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
        }
        fun_5480(6, "%.80s URL \"%.80s\" resolves to a non world-readable file", 6, "%.80s URL \"%.80s\" resolves to a non world-readable file");
        r9_25 = *reinterpret_cast<void***>(r13_8 + 0xd0);
        rdx26 = reinterpret_cast<void**>("Forbidden");
        r8_27 = reinterpret_cast<void**>("The requested URL '%.80s' resolves to a file that is not world-readable.\n");
    } else {
        r14_28 = r13_8 + 0xf0;
        if ((eax16 & 0xf000) != 0x4000) 
            goto addr_c77e_14;
        if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 0x100))) 
            goto addr_c3f1_16; else 
            goto addr_c2d7_17;
    }
    addr_c3e4_18:
    rdi29 = r13_8;
    esi30 = reinterpret_cast<void**>(0x193);
    addr_c5cc_19:
    httpd_send_err(rdi29, esi30, rdx26, 0x13553, r8_27, r9_25);
    goto addr_c5d1_20;
    addr_c3f1_16:
    rbx31 = *reinterpret_cast<void***>(r13_8 + 0xe8);
    if (*reinterpret_cast<void***>(rbx31) && ((rsi12 = reinterpret_cast<void**>("."), eax32 = fun_5370(rbx31, "."), rsp15 = rsp15 - 8 + 8, !!eax32) && (rax33 = fun_51d0(rbx31, "."), rsp15 = rsp15 - 8 + 8, *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax33) + reinterpret_cast<unsigned char>(rbx31) + 0xffffffffffffffff) != 47))) {
        rbp34 = *reinterpret_cast<void***>(r13_8 + 0xd0);
        rbx35 = *reinterpret_cast<void***>(r13_8 + 0x108);
        if (!*reinterpret_cast<void***>(rbx35)) {
            rax36 = fun_51d0(rbp34, ".");
            httpd_realloc_str(0x1b228, 0x1b238, rax36 + 1, rcx, r8, r9);
            rdi37 = send_dirredirect_location;
            rsi38 = send_dirredirect_maxlocation;
            rcx39 = *reinterpret_cast<void***>(r13_8 + 0xd0);
            my_snprintf(rdi37, rsi38, "%s/", rcx39, r8, r9, v40, v13, v41, v42, v43, v44, v45, v46, v47);
        } else {
            rax48 = fun_5220(rbp34, 63, rdx);
            if (rax48) {
                *reinterpret_cast<void***>(rax48) = reinterpret_cast<void**>(0);
                rbp34 = *reinterpret_cast<void***>(r13_8 + 0xd0);
                rbx35 = *reinterpret_cast<void***>(r13_8 + 0x108);
            }
            rax49 = fun_51d0(rbp34, 63);
            rax50 = fun_51d0(rbx35, 63);
            httpd_realloc_str(0x1b228, 0x1b238, reinterpret_cast<unsigned char>(rax50) + reinterpret_cast<unsigned char>(rax49) + 2, rcx, r8, r9);
            rdi51 = send_dirredirect_location;
            rsi38 = send_dirredirect_maxlocation;
            rcx39 = *reinterpret_cast<void***>(r13_8 + 0xd0);
            r8 = *reinterpret_cast<void***>(r13_8 + 0x108);
            my_snprintf(rdi51, rsi38, "%s/?%s", rcx39, r8, r9, v52, v13, v53, v54, v55, v56, v57, v58, v59);
        }
        rdi60 = send_dirredirect_location;
        rax61 = fun_51d0(rdi60, rsi38, rdi60, rsi38);
        httpd_realloc_str(0x1b230, 0x1b240, rax61 + 11, rcx39, r8, r9);
        rdi62 = send_dirredirect_header;
        rsi63 = send_dirredirect_maxheader;
        r8_64 = send_dirredirect_location;
        my_snprintf(rdi62, rsi63, "%s%s\r\n", "Location: ", r8_64, r9, v65, v13, v66, v67, v68, v69, v70, v71, v72);
        rcx73 = send_dirredirect_header;
        r9_74 = send_dirredirect_location;
        send_response(r13_8, 0x12e, "Found", rcx73, "The actual URL is '%.80s'.\n", r9_74);
        goto addr_c5d1_20;
    }
    v75 = r15_7;
    v76 = r13_8;
    ++r12_11;
    *reinterpret_cast<int32_t*>(&r13_77) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_77) + 4) = 0;
    do {
        r15_78 = *reinterpret_cast<void***>(r13_77 + 0x18d70);
        rax79 = fun_51d0(r15_78, rsi12, r15_78, rsi12);
        rdx80 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax79) + reinterpret_cast<unsigned char>(r12_11));
        httpd_realloc_str(0x1b208, 0x1b210, rdx80, rcx, r8, r9);
        rdi81 = really_start_request_indexname;
        rbp82 = r14_28;
        rsi83 = *reinterpret_cast<void***>(r14_28);
        fun_50d0(rdi81, rsi83, rdx80);
        r14_84 = really_start_request_indexname;
        rax85 = fun_51d0(r14_84, rsi83, r14_84, rsi83);
        rsp86 = reinterpret_cast<void*>(rsp15 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        if (!rax85 || *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax85) + reinterpret_cast<unsigned char>(r14_84) + 0xffffffffffffffff) != 47) {
            rax87 = fun_51d0(r14_84, rsi83, r14_84, rsi83);
            rsp86 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp86) - 8 + 8);
            *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(r14_84) + reinterpret_cast<unsigned char>(rax87)) = 47;
            r14_84 = really_start_request_indexname;
        }
        eax88 = fun_5370(r14_84, "./", r14_84, "./");
        if (!eax88) {
            *reinterpret_cast<void***>(r14_84) = reinterpret_cast<void**>(0);
            r14_84 = really_start_request_indexname;
        }
        fun_55e0(r14_84, r15_78, rdx80, rcx);
        rdi89 = really_start_request_indexname;
        rsi12 = v13;
        eax90 = fun_53b0(rdi89, rsi12, rdx80, rcx, r8, r9);
        rsp15 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp86) - 8 + 8 - 8 + 8 - 8 + 8);
        if (eax90 >= 0) 
            break;
        r13_77 = r13_77 + 8;
        r14_28 = rbp82;
    } while (r13_77 != 48);
    goto addr_c4fa_34;
    rdi91 = really_start_request_indexname;
    r13_8 = v76;
    rdx92 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 8) + 96);
    *reinterpret_cast<int32_t*>(&rdx92 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rcx) = *reinterpret_cast<int32_t*>(r13_8 + 0x214);
    *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
    rsi93 = reinterpret_cast<void**>(rsp15 + 0x120);
    rax94 = expand_symlinks(rdi91, rsi93, rdx92, rcx, r8, r9, *reinterpret_cast<int32_t*>(&v76));
    rsp15 = rsp15 - 8 + 8;
    r15_7 = v75;
    if (!rax94 || *v95) {
        addr_c5a8_2:
        r9_25 = *reinterpret_cast<void***>(r13_8 + 0xd0);
        rdx26 = reinterpret_cast<void**>("Internal Error");
        r8_27 = reinterpret_cast<void**>("There was an unusual problem serving the requested URL '%.80s'.\n");
        rdi29 = r13_8;
    } else {
        r14_28 = rbp82;
        rax96 = fun_51d0(rax94, rsi93, rax94, rsi93);
        r12_11 = rax96;
        httpd_realloc_str(rbp82, r13_8 + 0x188, rax96, rcx, r8, r9);
        rdi97 = *reinterpret_cast<void***>(r13_8 + 0xf0);
        fun_50d0(rdi97, rax94, rax96, rdi97, rax94, rax96);
        rsp15 = rsp15 - 8 + 8 - 8 + 8 - 8 + 8;
        if (!(*reinterpret_cast<unsigned char*>(r13_8 + 0x248) & 5)) {
            rdi98 = r13_8 + 16;
            eax99 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r13_8 + 16));
            edx100 = 28;
            if (*reinterpret_cast<int16_t*>(&eax99) != 10) {
                edx100 = 0;
            }
            *reinterpret_cast<int32_t*>(&rsi101) = 16;
            *reinterpret_cast<int32_t*>(&rsi101 + 4) = 0;
            if (*reinterpret_cast<int16_t*>(&eax99) != 2) {
                *reinterpret_cast<int32_t*>(&rsi101) = edx100;
                *reinterpret_cast<int32_t*>(&rsi101 + 4) = 0;
            }
            eax102 = fun_52d0(rdi98, rsi101, 0x1b110, 0xc8, rdi98, rsi101, 0x1b110, 0xc8);
            if (!eax102) {
                if (!*reinterpret_cast<void***>(r13_8 + 24) && (!*reinterpret_cast<int32_t*>(r13_8 + 28) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r13_8 + 32) == 0xffff0000) && (eax103 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx104 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx104 | eax103))))) {
                    rax105 = fun_51d0(0x1b117, rsi101, 0x1b117, rsi101);
                    fun_5540(0x1b110, 0x1b117, rax105 + 1);
                }
            } else {
                *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
            }
            fun_5480(6, "%.80s URL \"%.80s\" resolves to a non-world-readable index file", 6, "%.80s URL \"%.80s\" resolves to a non-world-readable index file");
            r9_25 = *reinterpret_cast<void***>(r13_8 + 0xd0);
            rdx26 = reinterpret_cast<void**>("Forbidden");
            r8_27 = reinterpret_cast<void**>("The requested URL '%.80s' resolves to an index file that is not world-readable.\n");
            goto addr_c3e4_18;
        } else {
            addr_c77e_14:
            httpd_realloc_str(0x1b218, 0x1b220, r12_11, rcx, r8, r9);
            rdi106 = really_start_request_dirname;
            rsi107 = *reinterpret_cast<void***>(r14_28);
            fun_50d0(rdi106, rsi107, r12_11, rdi106, rsi107, r12_11);
            rbx108 = really_start_request_dirname;
            rax109 = fun_5250(rbx108, 47, r12_11, rcx);
            rsp15 = rsp15 - 8 + 8 - 8 + 8 - 8 + 8;
            if (!rax109) {
                *reinterpret_cast<void***>(rbx108) = reinterpret_cast<void**>(46);
                goto addr_c7c6_47;
            } else {
                rax109->f0 = 0;
                goto addr_c7c6_47;
            }
        }
    }
    addr_c5c7_49:
    esi30 = reinterpret_cast<void**>(0x1f4);
    goto addr_c5cc_19;
    addr_c7c6_47:
    rbx110 = really_start_request_dirname;
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 8) + 0x68)) {
        if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 8) + 100) || (rsi111 = *reinterpret_cast<void***>(r13_8 + 0x158), !*reinterpret_cast<void***>(rsi111))) {
            rsi111 = reinterpret_cast<void**>(".");
        }
        eax112 = auth_check2(r13_8, rsi111, r12_11, rcx, r8, r9);
        rsp15 = rsp15 - 8 + 8;
        ebp113 = eax112;
        if (eax112 == -1) 
            goto addr_c5d6_53;
        if (ebp113 == 1) 
            goto addr_c81c_55;
    }
    rsi111 = rbx110;
    eax114 = auth_check2(r13_8, rsi111, r12_11, rcx, r8, r9);
    rsp15 = rsp15 - 8 + 8;
    if (eax114 == -1) {
        addr_c5d1_20:
        ebp113 = -1;
        goto addr_c5d6_53;
    } else {
        addr_c81c_55:
        if (reinterpret_cast<int1_t>(r12_11 == 9)) {
            rdi115 = *reinterpret_cast<void***>(r14_28);
            rsi111 = reinterpret_cast<void**>(".htpasswd");
            eax116 = fun_5370(rdi115, ".htpasswd", rdi115, ".htpasswd");
            rsp15 = rsp15 - 8 + 8;
            if (eax116) 
                goto addr_c8b4_58; else 
                goto addr_c835_59;
        }
    }
    if (reinterpret_cast<unsigned char>(r12_11) <= reinterpret_cast<unsigned char>(9) || ((rbx117 = *reinterpret_cast<void***>(r14_28), rdi118 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_11) + reinterpret_cast<unsigned char>(rbx117) + 0xfffffffffffffff7), rsi111 = reinterpret_cast<void**>(".htpasswd"), eax119 = fun_5370(rdi118, ".htpasswd", rdi118, ".htpasswd"), rsp15 = rsp15 - 8 + 8, !!eax119) || *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r12_11) + reinterpret_cast<unsigned char>(rbx117) + 0xfffffffffffffff6) != 47)) {
        addr_c8b4_58:
        eax120 = check_referrer(r13_8, rsi111, r12_11, rcx, r8, r9);
        rsp15 = rsp15 - 8 + 8;
        ebp113 = -1;
        if (!eax120) {
            addr_c5d6_53:
            return ebp113;
        } else {
            rdi121 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 8) + 24);
            if (!rdi121 || (!(*reinterpret_cast<unsigned char*>(r13_8 + 0x248) & 1) || (rsi111 = *reinterpret_cast<void***>(r14_28), eax122 = match(rdi121, rsi111, r12_11, rcx, r8, r9), rsp15 = rsp15 - 8 + 8, eax122 == 0))) {
                if (*reinterpret_cast<unsigned char*>(r13_8 + 0x248) & 1) {
                    rdi123 = r13_8 + 16;
                    eax124 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r13_8 + 16));
                    edx125 = 28;
                    if (*reinterpret_cast<int16_t*>(&eax124) != 10) {
                        edx125 = 0;
                    }
                    *reinterpret_cast<int32_t*>(&rsi126) = 16;
                    *reinterpret_cast<int32_t*>(&rsi126 + 4) = 0;
                    if (*reinterpret_cast<int16_t*>(&eax124) != 2) {
                        *reinterpret_cast<int32_t*>(&rsi126) = edx125;
                        *reinterpret_cast<int32_t*>(&rsi126 + 4) = 0;
                    }
                    eax127 = fun_52d0(rdi123, rsi126, 0x1b110, 0xc8, rdi123, rsi126, 0x1b110, 0xc8);
                    if (!eax127) {
                        if (!*reinterpret_cast<void***>(r13_8 + 24) && (!*reinterpret_cast<int32_t*>(r13_8 + 28) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r13_8 + 32) == 0xffff0000) && (eax128 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx129 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx129 | eax128))))) {
                            rax130 = fun_51d0(0x1b117, rsi126, 0x1b117, rsi126);
                            fun_5540(0x1b110, 0x1b117, rax130 + 1);
                        }
                    } else {
                        *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
                    }
                    fun_5480(5, "%.80s URL \"%.80s\" is executable but isn't CGI", 5, "%.80s URL \"%.80s\" is executable but isn't CGI");
                    r9_131 = *reinterpret_cast<void***>(r13_8 + 0xd0);
                    r8_132 = reinterpret_cast<void**>("The requested URL '%.80s' resolves to a file which is marked executable but is not a CGI file; retrieving it is forbidden.\n");
                } else {
                    if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 0x100))) {
                        *reinterpret_cast<int32_t*>(&rax133) = *reinterpret_cast<int32_t*>(r13_8 + 0xb4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax133) + 4) = 0;
                        if (static_cast<uint32_t>(rax133 - 1) >= 2) {
                            eax134 = *reinterpret_cast<int32_t*>(&rax133) + 0xfffffffd;
                            if (eax134 > 3) {
                                r9_135 = reinterpret_cast<void**>("UNKNOWN");
                            } else {
                                r9_135 = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(0x13280 + eax134 * 4) + 0x13280);
                            }
                            rdi136 = r13_8;
                            goto addr_d261_78;
                        } else {
                            if (*reinterpret_cast<int32_t*>(r13_8 + 0x210) && (*reinterpret_cast<void***>(r13_8 + 0x220) == 0xffffffffffffffff || reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_8 + 0x220)) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_8 + 0x260)))) {
                                *reinterpret_cast<void***>(r13_8 + 0x220) = *reinterpret_cast<void***>(r13_8 + 0x260) + 0xffffffffffffffff;
                            }
                            rbx137 = *reinterpret_cast<void***>(r14_28);
                            rax138 = fun_51d0(rbx137, rsi111, rbx137, rsi111);
                            rsp15 = rsp15 - 8 + 8;
                            rax139 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax138) + reinterpret_cast<unsigned char>(rbx137));
                            rdx140 = g193d8;
                            rcx141 = enc_tab;
                            v142 = rcx141;
                            rsi143 = g193f8;
                            rcx144 = g193f0;
                            v145 = rcx144;
                            rcx146 = g19418;
                            rdi147 = g19410;
                            v148 = rdi147;
                            v149 = rcx146;
                            v150 = reinterpret_cast<void*>(~reinterpret_cast<unsigned char>(rcx146));
                            v151 = rsi143;
                            v152 = reinterpret_cast<void*>(~reinterpret_cast<unsigned char>(rsi143));
                            v153 = rdx140;
                            rbp154 = reinterpret_cast<void*>(~reinterpret_cast<unsigned char>(rdx140));
                            v155 = 0;
                            *reinterpret_cast<int32_t*>(&r14_156) = 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_156) + 4) = 0;
                            rcx157 = reinterpret_cast<void**>("text/plain; charset=%s");
                            v158 = reinterpret_cast<void**>("text/plain; charset=%s");
                            v159 = r15_7;
                            while (1) {
                                r12_160 = rax139;
                                *reinterpret_cast<int32_t*>(&r15_161) = 0;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_161) + 4) = 0;
                                do {
                                    rax162 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r12_160) + reinterpret_cast<uint64_t>(r15_161) + 0xffffffffffffffff);
                                    if (reinterpret_cast<unsigned char>(rax162) < reinterpret_cast<unsigned char>(rbx137)) 
                                        goto addr_d321_84;
                                    r15_161 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r15_161) + 0xffffffffffffffff);
                                } while (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax162) == 46));
                                rdi163 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r12_160) + reinterpret_cast<uint64_t>(r15_161) + 1);
                                v164 = rdi163;
                                if (rbp154 != r15_161 || (eax165 = fun_5440(v164, v142, v153), rsp15 = rsp15 - 8 + 8, rdi163 = v164, !!eax165)) {
                                    if (v152 != r15_161 || (eax166 = fun_5440(v164, v145, v151), rsp15 = rsp15 - 8 + 8, rdi163 = v164, !!eax166)) {
                                        if (v150 != r15_161) 
                                            goto addr_d290_89;
                                        eax167 = fun_5440(rdi163, v148, v149);
                                        rsp15 = rsp15 - 8 + 8;
                                        *reinterpret_cast<int32_t*>(&rcx157) = 2;
                                        *reinterpret_cast<int32_t*>(&rcx157 + 4) = 0;
                                        if (eax167) 
                                            goto addr_cc05_91;
                                    } else {
                                        *reinterpret_cast<int32_t*>(&rcx157) = 1;
                                        *reinterpret_cast<int32_t*>(&rcx157 + 4) = 0;
                                    }
                                } else {
                                    *reinterpret_cast<int32_t*>(&rcx157) = 0;
                                    *reinterpret_cast<int32_t*>(&rcx157 + 4) = 0;
                                }
                                rax139 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_160) + reinterpret_cast<uint64_t>(r15_161));
                                rbp154 = rbp154;
                                if (*reinterpret_cast<uint32_t*>(&v155) > 99) 
                                    continue;
                                rdx168 = v155;
                                *reinterpret_cast<int32_t*>(&rax169) = *reinterpret_cast<int32_t*>(&rdx168);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax169) + 4) = 0;
                                *reinterpret_cast<int32_t*>(rsp15 + rax169 * 4 + 0x1b0) = *reinterpret_cast<int32_t*>(&rcx157);
                                *reinterpret_cast<int32_t*>(&rdx170) = *reinterpret_cast<int32_t*>(&rdx168) + 1;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx170) + 4) = 0;
                                v155 = rdx170;
                                ++r14_156;
                                rax139 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_160) + reinterpret_cast<uint64_t>(r15_161));
                            }
                        }
                    } else {
                        rdi171 = r13_8 + 16;
                        eax172 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r13_8 + 16));
                        edx173 = 28;
                        if (*reinterpret_cast<int16_t*>(&eax172) != 10) {
                            edx173 = 0;
                        }
                        *reinterpret_cast<int32_t*>(&rsi174) = 16;
                        *reinterpret_cast<int32_t*>(&rsi174 + 4) = 0;
                        if (*reinterpret_cast<int16_t*>(&eax172) != 2) {
                            *reinterpret_cast<int32_t*>(&rsi174) = edx173;
                            *reinterpret_cast<int32_t*>(&rsi174 + 4) = 0;
                        }
                        eax175 = fun_52d0(rdi171, rsi174, 0x1b110, 0xc8, rdi171, rsi174, 0x1b110, 0xc8);
                        if (!eax175) {
                            if (!*reinterpret_cast<void***>(r13_8 + 24) && (!*reinterpret_cast<int32_t*>(r13_8 + 28) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r13_8 + 32) == 0xffff0000) && (eax176 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx177 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx177 | eax176))))) {
                                rax178 = fun_51d0(0x1b117, rsi174, 0x1b117, rsi174);
                                fun_5540(0x1b110, 0x1b117, rax178 + 1);
                            }
                        } else {
                            *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
                        }
                        fun_5480(6, "%.80s URL \"%.80s\" has pathinfo but isn't CGI", 6, "%.80s URL \"%.80s\" has pathinfo but isn't CGI");
                        r9_131 = *reinterpret_cast<void***>(r13_8 + 0xd0);
                        r8_132 = reinterpret_cast<void**>("The requested URL '%.80s' resolves to a file plus CGI-style pathinfo, but the file is not a valid CGI file.\n");
                    }
                }
            } else {
                if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 8) + 32) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 8) + 36)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 8) + 32))) {
                    *reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 8) + 36) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 8) + 36) + 1;
                    ebx179 = *reinterpret_cast<void***>(r13_8 + 0x2c0);
                    rdi180 = ebx179;
                    *reinterpret_cast<int32_t*>(&rdi180 + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rsi181) = 3;
                    *reinterpret_cast<int32_t*>(&rsi181 + 4) = 0;
                    rax182 = fun_5160(rdi180, 3);
                    rsp183 = reinterpret_cast<void*>(rsp15 - 8 + 8);
                    if (*reinterpret_cast<uint32_t*>(&rax182) != 0xffffffff && (*reinterpret_cast<uint32_t*>(&rax182) & 0xfffff7ff) != *reinterpret_cast<uint32_t*>(&rax182)) {
                        rdi180 = ebx179;
                        *reinterpret_cast<int32_t*>(&rdi180 + 4) = 0;
                        *reinterpret_cast<int32_t*>(&rsi181) = 4;
                        *reinterpret_cast<int32_t*>(&rsi181 + 4) = 0;
                        fun_5160(rdi180, 4);
                        rsp183 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp183) - 8 + 8);
                    }
                    eax184 = fun_56b0(rdi180, rsi181);
                    rsp185 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp183) - 8 + 8);
                    if (reinterpret_cast<int32_t>(eax184) < reinterpret_cast<int32_t>(0)) 
                        goto addr_d02a_109; else 
                        goto addr_ce86_110;
                } else {
                    rdx186 = httpd_err503title;
                    r8_187 = httpd_err503form;
                    r9_188 = *reinterpret_cast<void***>(r13_8 + 0xd0);
                    httpd_send_err(r13_8, 0x1f7, rdx186, 0x13553, r8_187, r9_188);
                    goto addr_c5d6_53;
                }
            }
        }
    } else {
        addr_c835_59:
        rdi189 = r13_8 + 16;
        eax190 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r13_8 + 16));
        edx191 = 28;
        if (*reinterpret_cast<int16_t*>(&eax190) != 10) {
            edx191 = 0;
            goto addr_c84c_113;
        }
    }
    httpd_send_err(r13_8, 0x193, "Forbidden", 0x13553, r8_132, r9_131);
    goto addr_c5d6_53;
    addr_d261_78:
    httpd_send_err(rdi136, 0x1f5, "Not Implemented", 0x13553, "The requested method '%.80s' is not implemented by this server.\n", r9_135);
    goto addr_c5d6_53;
    addr_d321_84:
    *reinterpret_cast<void***>(r13_8 + 0x1f8) = v158;
    v192 = r13_8;
    *reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_8 + 0xf8)) = reinterpret_cast<void**>(0);
    if (*reinterpret_cast<uint32_t*>(&v155)) {
        r13_193 = v192 + 0xf8;
        v194 = v192 + 0x190;
        *reinterpret_cast<int32_t*>(&r12_195) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_195) + 4) = 0;
        do {
            *reinterpret_cast<int32_t*>(&rax196) = static_cast<int32_t>(r14_156 - 2);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax196) + 4) = 0;
            r15_197 = static_cast<int64_t>(*reinterpret_cast<int32_t*>(rsp15 + rax196 * 4 + 0x1b0)) << 5;
            rbp198 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_195) + 1);
            rdx199 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(r15_197 + 0x193d0 + 24)) + reinterpret_cast<uint64_t>(rbp198));
            httpd_realloc_str(r13_193, v194, rdx199, rcx157, r8, r9);
            rdi200 = *reinterpret_cast<void***>(r13_193);
            if (*reinterpret_cast<void***>(rdi200)) {
                *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(rdi200) + reinterpret_cast<uint64_t>(r12_195)) = 44;
                rdi200 = *reinterpret_cast<void***>(r13_193);
            } else {
                rbp198 = r12_195;
            }
            rsi201 = *reinterpret_cast<void***>(r15_197 + 0x193d0 + 16);
            fun_50d0(reinterpret_cast<unsigned char>(rdi200) + reinterpret_cast<uint64_t>(rbp198), rsi201, rdx199);
            rsp15 = rsp15 - 8 + 8 - 8 + 8;
            --r14_156;
            r12_195 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbp198) + reinterpret_cast<uint64_t>(*reinterpret_cast<void**>(r15_197 + 0x193d0 + 24)));
        } while (r14_156 > 1);
    }
    rbx202 = v192;
    if (*reinterpret_cast<int32_t*>(rbx202 + 0xb4) == 2) 
        goto addr_d41d_121;
    rcx203 = *reinterpret_cast<void***>(rbx202 + 0x1e0);
    if (rcx203 == 0xffffffffffffffff || reinterpret_cast<signed char>(rcx203) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx202 + 0x288))) {
        rdi204 = *reinterpret_cast<void***>(rbx202 + 0xf0);
        rax205 = mmc_map(rdi204, v13, v159, rcx203, r8, r9);
        *reinterpret_cast<void***>(rbx202 + 0x2c8) = rax205;
        if (!rax205) {
            addr_d45d_124:
            r9_25 = *reinterpret_cast<void***>(rbx202 + 0xd0);
            rdx26 = reinterpret_cast<void**>("Internal Error");
            r8_27 = reinterpret_cast<void**>("There was an unusual problem serving the requested URL '%.80s'.\n");
            rdi29 = rbx202;
            goto addr_c5c7_49;
        } else {
            addr_d41d_121:
            rcx206 = *reinterpret_cast<void***>(rbx202 + 0xf8);
            r9_207 = *reinterpret_cast<void***>(rbx202 + 0x1f8);
            rdx208 = reinterpret_cast<void**>("OK");
            rdi209 = rbx202;
            esi210 = reinterpret_cast<void**>(0xc8);
            v211 = *reinterpret_cast<void***>(rbx202 + 0x288);
            v212 = *reinterpret_cast<void***>(rbx202 + 0x260);
        }
    } else {
        rcx206 = *reinterpret_cast<void***>(rbx202 + 0xf8);
        r9_207 = *reinterpret_cast<void***>(rbx202 + 0x1f8);
        rdx208 = reinterpret_cast<void**>("Not Modified");
        rdi209 = rbx202;
        esi210 = reinterpret_cast<void**>(0x130);
        v211 = *reinterpret_cast<void***>(rbx202 + 0x288);
        v212 = reinterpret_cast<void**>(0xff);
    }
    addr_d44d_126:
    send_mime(rdi209, esi210, rdx208, rcx206, 0x13553, r9_207, v212, v211);
    ebp113 = 0;
    goto addr_c5d6_53;
    addr_d290_89:
    v149 = reinterpret_cast<void**>(~reinterpret_cast<uint64_t>(r15_161));
    addr_d29d_127:
    *reinterpret_cast<int32_t*>(&r12_213) = 0xc0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_213) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r15_214) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_214) + 4) = 0;
    do {
        eax215 = static_cast<uint32_t>(r12_213 + r15_214);
        ebx216 = reinterpret_cast<int32_t>((eax215 >> 31) + eax215) >> 1;
        rbp217 = reinterpret_cast<struct s5*>(static_cast<int64_t>(ebx216) << 5);
        rsi218 = rbp217->f19430;
        eax219 = fun_5440(rdi163, rsi218, v149);
        rsp15 = rsp15 - 8 + 8;
        if (eax219 < 0) {
            *reinterpret_cast<int32_t*>(&r12_213) = ebx216 - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_213) + 4) = 0;
            rdi163 = v164;
        } else {
            rdi163 = v164;
            if (eax219) {
                addr_d308_131:
                *reinterpret_cast<int32_t*>(&r15_214) = ebx216 + 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_214) + 4) = 0;
            } else {
                rcx157 = reinterpret_cast<void**>(0x19430);
                if (reinterpret_cast<unsigned char>(v149) >= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp217) + reinterpret_cast<unsigned char>(0x19430) + 8))) {
                    if (reinterpret_cast<unsigned char>(v149) <= reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<int64_t>(rbp217) + reinterpret_cast<unsigned char>(0x19430) + 8))) 
                        break; else 
                        goto addr_d308_131;
                } else {
                    *reinterpret_cast<int32_t*>(&r12_213) = ebx216 - 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_213) + 4) = 0;
                }
            }
        }
    } while (*reinterpret_cast<int32_t*>(&r12_213) >= *reinterpret_cast<int32_t*>(&r15_214));
    goto addr_d321_84;
    v158 = (&rbp217->f19430)[16];
    goto addr_d321_84;
    addr_cc05_91:
    rdi163 = rdi163;
    goto addr_d29d_127;
    addr_d02a_109:
    fun_5480(3, "fork - %m");
    r9_220 = *reinterpret_cast<void***>(r13_8 + 0xd0);
    httpd_send_err(r13_8, 0x1f4, "Internal Error", 0x13553, "There was an unusual problem serving the requested URL '%.80s'.\n", r9_220);
    goto addr_c5d6_53;
    addr_ce86_110:
    if (!eax184) {
        v75 = r14_28;
        sub_process = 1;
        v76 = r13_8;
        rbx221 = *reinterpret_cast<void***>(r13_8 + 8);
        if (*reinterpret_cast<void***>(rbx221 + 72) != 0xffffffff) {
            fun_52a0();
            rsp185 = rsp185 - 8 + 8;
            *reinterpret_cast<void***>(rbx221 + 72) = reinterpret_cast<void**>(0xffffffff);
        }
        if (*reinterpret_cast<void***>(rbx221 + 76) != 0xffffffff) {
            fun_52a0();
            rsp185 = rsp185 - 8 + 8;
            *reinterpret_cast<void***>(rbx221 + 76) = reinterpret_cast<void**>(0xffffffff);
        }
        rdi222 = *reinterpret_cast<void***>(v76 + 0x2c0);
        *reinterpret_cast<int32_t*>(&rdi222 + 4) = 0;
        fun_5160(rdi222, 2);
        fun_5060(rdi222, 2);
        rsp223 = rsp185 - 8 + 8 - 8 + 8;
        if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(v76 + 0x2c0)) <= reinterpret_cast<unsigned char>(2) && (eax224 = fun_5210(), rsp223 = rsp223 - 8 + 8, reinterpret_cast<signed char>(eax224) >= reinterpret_cast<signed char>(0))) {
            *reinterpret_cast<void***>(v76 + 0x2c0) = eax224;
        }
        rax225 = build_env("PATH=%s", "/usr/local/bin:/usr/ucb:/bin:/usr/bin");
        make_envp_envp = rax225;
        rax226 = build_env("SERVER_SOFTWARE=%s", "thttpd/2.29 23May2018");
        rsp227 = rsp223 - 8 + 8 - 8 + 8;
        g1b308 = rax226;
        if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(v76 + 8) + 100) && ((rsi228 = *reinterpret_cast<void***>(v76 + 0x200), !!rsi228) && *reinterpret_cast<void***>(rsi228)) || ((rsi228 = *reinterpret_cast<void***>(v76 + 0x150), !!rsi228) && *reinterpret_cast<void***>(rsi228) || ((rsi228 = *reinterpret_cast<void***>(v76 + 0x148), !!rsi228) && *reinterpret_cast<void***>(rsi228) || (rsi228 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v76 + 8) + 8), *reinterpret_cast<uint32_t*>(&r12_11) = 2, *reinterpret_cast<int32_t*>(&r12_11 + 4) = 0, !!rsi228)))) {
            rax229 = build_env("SERVER_NAME=%s", rsi228);
            rsp227 = rsp227 - 8 + 8;
            g1b310 = rax229;
            *reinterpret_cast<uint32_t*>(&r12_11) = 3;
            *reinterpret_cast<int32_t*>(&r12_11 + 4) = 0;
        }
        *reinterpret_cast<uint32_t*>(&rbp230) = *reinterpret_cast<uint32_t*>(&r12_11);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp230) + 4) = 0;
        *reinterpret_cast<int64_t*>(0x1b300 + rbp230 * 8) = reinterpret_cast<int64_t>("GATEWAY_INTERFACE=CGI/1.1");
        rsi231 = *reinterpret_cast<void***>(v76 + 0xe0);
        rax232 = build_env("SERVER_PROTOCOL=%s", rsi231);
        rsp233 = reinterpret_cast<void*>(rsp227 - 8 + 8);
        *reinterpret_cast<void***>(0x1b300 + rbp230 * 8 + 8) = rax232;
        *reinterpret_cast<uint32_t*>(&rcx234) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(v76 + 8) + 16));
        *reinterpret_cast<int32_t*>(&rcx234 + 4) = 0;
        r14_235 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp233) + 0x1b0);
        my_snprintf(r14_235, 0x100, "%d", rcx234, r8, r9, v76, v13, v236, v75, v237, v238, v239, v240, v241);
        rax242 = build_env("SERVER_PORT=%s", r14_235, "SERVER_PORT=%s", r14_235);
        rsp243 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp233) - 8 + 8 - 8 + 8);
        *reinterpret_cast<int32_t*>(&r14_28) = static_cast<int32_t>(reinterpret_cast<uint64_t>(r12_11 + 3));
        *reinterpret_cast<void***>(0x1b300 + rbp230 * 8 + 16) = rax242;
        eax244 = *reinterpret_cast<int32_t*>(v76 + 0xb4) + 0xffffffff;
        if (eax244 > 5) 
            goto addr_d679_147;
        rsi245 = *reinterpret_cast<void***>(0x18da0 + reinterpret_cast<int32_t>(eax244) * 8);
        goto addr_d680_149;
    }
    ebp113 = 0;
    fun_5480(7, "spawned CGI process %d for file '%.200s'", 7, "spawned CGI process %d for file '%.200s'");
    *reinterpret_cast<uint32_t*>(&rdx246) = eax184;
    *reinterpret_cast<int32_t*>(&rdx246 + 4) = 0;
    rax247 = tmr_create(0, cgi_kill, rdx246, 0x7530, 0, r9);
    rsp15 = rsp185 - 8 + 8 - 8 + 8;
    if (rax247) 
        goto addr_cec9_151;
    rsi248 = reinterpret_cast<void**>("tmr_create(cgi_kill child) failed");
    addr_d663_153:
    *reinterpret_cast<int32_t*>(&rdi249) = 2;
    *reinterpret_cast<int32_t*>(&rdi249 + 4) = 0;
    goto addr_d668_154;
    addr_cec9_151:
    *reinterpret_cast<void***>(r13_8 + 0xb8) = reinterpret_cast<void**>(0xc8);
    *reinterpret_cast<void***>(r13_8 + 0xc8) = reinterpret_cast<void**>(0x61a8);
    *reinterpret_cast<int32_t*>(r13_8 + 0x22c) = 0;
    goto addr_c5d6_53;
    addr_c84c_113:
    *reinterpret_cast<int32_t*>(&rsi250) = 16;
    *reinterpret_cast<int32_t*>(&rsi250 + 4) = 0;
    if (*reinterpret_cast<int16_t*>(&eax190) != 2) {
        *reinterpret_cast<int32_t*>(&rsi250) = edx191;
        *reinterpret_cast<int32_t*>(&rsi250 + 4) = 0;
    }
    eax251 = fun_52d0(rdi189, rsi250, 0x1b110, 0xc8, rdi189, rsi250, 0x1b110, 0xc8);
    if (!eax251) {
        if (!*reinterpret_cast<void***>(r13_8 + 24) && (!*reinterpret_cast<int32_t*>(r13_8 + 28) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r13_8 + 32) == 0xffff0000) && (eax252 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx253 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx253 | eax252))))) {
            rax254 = fun_51d0(0x1b117, rsi250, 0x1b117, rsi250);
            fun_5540(0x1b110, 0x1b117, rax254 + 1);
        }
    } else {
        *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
    }
    fun_5480(5, "%.80s URL \"%.80s\" tried to retrieve an auth file", 5, "%.80s URL \"%.80s\" tried to retrieve an auth file");
    r9_25 = *reinterpret_cast<void***>(r13_8 + 0xd0);
    rdx26 = reinterpret_cast<void**>("Forbidden");
    r8_27 = reinterpret_cast<void**>("The requested URL '%.80s' is an authorization file, retrieving it is not permitted.\n");
    goto addr_c3e4_18;
    addr_c4fa_34:
    rbx202 = v76;
    if (*reinterpret_cast<unsigned char*>(rbx202 + 0x248) & 4) {
        r15_255 = *reinterpret_cast<void***>(rbx202 + 0xf0);
        if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx202 + 8) + 0x68)) {
            addr_c628_162:
            rsi256 = r15_255;
            eax257 = auth_check2(rbx202, rsi256, rdx80, rcx, r8, r9);
            rsp15 = rsp15 - 8 + 8;
            if (eax257 == -1) 
                goto addr_c5d1_20;
        } else {
            if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx202 + 8) + 100) || (rsi256 = *reinterpret_cast<void***>(rbx202 + 0x158), !*reinterpret_cast<void***>(rsi256))) {
                rsi256 = reinterpret_cast<void**>(".");
            }
            eax258 = auth_check2(rbx202, rsi256, rdx80, rcx, r8, r9);
            rsp15 = rsp15 - 8 + 8;
            ebp113 = eax258;
            if (eax258 == -1) 
                goto addr_c5d6_53;
            if (ebp113 != 1) 
                goto addr_c628_162;
        }
        eax259 = check_referrer(rbx202, rsi256, rdx80, rcx, r8, r9);
        rsp15 = rsp15 - 8 + 8;
        ebp113 = -1;
        if (!eax259) 
            goto addr_c5d6_53;
        rdi260 = *reinterpret_cast<void***>(r14_28);
        rax261 = fun_51a0(rdi260, rsi256, rdx80);
        if (!rax261) {
            fun_5480(3, "opendir %.80s - %m", 3, "opendir %.80s - %m");
            r9_25 = *reinterpret_cast<void***>(rbx202 + 0xd0);
            rdx26 = reinterpret_cast<void**>("Not Found");
            r8_27 = reinterpret_cast<void**>("The requested URL '%.80s' was not found on this server.\n");
            rdi29 = rbx202;
            esi30 = reinterpret_cast<void**>(0x194);
            goto addr_c5cc_19;
        } else {
            r15_262 = rax261;
            if (*reinterpret_cast<int32_t*>(rbx202 + 0xb4) == 1) {
                if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx202 + 8) + 32) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx202 + 8) + 36)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx202 + 8) + 32))) {
                    *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx202 + 8) + 36) = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rbx202 + 8) + 36) + 1;
                    eax263 = fun_56b0(rdi260, rsi256);
                    rsp264 = rsp15 - 8 + 8 - 8 + 8;
                    if (reinterpret_cast<int32_t>(eax263) < reinterpret_cast<int32_t>(0)) {
                        fun_5480(3, "fork - %m");
                        fun_5300(r15_262, "fork - %m");
                        goto addr_d45d_124;
                    }
                    if (eax263) 
                        goto addr_d1d1_175;
                } else {
                    fun_5300(r15_262, rsi256);
                    rdx26 = httpd_err503title;
                    r8_27 = httpd_err503form;
                    r9_25 = *reinterpret_cast<void***>(rbx202 + 0xd0);
                    rdi29 = rbx202;
                    esi30 = reinterpret_cast<void**>(0x1f7);
                    goto addr_c5cc_19;
                }
            } else {
                if (*reinterpret_cast<int32_t*>(rbx202 + 0xb4) != 2) {
                    fun_5300(r15_262, rsi256, r15_262, rsi256);
                    eax265 = *reinterpret_cast<int32_t*>(rbx202 + 0xb4) + 0xffffffff;
                    if (eax265 > 5) {
                        r9_135 = reinterpret_cast<void**>("UNKNOWN");
                    } else {
                        r9_135 = *reinterpret_cast<void***>(0x18da0 + reinterpret_cast<int32_t>(eax265) * 8);
                    }
                    ebp113 = -1;
                    rdi136 = rbx202;
                    goto addr_d261_78;
                } else {
                    fun_5300(r15_262, rsi256, r15_262, rsi256);
                    rdx208 = reinterpret_cast<void**>("OK");
                    rcx206 = reinterpret_cast<void**>(0x13553);
                    r9_207 = reinterpret_cast<void**>("text/html; charset=%s");
                    rdi209 = rbx202;
                    esi210 = reinterpret_cast<void**>(0xc8);
                    v211 = *reinterpret_cast<void***>(rbx202 + 0x288);
                    v212 = reinterpret_cast<void**>(0xff);
                    goto addr_d44d_126;
                }
            }
        }
    } else {
        rdi266 = rbx202 + 16;
        eax267 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rbx202 + 16));
        edx268 = 28;
        if (*reinterpret_cast<int16_t*>(&eax267) != 10) {
            edx268 = 0;
        }
        *reinterpret_cast<int32_t*>(&rsi269) = 16;
        *reinterpret_cast<int32_t*>(&rsi269 + 4) = 0;
        if (*reinterpret_cast<int16_t*>(&eax267) != 2) {
            *reinterpret_cast<int32_t*>(&rsi269) = edx268;
            *reinterpret_cast<int32_t*>(&rsi269 + 4) = 0;
        }
        eax270 = fun_52d0(rdi266, rsi269, 0x1b110, 0xc8, rdi266, rsi269, 0x1b110, 0xc8);
        if (!eax270) {
            if (!*reinterpret_cast<void***>(rbx202 + 24) && (!*reinterpret_cast<int32_t*>(rbx202 + 28) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx202 + 32) == 0xffff0000) && (eax271 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx272 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx272 | eax271))))) {
                rax273 = fun_51d0(0x1b117, rsi269, 0x1b117, rsi269);
                fun_5540(0x1b110, 0x1b117, rax273 + 1);
            }
        } else {
            *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
        }
        fun_5480(6, "%.80s URL \"%.80s\" tried to index a directory with indexing disabled", 6, "%.80s URL \"%.80s\" tried to index a directory with indexing disabled");
        r9_25 = *reinterpret_cast<void***>(rbx202 + 0xd0);
        rdx26 = reinterpret_cast<void**>("Forbidden");
        r8_27 = reinterpret_cast<void**>("The requested URL '%.80s' resolves to a directory that has indexing disabled.\n");
        rdi29 = rbx202;
        esi30 = reinterpret_cast<void**>(0x193);
        goto addr_c5cc_19;
    }
    sub_process = 1;
    rbp274 = *reinterpret_cast<void***>(rbx202 + 8);
    if (*reinterpret_cast<void***>(rbp274 + 72) != 0xffffffff) {
        fun_52a0();
        rsp264 = rsp264 - 8 + 8;
        *reinterpret_cast<void***>(rbp274 + 72) = reinterpret_cast<void**>(0xffffffff);
    }
    if (*reinterpret_cast<void***>(rbp274 + 76) != 0xffffffff) {
        fun_52a0();
        rsp264 = rsp264 - 8 + 8;
        *reinterpret_cast<void***>(rbp274 + 76) = reinterpret_cast<void**>(0xffffffff);
    }
    r9 = reinterpret_cast<void**>("text/html; charset=%s");
    r8_275 = reinterpret_cast<void**>(0x13553);
    v276 = *reinterpret_cast<void***>(v76 + 0x288);
    send_mime(v76, 0xc8, "OK", 0x13553, 0x13553, "text/html; charset=%s", 0xff, v276);
    httpd_write_response(v76, 0xc8, "OK", 0x13553, 0x13553, "text/html; charset=%s", v76);
    fun_5460(10, 0xc8, "OK", 0x13553, 0x13553, "text/html; charset=%s");
    *reinterpret_cast<void***>(&rdi277) = *reinterpret_cast<void***>(v76 + 0x2c0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi277) + 4) = 0;
    rax278 = fun_54e0(rdi277, "w", "OK");
    rsp279 = rsp264 - 8 - 8 - 8 + 8 + 16 - 8 + 8 - 8 + 8 - 8 + 8;
    v280 = rax278;
    if (rax278) 
        goto addr_e083_197;
    fun_5480(3, "fdopen - %m", 3, "fdopen - %m");
    r9 = *reinterpret_cast<void***>(v76 + 0xd0);
    httpd_send_err(v76, 0x1f4, "Internal Error", 0x13553, "There was an unusual problem serving the requested URL '%.80s'.\n", r9);
    httpd_write_response(v76, 0x1f4, "Internal Error", 0x13553, "There was an unusual problem serving the requested URL '%.80s'.\n", r9, v76);
    fun_5300(r15_262, 0x1f4, r15_262, 0x1f4);
    fun_5620();
    rsp15 = rsp279 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8;
    rsi248 = reinterpret_cast<void**>("tmr_create(cgi_kill ls) failed");
    goto addr_d663_153;
    addr_d1d1_175:
    *reinterpret_cast<uint32_t*>(&r12_11) = eax263;
    *reinterpret_cast<int32_t*>(&r12_11 + 4) = 0;
    fun_5300(r15_262, rsi256);
    ebp113 = 0;
    fun_5480(7, "spawned indexing process %d for directory '%.200s'", 7, "spawned indexing process %d for directory '%.200s'");
    *reinterpret_cast<uint32_t*>(&rdx281) = *reinterpret_cast<uint32_t*>(&r12_11);
    *reinterpret_cast<int32_t*>(&rdx281 + 4) = 0;
    rax282 = tmr_create(0, cgi_kill, rdx281, 0x7530, 0, r9);
    rsp15 = rsp264 - 8 + 8 - 8 + 8 - 8 + 8;
    if (rax282) {
        *reinterpret_cast<void***>(rbx202 + 0xb8) = reinterpret_cast<void**>(0xc8);
        *reinterpret_cast<void***>(rbx202 + 0xc8) = reinterpret_cast<void**>(0x61a8);
        *reinterpret_cast<int32_t*>(rbx202 + 0x22c) = 0;
        goto addr_c5d6_53;
    }
    addr_c2d7_17:
    r9_25 = *reinterpret_cast<void***>(r13_8 + 0xd0);
    rdx26 = reinterpret_cast<void**>("Not Found");
    r8_27 = reinterpret_cast<void**>("The requested URL '%.80s' was not found on this server.\n");
    rdi29 = r13_8;
    esi30 = reinterpret_cast<void**>(0x194);
    goto addr_c5cc_19;
    addr_e6a2_201:
    goto *reinterpret_cast<int32_t*>(0x12d70 + rax283 * 4) + 0x12d70;
    while (1) {
        *reinterpret_cast<int32_t*>(&rsi284) = 2;
        *reinterpret_cast<int32_t*>(&rsi284 + 4) = 0;
        fun_5210();
        rsp285 = rsp285 - 8 + 8;
        do {
            while (1) {
                fun_5460(10, rsi284, rdx286, rcx287, r8_275, r9);
                r14_288 = *reinterpret_cast<void***>(v75);
                rax289 = fun_5670(r14_288, rsi284, rdx286, rcx287, r8_275, r9);
                rsp290 = reinterpret_cast<void*>(rsp285 - 8 + 8 - 8 + 8);
                if (rax289 && (rax291 = fun_5250(rax289, 47, rdx286, rcx287, rax289, 47, rdx286, rcx287), rsp290 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp290) - 8 + 8), !!rax291)) {
                    r14_288 = reinterpret_cast<void**>(&rax291->f1);
                    rax291->f0 = 0;
                    fun_51e0(rax289, 47, rdx286, rcx287, r8_275, r9);
                    rsp290 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp290) - 8 + 8);
                }
                fun_5520(13);
                fun_5360(r14_288, v13, 0x1b300, rcx287, r8_275, r9);
                fun_5480(3, "execve %.80s - %m", 3, "execve %.80s - %m");
                r9 = *reinterpret_cast<void***>(v76 + 0xd0);
                rdx286 = reinterpret_cast<void**>("Internal Error");
                rcx287 = reinterpret_cast<void**>(0x13553);
                r8_275 = reinterpret_cast<void**>("There was an unusual problem serving the requested URL '%.80s'.\n");
                rsi292 = reinterpret_cast<void**>(0x1f4);
                *reinterpret_cast<int32_t*>(&rsi292 + 4) = 0;
                httpd_send_err(v76, 0x1f4, "Internal Error", 0x13553, "There was an unusual problem serving the requested URL '%.80s'.\n", r9);
                httpd_write_response(v76, 0x1f4, "Internal Error", 0x13553, "There was an unusual problem serving the requested URL '%.80s'.\n", r9, v76);
                fun_50c0(1, 0x1f4, "Internal Error", 0x13553, "There was an unusual problem serving the requested URL '%.80s'.\n", r9);
                rsp285 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp290) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
                goto addr_df03_206;
                addr_e32c_207:
                fun_52a0();
                rsp285 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp293) - 8 + 8);
                if (v294 == 1) 
                    goto addr_e365_208;
                *reinterpret_cast<int32_t*>(&rsi284) = 1;
                *reinterpret_cast<int32_t*>(&rsi284 + 4) = 0;
                fun_5210();
                rsp285 = rsp285 - 8 + 8;
                if (v295 == 2) 
                    continue;
                addr_e365_208:
                *reinterpret_cast<int32_t*>(&rsi284) = 2;
                *reinterpret_cast<int32_t*>(&rsi284 + 4) = 0;
                fun_5210();
                rsp285 = rsp285 - 8 + 8;
                *reinterpret_cast<int32_t*>(&rdi296) = v297;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi296) + 4) = 0;
                if (static_cast<uint32_t>(rdi296 - 3) > 0xfffffffd) 
                    continue;
                fun_52a0();
                rsp285 = rsp285 - 8 + 8;
                continue;
                while (1) {
                    addr_e031_211:
                    rsi298 = reinterpret_cast<void**>("fork - %m");
                    while (1) {
                        fun_5480(3, rsi298, 3, rsi298);
                        r9 = *reinterpret_cast<void***>(v76 + 0xd0);
                        r8_275 = reinterpret_cast<void**>("There was an unusual problem serving the requested URL '%.80s'.\n");
                        httpd_send_err(v76, 0x1f4, "Internal Error", 0x13553, "There was an unusual problem serving the requested URL '%.80s'.\n", r9);
                        httpd_write_response(v76, 0x1f4, "Internal Error", 0x13553, "There was an unusual problem serving the requested URL '%.80s'.\n", r9, v76);
                        fun_5620();
                        rsp279 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp293) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
                        addr_e083_197:
                        rcx299 = *reinterpret_cast<void***>(v76 + 0xd0);
                        rsi300 = reinterpret_cast<void**>("<!DOCTYPE html PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">\n\n<html>\n\n  <head>\n    <meta http-equiv=\"Content-type\" content=\"text/html;charset=UTF-8\">\n    <title>Index of %.80s</title>\n  </head>\n\n  <body bgcolor=\"#99cc99\" text=\"#000000\" link=\"#2020ff\" vlink=\"#4040cc\">\n\n    <h2>Index of %.80s</h2>\n\n    <pre>\nmode  links    bytes  last-changed  name\n    <hr>");
                        *reinterpret_cast<int32_t*>(&rbx301) = 0;
                        rdx302 = rcx299;
                        fun_53a0(v280, "<!DOCTYPE html PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">\n\n<html>\n\n  <head>\n    <meta http-equiv=\"Content-type\" content=\"text/html;charset=UTF-8\">\n    <title>Index of %.80s</title>\n  </head>\n\n  <body bgcolor=\"#99cc99\" text=\"#000000\" link=\"#2020ff\" vlink=\"#4040cc\">\n\n    <h2>Index of %.80s</h2>\n\n    <pre>\nmode  links    bytes  last-changed  name\n    <hr>", rdx302, rcx299, r8_275, r9, v76, v13, v280, "<!DOCTYPE html PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">\n\n<html>\n\n  <head>\n    <meta http-equiv=\"Content-type\" content=\"text/html;charset=UTF-8\">\n    <title>Index of %.80s</title>\n  </head>\n\n  <body bgcolor=\"#99cc99\" text=\"#000000\" link=\"#2020ff\" vlink=\"#4040cc\">\n\n    <h2>Index of %.80s</h2>\n\n    <pre>\nmode  links    bytes  last-changed  name\n    <hr>", rdx302, rcx299, r8_275, r9, v76, v13);
                        rax303 = fun_5420(r15_262, "<!DOCTYPE html PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">\n\n<html>\n\n  <head>\n    <meta http-equiv=\"Content-type\" content=\"text/html;charset=UTF-8\">\n    <title>Index of %.80s</title>\n  </head>\n\n  <body bgcolor=\"#99cc99\" text=\"#000000\" link=\"#2020ff\" vlink=\"#4040cc\">\n\n    <h2>Index of %.80s</h2>\n\n    <pre>\nmode  links    bytes  last-changed  name\n    <hr>", rdx302);
                        rsp15 = rsp279 - 8 + 8 - 8 + 8;
                        if (rax303) {
                            r14_28 = rax303;
                            *reinterpret_cast<int32_t*>(&rbx301) = 0;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx301) + 4) = 0;
                            do {
                                r13_304 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(ls_maxnames)));
                                if (reinterpret_cast<int64_t>(rbx301) < reinterpret_cast<int64_t>(r13_304)) {
                                    r12_11 = ls_nameptrs;
                                    continue;
                                } else {
                                    if (!*reinterpret_cast<int32_t*>(&r13_304)) {
                                        ls_maxnames = 100;
                                        rax305 = fun_5430(0x64064, 0x64064);
                                        rbp306 = rax305;
                                        ls_names = rax305;
                                        rax307 = fun_5430("d-linux-x86-64.so.2", "d-linux-x86-64.so.2");
                                        rsp15 = rsp15 - 8 + 8 - 8 + 8;
                                        ls_nameptrs = rax307;
                                        if (!rbp306) 
                                            break;
                                        r12_11 = rax307;
                                        if (!rax307) 
                                            break;
                                        *reinterpret_cast<uint32_t*>(&v13) = 100;
                                    } else {
                                        eax308 = static_cast<uint32_t>(r13_304 + r13_304);
                                        *reinterpret_cast<uint32_t*>(&v13) = eax308;
                                        ls_maxnames = eax308;
                                        rdi309 = ls_names;
                                        rax310 = fun_54d0(rdi309, (r13_304 << 13) + r13_304 * 2, rdx302);
                                        rbp306 = rax310;
                                        ls_names = rax310;
                                        rdi311 = ls_nameptrs;
                                        rsi300 = reinterpret_cast<void**>(r13_304 << 4);
                                        rax312 = fun_54d0(rdi311, rsi300, rdx302);
                                        rsp15 = rsp15 - 8 + 8 - 8 + 8;
                                        ls_nameptrs = rax312;
                                        if (!rbp306) 
                                            break;
                                        r12_11 = rax312;
                                        if (!rax312) 
                                            break;
                                        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r13_304) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r13_304) == 0))) 
                                            goto addr_e237_223;
                                    }
                                }
                                *reinterpret_cast<uint32_t*>(&rcx299) = *reinterpret_cast<uint32_t*>(&v13);
                                *reinterpret_cast<int32_t*>(&rcx299 + 4) = 0;
                                *reinterpret_cast<uint32_t*>(&rax313) = *reinterpret_cast<uint32_t*>(&rcx299) & 2;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax313) + 4) = 0;
                                if (reinterpret_cast<unsigned char>(rcx299 + 0xffffffffffffffff) >= reinterpret_cast<unsigned char>(3)) {
                                    *reinterpret_cast<uint32_t*>(&rcx299) = *reinterpret_cast<uint32_t*>(&rcx299) & 0xfffffffc;
                                    *reinterpret_cast<int32_t*>(&rcx299 + 4) = 0;
                                    *reinterpret_cast<uint32_t*>(&rsi300) = 0x2002;
                                    *reinterpret_cast<int32_t*>(&rsi300 + 4) = 0;
                                    *reinterpret_cast<int32_t*>(&rdx314) = 0;
                                    *reinterpret_cast<int32_t*>(&rdx314 + 4) = 0;
                                    do {
                                        *reinterpret_cast<uint32_t*>(&rdi315) = static_cast<uint32_t>(reinterpret_cast<uint64_t>(rsi300 + 0xffffffffffffdffe)) & 0xfffffffc;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi315) + 4) = 0;
                                        *reinterpret_cast<void***>(r12_11 + reinterpret_cast<unsigned char>(rdx314) * 8) = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi315) + reinterpret_cast<unsigned char>(rbp306));
                                        *reinterpret_cast<uint32_t*>(&rdi316) = static_cast<uint32_t>(reinterpret_cast<uint64_t>(rsi300 + 0xffffffffffffefff)) & 0xfffffffd;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi316) + 4) = 0;
                                        *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(r12_11 + reinterpret_cast<unsigned char>(rdx314) * 8) + 8) = reinterpret_cast<uint64_t>(rdi316 + reinterpret_cast<unsigned char>(rbp306));
                                        *reinterpret_cast<uint32_t*>(&rdi317) = *reinterpret_cast<uint32_t*>(&rsi300) & 0xfffffffe;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi317) + 4) = 0;
                                        *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(r12_11 + reinterpret_cast<unsigned char>(rdx314) * 8) + 16) = reinterpret_cast<uint64_t>(rdi317 + reinterpret_cast<unsigned char>(rbp306));
                                        *reinterpret_cast<int32_t*>(&rdi318) = static_cast<int32_t>(reinterpret_cast<unsigned char>(rsi300) + reinterpret_cast<uint64_t>("e"));
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi318) + 4) = 0;
                                        *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(r12_11 + reinterpret_cast<unsigned char>(rdx314) * 8) + 24) = reinterpret_cast<uint64_t>(rdi318 + reinterpret_cast<unsigned char>(rbp306));
                                        rdx314 = rdx314 + 4;
                                        rsi300 = rsi300 + 0x4004;
                                    } while (rcx299 != rdx314);
                                } else {
                                    *reinterpret_cast<int32_t*>(&rdx314) = 0;
                                    *reinterpret_cast<int32_t*>(&rdx314 + 4) = 0;
                                }
                                if (rax313) {
                                    rcx299 = r12_11 + reinterpret_cast<unsigned char>(rdx314) * 8;
                                    rsi300 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx314) << 12) + reinterpret_cast<unsigned char>(rdx314));
                                    *reinterpret_cast<int32_t*>(&rdx319) = 0;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx319) + 4) = 0;
                                    do {
                                        *reinterpret_cast<uint32_t*>(&rdi320) = *reinterpret_cast<uint32_t*>(&rsi300);
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi320) + 4) = 0;
                                        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx299) + reinterpret_cast<uint64_t>(rdx319 * 8)) = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi320) + reinterpret_cast<unsigned char>(rbp306));
                                        ++rdx319;
                                        rsi300 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi300) + reinterpret_cast<uint64_t>("e"));
                                    } while (rax313 != rdx319);
                                    continue;
                                }
                                addr_e237_223:
                                r14_321 = r14_28 + 19;
                                rax322 = fun_51d0(r14_321, rsi300, r14_321, rsi300);
                                rdi323 = *reinterpret_cast<void***>(r12_11 + rbx301 * 8);
                                rbp324 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax322)));
                                rsi300 = r14_321;
                                rdx302 = rbp324;
                                fun_50a0(rdi323, rsi300, rdx302, rcx299, r8_275, r9);
                                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_11 + rbx301 * 8)) + reinterpret_cast<unsigned char>(rbp324)) = 0;
                                ++rbx301;
                                rax325 = fun_5420(r15_262, rsi300, rdx302);
                                rsp15 = rsp15 - 8 + 8 - 8 + 8 - 8 + 8;
                                r14_28 = rax325;
                            } while (rax325);
                            goto addr_e0b7_233;
                        } else {
                            addr_e0b7_233:
                            fun_5300(r15_262, rsi300, r15_262, rsi300);
                            rdi326 = ls_nameptrs;
                            *reinterpret_cast<int32_t*>(&rsi327) = *reinterpret_cast<int32_t*>(&rbx301);
                            *reinterpret_cast<int32_t*>(&rsi327 + 4) = 0;
                            rcx328 = reinterpret_cast<void**>(name_compare);
                            v75 = rsi327;
                            fun_5110(rdi326, rsi327, 8, name_compare, r8_275, r9);
                            rsp329 = rsp15 - 8 + 8 - 8 + 8;
                            if (*reinterpret_cast<int32_t*>(&rbx301)) {
                                *reinterpret_cast<int32_t*>(&rbx330) = 0;
                                *reinterpret_cast<int32_t*>(&rbx330 + 4) = 0;
                                while (1) {
                                    rdi331 = *reinterpret_cast<void***>(v76 + 0xf0);
                                    rax332 = fun_51d0(rdi331, rsi327, rdi331, rsi327);
                                    rax333 = ls_nameptrs;
                                    rdi334 = *reinterpret_cast<void***>(rax333 + reinterpret_cast<unsigned char>(rbx330) * 8);
                                    rax335 = fun_51d0(rdi334, rsi327, rdi334, rsi327);
                                    httpd_realloc_str(0x1b2c8, 0x1b2d0, reinterpret_cast<unsigned char>(rax332) + reinterpret_cast<unsigned char>(rax335) + 1, rcx328, r8_275, r9);
                                    rdi336 = *reinterpret_cast<void***>(v76 + 0xe8);
                                    rax337 = fun_51d0(rdi336, 0x1b2d0, rdi336, 0x1b2d0);
                                    rax338 = ls_nameptrs;
                                    rdi339 = *reinterpret_cast<void***>(rax338 + reinterpret_cast<unsigned char>(rbx330) * 8);
                                    rax340 = fun_51d0(rdi339, 0x1b2d0, rdi339, 0x1b2d0);
                                    rdx341 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax337) + reinterpret_cast<unsigned char>(rax340) + 1);
                                    httpd_realloc_str(0x1b2d8, 0x1b2e0, rdx341, rcx328, r8_275, r9);
                                    rsp342 = reinterpret_cast<void*>(rsp329 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
                                    rbp343 = *reinterpret_cast<void***>(v76 + 0xf0);
                                    zf344 = *reinterpret_cast<void***>(rbp343) == 0;
                                    v13 = rbx330;
                                    if (zf344 || (eax345 = fun_5370(rbp343, ".", rbp343, "."), rsp342 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp342) - 8 + 8), eax345 == 0)) {
                                        rdi346 = ls_name;
                                        rbp347 = ls_nameptrs;
                                        rsi348 = *reinterpret_cast<void***>(rbp347 + reinterpret_cast<unsigned char>(rbx330) * 8);
                                        fun_50d0(rdi346, rsi348, rdx341, rdi346, rsi348, rdx341);
                                        rdi349 = ls_rname;
                                        rsi350 = *reinterpret_cast<void***>(rbp347 + reinterpret_cast<unsigned char>(rbx330) * 8);
                                        fun_50d0(rdi349, rsi350, rdx341, rdi349, rsi350, rdx341);
                                        rsp351 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp342) - 8 + 8 - 8 + 8);
                                    } else {
                                        rdi352 = ls_name;
                                        rsi353 = ls_maxname;
                                        rax354 = ls_nameptrs;
                                        r8_355 = *reinterpret_cast<void***>(rax354 + reinterpret_cast<unsigned char>(rbx330) * 8);
                                        my_snprintf(rdi352, rsi353, "%s/%s", rbp343, r8_355, r9, v76, v13, v280, v75, v356, v357, v358, v359, v360);
                                        rbp361 = *reinterpret_cast<void***>(v76 + 0xe8);
                                        eax362 = fun_5370(rbp361, ".", rbp361, ".");
                                        rsp363 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp342) - 8 + 8 - 8 + 8);
                                        rdi364 = ls_rname;
                                        rsi350 = ls_maxrname;
                                        rcx365 = ls_nameptrs;
                                        r8_275 = *reinterpret_cast<void***>(rcx365 + reinterpret_cast<unsigned char>(rbx330) * 8);
                                        if (!eax362) {
                                            rcx328 = r8_275;
                                            my_snprintf(rdi364, rsi350, "%s", rcx328, r8_275, r9, v76, v13, v280, v75, v356, v366, v367, v368, v369);
                                            rsp351 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp363) - 8 + 8);
                                        } else {
                                            rcx328 = rbp361;
                                            my_snprintf(rdi364, rsi350, "%s%s", rcx328, r8_275, r9, v76, v13, v280, v75, v356, v370, v371, v372, v373);
                                            rsp351 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp363) - 8 + 8);
                                        }
                                    }
                                    rdi374 = ls_rname;
                                    rax375 = fun_51d0(rdi374, rsi350, rdi374, rsi350);
                                    rdx376 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax375 + reinterpret_cast<unsigned char>(rax375) * 2) + 1);
                                    httpd_realloc_str(0x1b2e8, 0x1b2f0, rdx376, rcx328, r8_275, r9);
                                    rsp377 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp351) - 8 + 8 - 8 + 8);
                                    rbp378 = ls_encrname;
                                    ebx379 = ls_maxencrname;
                                    if (ebx379 < 5 || (r12_11 = ls_rname, r15_262 = *reinterpret_cast<void***>(r12_11), r15_262 == 0)) {
                                        addr_e643_241:
                                        *reinterpret_cast<void***>(rbp378) = reinterpret_cast<void**>(0);
                                        rdi380 = ls_name;
                                        rsi327 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp377) + 0x120);
                                        eax381 = fun_53b0(rdi380, rsi327, rdx376, rcx328, r8_275, r9);
                                        rsp329 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp377) - 8 + 8);
                                        if (eax381 < 0 || (rdi382 = ls_name, rsi327 = reinterpret_cast<void**>(rsp329 + 0x90), eax383 = fun_5340(rdi382, rsi327, rdx376, rcx328, r8_275, r9), rsp329 = rsp329 - 8 + 8, eax383 < 0)) {
                                            addr_e412_242:
                                            rbx330 = v13 + 1;
                                            if (rbx330 == v75) 
                                                goto addr_e0e6_243; else 
                                                continue;
                                        } else {
                                            *reinterpret_cast<signed char*>(&v384) = 0;
                                            *reinterpret_cast<uint32_t*>(&rax283) = (v385 & 0xf000) - 0x1000 >> 12;
                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax283) + 4) = 0;
                                            if (*reinterpret_cast<uint32_t*>(&rax283) <= 11) 
                                                goto addr_e6a2_201;
                                            *reinterpret_cast<signed char*>(&v356) = 63;
                                            eax386 = v387;
                                            ecx388 = 0x72;
                                            if (*reinterpret_cast<unsigned char*>(&eax386) & 4) 
                                                goto addr_e751_248;
                                        }
                                    } else {
                                        rax389 = fun_56f0(0x1b2e8, 0x1b2e8);
                                        rsp377 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp377) - 8 + 8);
                                        r13_390 = rax389;
                                        ++r12_11;
                                        *reinterpret_cast<int32_t*>(&r14_391) = 0;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_391) + 4) = 0;
                                        do {
                                            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(*r13_390 + reinterpret_cast<signed char>(r15_262) * 2)) & 8 || (*reinterpret_cast<int32_t*>(&rsi392) = reinterpret_cast<signed char>(r15_262), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi392) + 4) = 0, *reinterpret_cast<uint32_t*>(&rdx376) = 6, *reinterpret_cast<int32_t*>(&rdx376 + 4) = 0, rax393 = fun_5320("/_.-~", rsi392, 6), rsp377 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp377) - 8 + 8), !!rax393)) {
                                                *reinterpret_cast<void***>(rbp378) = r15_262;
                                                *reinterpret_cast<int32_t*>(&rax394) = 1;
                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax394) + 4) = 0;
                                                *reinterpret_cast<int32_t*>(&rcx328) = 1;
                                                *reinterpret_cast<int32_t*>(&rcx328 + 4) = 0;
                                            } else {
                                                *reinterpret_cast<uint32_t*>(&rdx376) = reinterpret_cast<unsigned char>(r15_262);
                                                *reinterpret_cast<int32_t*>(&rdx376 + 4) = 0;
                                                fun_5610(rbp378, "%%%02x", rdx376);
                                                rsp377 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp377) - 8 + 8);
                                                *reinterpret_cast<int32_t*>(&rax394) = 3;
                                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax394) + 4) = 0;
                                                *reinterpret_cast<int32_t*>(&rcx328) = 3;
                                                *reinterpret_cast<int32_t*>(&rcx328 + 4) = 0;
                                            }
                                            rbp378 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp378) + reinterpret_cast<unsigned char>(rcx328));
                                            *reinterpret_cast<uint32_t*>(&r15_262) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_11));
                                            *reinterpret_cast<int32_t*>(&r15_262 + 4) = 0;
                                            if (!r15_262) 
                                                goto addr_e643_241;
                                            *reinterpret_cast<int32_t*>(&rcx328) = static_cast<int32_t>(rax394 + r14_391) + 4;
                                            *reinterpret_cast<int32_t*>(&rcx328 + 4) = 0;
                                            ++r12_11;
                                            *reinterpret_cast<int32_t*>(&r14_391) = *reinterpret_cast<int32_t*>(&rax394) + *reinterpret_cast<int32_t*>(&r14_391);
                                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_391) + 4) = 0;
                                        } while (*reinterpret_cast<int32_t*>(&rcx328) < ebx379);
                                        goto addr_e620_255;
                                    }
                                    ecx388 = 45;
                                    addr_e751_248:
                                    edx395 = 0x77;
                                    if (!(*reinterpret_cast<unsigned char*>(&eax386) & 2)) {
                                        edx395 = 45;
                                    }
                                    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&v356) + 1) = *reinterpret_cast<signed char*>(&ecx388);
                                    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&v356) + 2) = *reinterpret_cast<signed char*>(&edx395);
                                    eax396 = 0x78;
                                    if (!(*reinterpret_cast<unsigned char*>(&eax386) & 1)) {
                                        eax396 = 45;
                                    }
                                    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&v356) + 3) = *reinterpret_cast<signed char*>(&eax396);
                                    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&v356) + 4) = 0;
                                    rax397 = fun_5400();
                                    rsp398 = reinterpret_cast<void*>(rsp329 - 8 + 8);
                                    rax399 = fun_51b0(reinterpret_cast<int64_t>(rsp398) + 0xe8);
                                    rsp400 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp398) - 8 + 8);
                                    *reinterpret_cast<void***>(rax399) = *reinterpret_cast<void***>(rax399 + 4);
                                    ecx401 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax399 + 5));
                                    *reinterpret_cast<void***>(rax399 + 1) = *reinterpret_cast<void***>(&ecx401);
                                    *reinterpret_cast<signed char*>(rax399 + 3) = 32;
                                    ecx402 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rax399 + 8));
                                    *reinterpret_cast<void***>(rax399 + 4) = *reinterpret_cast<void***>(&ecx402);
                                    *reinterpret_cast<unsigned char*>(rax399 + 6) = 32;
                                    if (reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rax397) - v403) < reinterpret_cast<int64_t>(0xeff101)) {
                                        ecx404 = *reinterpret_cast<uint16_t*>(rax399 + 11);
                                        edx405 = *reinterpret_cast<uint16_t*>(rax399 + 14);
                                        *reinterpret_cast<unsigned char*>(rax399 + 7) = *reinterpret_cast<unsigned char*>(&ecx404);
                                        *reinterpret_cast<signed char*>(rax399 + 9) = 58;
                                        *reinterpret_cast<int16_t*>(rax399 + 10) = *reinterpret_cast<int16_t*>(&edx405);
                                    } else {
                                        *reinterpret_cast<unsigned char*>(rax399 + 7) = 32;
                                        *reinterpret_cast<void***>(rax399 + 8) = *reinterpret_cast<void***>(rax399 + 20);
                                    }
                                    *reinterpret_cast<signed char*>(rax399 + 12) = 0;
                                    ecx406 = v407;
                                    edx408 = ecx406 & 0xf000;
                                    if (edx408 != 0xa000) {
                                        esi409 = *reinterpret_cast<uint16_t*>(&edx408);
                                        if (esi409 != 0x4000) {
                                            if (esi409 != 0xc000) {
                                                if (!(*reinterpret_cast<unsigned char*>(&ecx406) & 1)) {
                                                }
                                            }
                                        }
                                    }
                                    rcx328 = v410;
                                    r8_275 = v411;
                                    rbx412 = reinterpret_cast<void**>(0x13553);
                                    if (edx408 == 0x4000) {
                                        rbx412 = reinterpret_cast<void**>("/");
                                    }
                                    rsi327 = reinterpret_cast<void**>("%s %3ld  %10lld  %s  <a href=\"/%.500s%s\">%.80s</a>%s%s%s\n");
                                    rdx413 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp400) + 32);
                                    r9 = rax399;
                                    v414 = ls_encrname;
                                    fun_53a0(v280, "%s %3ld  %10lld  %s  <a href=\"/%.500s%s\">%.80s</a>%s%s%s\n", rdx413, rcx328, r8_275, r9, v414, rbx412, v280, "%s %3ld  %10lld  %s  <a href=\"/%.500s%s\">%.80s</a>%s%s%s\n", rdx413, rcx328, r8_275, r9, v414, rbx412);
                                    rsp329 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp400) - 8 - 8 - 8 - 8 - 8 - 8 - 8 + 8 + 48);
                                    goto addr_e412_242;
                                    addr_e620_255:
                                    goto addr_e643_241;
                                }
                            }
                        }
                        rsi248 = reinterpret_cast<void**>("out of memory reallocating directory names");
                        *reinterpret_cast<int32_t*>(&rdi249) = 3;
                        *reinterpret_cast<int32_t*>(&rdi249 + 4) = 0;
                        addr_d668_154:
                        fun_5480(rdi249, rsi248, rdi249, rsi248);
                        fun_5620();
                        rsp243 = reinterpret_cast<void*>(rsp15 - 8 + 8 - 8 + 8);
                        addr_d679_147:
                        rsi245 = reinterpret_cast<void**>("UNKNOWN");
                        addr_d680_149:
                        rax415 = build_env("REQUEST_METHOD=%s", rsi245, "REQUEST_METHOD=%s", rsi245);
                        rsp416 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp243) - 8 + 8);
                        *reinterpret_cast<uint32_t*>(&rbp417) = static_cast<uint32_t>(reinterpret_cast<uint64_t>(r12_11 + 4));
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp417) + 4) = 0;
                        *reinterpret_cast<int32_t*>(&rcx418) = *reinterpret_cast<int32_t*>(&r14_28);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx418) + 4) = 0;
                        *reinterpret_cast<void***>(0x1b300 + rcx418 * 8) = rax415;
                        rsi419 = *reinterpret_cast<void***>(v76 + 0x100);
                        if (*reinterpret_cast<void***>(rsi419)) {
                            rax420 = build_env("PATH_INFO=/%s", rsi419);
                            *reinterpret_cast<uint32_t*>(&v13) = static_cast<uint32_t>(reinterpret_cast<uint64_t>(r12_11 + 5));
                            *reinterpret_cast<uint32_t*>(&rcx421) = *reinterpret_cast<uint32_t*>(&rbp417);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx421) + 4) = 0;
                            *reinterpret_cast<void***>(0x1b300 + rcx421 * 8) = rax420;
                            r14_422 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v76 + 8) + 64);
                            rax423 = fun_51d0(r14_422, rsi419, r14_422, rsi419);
                            r15_424 = *reinterpret_cast<void***>(v76 + 0x100);
                            rax425 = fun_51d0(r15_424, rsi419, r15_424, rsi419);
                            r13_426 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax423) + reinterpret_cast<unsigned char>(rax425) + 1);
                            rax427 = fun_5430(r13_426, r13_426);
                            rsp416 = rsp416 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8;
                            if (rax427) {
                                my_snprintf(rax427, r13_426, "%s%s", r14_422, r15_424, r9, v76, v13, v280, v75, v356, v428, v429, v430, v431);
                                rax432 = build_env("PATH_TRANSLATED=%s", rax427, "PATH_TRANSLATED=%s", rax427);
                                rsp416 = rsp416 - 8 + 8 - 8 + 8;
                                *reinterpret_cast<uint32_t*>(&r12_11) = *reinterpret_cast<uint32_t*>(&r12_11) + 6;
                                *reinterpret_cast<int32_t*>(&r12_11 + 4) = 0;
                                *reinterpret_cast<uint32_t*>(&rcx433) = *reinterpret_cast<uint32_t*>(&v13);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx433) + 4) = 0;
                                *reinterpret_cast<void***>(0x1b300 + rcx433 * 8) = rax432;
                                *reinterpret_cast<uint32_t*>(&rbp417) = *reinterpret_cast<uint32_t*>(&r12_11);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp417) + 4) = 0;
                            } else {
                                *reinterpret_cast<uint32_t*>(&rbp417) = *reinterpret_cast<uint32_t*>(&v13);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp417) + 4) = 0;
                            }
                        }
                        rbx434 = *reinterpret_cast<void***>(v76 + 0xe8);
                        eax435 = fun_5370(rbx434, ".", rbx434, ".");
                        rsi436 = reinterpret_cast<void**>(0x13553);
                        if (eax435) {
                            rsi436 = rbx434;
                        }
                        rax437 = build_env("SCRIPT_NAME=/%s", rsi436);
                        rsp438 = rsp416 - 8 + 8 - 8 + 8;
                        *reinterpret_cast<uint32_t*>(&rbx439) = static_cast<uint32_t>(rbp417 + 1);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx439) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rcx440) = *reinterpret_cast<uint32_t*>(&rbp417);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx440) + 4) = 0;
                        *reinterpret_cast<void***>(0x1b300 + rcx440 * 8) = rax437;
                        rsi441 = *reinterpret_cast<void***>(v76 + 0x108);
                        if (*reinterpret_cast<void***>(rsi441)) {
                            rax442 = build_env("QUERY_STRING=%s", rsi441);
                            rsp438 = rsp438 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx443) = *reinterpret_cast<uint32_t*>(&rbx439);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx443) + 4) = 0;
                            *reinterpret_cast<void***>(0x1b300 + rcx443 * 8) = rax442;
                            *reinterpret_cast<uint32_t*>(&rbx439) = *reinterpret_cast<uint32_t*>(&rbp417) + 2;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx439) + 4) = 0;
                        }
                        rdi444 = v76 + 16;
                        eax445 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(v76 + 16));
                        edx446 = 28;
                        if (*reinterpret_cast<int16_t*>(&eax445) != 10) {
                            edx446 = 0;
                        }
                        *reinterpret_cast<int32_t*>(&rsi447) = 16;
                        *reinterpret_cast<int32_t*>(&rsi447 + 4) = 0;
                        if (*reinterpret_cast<int16_t*>(&eax445) != 2) {
                            *reinterpret_cast<int32_t*>(&rsi447) = edx446;
                            *reinterpret_cast<int32_t*>(&rsi447 + 4) = 0;
                        }
                        *reinterpret_cast<int32_t*>(&r8_275) = 0;
                        *reinterpret_cast<int32_t*>(&r8_275 + 4) = 0;
                        *reinterpret_cast<int32_t*>(&r9) = 0;
                        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                        eax448 = fun_52d0(rdi444, rsi447, 0x1b110, 0xc8, rdi444, rsi447, 0x1b110, 0xc8);
                        rsp449 = rsp438 - 8 - 8 - 8 + 8 + 16;
                        if (eax448) {
                            *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
                        } else {
                            if (!*reinterpret_cast<void***>(v76 + 24) && (!*reinterpret_cast<int32_t*>(v76 + 28) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(v76 + 32) == 0xffff0000) && (eax450 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx451 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx451 | eax450))))) {
                                rax452 = fun_51d0(0x1b117, rsi447, 0x1b117, rsi447);
                                fun_5540(0x1b110, 0x1b117, rax452 + 1);
                                rsp449 = rsp449 - 8 + 8 - 8 + 8;
                            }
                        }
                        rax453 = build_env("REMOTE_ADDR=%s", 0x1b110, "REMOTE_ADDR=%s", 0x1b110);
                        rsp454 = rsp449 - 8 + 8;
                        ebp455 = static_cast<uint32_t>(rbx439 + 1);
                        *reinterpret_cast<uint32_t*>(&rcx456) = *reinterpret_cast<uint32_t*>(&rbx439);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx456) + 4) = 0;
                        *reinterpret_cast<void***>(0x1b300 + rcx456 * 8) = rax453;
                        rsi457 = *reinterpret_cast<void***>(v76 + 0x110);
                        if (*reinterpret_cast<void***>(rsi457)) {
                            rax458 = build_env("HTTP_REFERER=%s", rsi457);
                            *reinterpret_cast<int32_t*>(&r14_459) = static_cast<int32_t>(rbx439 + 2);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_459) + 4) = 0;
                            *reinterpret_cast<uint32_t*>(&rcx460) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx460) + 4) = 0;
                            *reinterpret_cast<void***>(0x1b300 + rcx460 * 8) = rax458;
                            rsi461 = *reinterpret_cast<void***>(v76 + 0x110);
                            rax462 = build_env("HTTP_REFERRER=%s", rsi461);
                            rsp454 = rsp454 - 8 + 8 - 8 + 8;
                            *reinterpret_cast<void***>(0x1b300 + r14_459 * 8) = rax462;
                            ebp455 = *reinterpret_cast<uint32_t*>(&rbx439) + 3;
                        }
                        rsi463 = *reinterpret_cast<void***>(v76 + 0x118);
                        if (*reinterpret_cast<void***>(rsi463)) {
                            rax464 = build_env("HTTP_USER_AGENT=%s", rsi463);
                            rsp454 = rsp454 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx465) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx465) + 4) = 0;
                            ++ebp455;
                            *reinterpret_cast<void***>(0x1b300 + rcx465 * 8) = rax464;
                        }
                        rsi466 = *reinterpret_cast<void***>(v76 + 0x120);
                        if (*reinterpret_cast<void***>(rsi466)) {
                            rax467 = build_env("HTTP_ACCEPT=%s", rsi466);
                            rsp454 = rsp454 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx468) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx468) + 4) = 0;
                            ++ebp455;
                            *reinterpret_cast<void***>(0x1b300 + rcx468 * 8) = rax467;
                        }
                        rsi469 = *reinterpret_cast<void***>(v76 + 0x128);
                        if (*reinterpret_cast<void***>(rsi469)) {
                            rax470 = build_env("HTTP_ACCEPT_ENCODING=%s", rsi469);
                            rsp454 = rsp454 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx471) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx471) + 4) = 0;
                            ++ebp455;
                            *reinterpret_cast<void***>(0x1b300 + rcx471 * 8) = rax470;
                        }
                        rsi472 = *reinterpret_cast<void***>(v76 + 0x130);
                        if (*reinterpret_cast<void***>(rsi472)) {
                            rax473 = build_env("HTTP_ACCEPT_LANGUAGE=%s", rsi472);
                            rsp454 = rsp454 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx474) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx474) + 4) = 0;
                            ++ebp455;
                            *reinterpret_cast<void***>(0x1b300 + rcx474 * 8) = rax473;
                        }
                        rsi475 = *reinterpret_cast<void***>(v76 + 0x138);
                        if (*reinterpret_cast<void***>(rsi475)) {
                            rax476 = build_env("HTTP_COOKIE=%s", rsi475);
                            rsp454 = rsp454 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx477) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx477) + 4) = 0;
                            ++ebp455;
                            *reinterpret_cast<void***>(0x1b300 + rcx477 * 8) = rax476;
                        }
                        rsi478 = *reinterpret_cast<void***>(v76 + 0x140);
                        if (*reinterpret_cast<void***>(rsi478)) {
                            rax479 = build_env("CONTENT_TYPE=%s", rsi478);
                            rsp454 = rsp454 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx480) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx480) + 4) = 0;
                            ++ebp455;
                            *reinterpret_cast<void***>(0x1b300 + rcx480 * 8) = rax479;
                        }
                        rsi481 = *reinterpret_cast<void***>(v76 + 0x150);
                        if (*reinterpret_cast<void***>(rsi481)) {
                            rax482 = build_env("HTTP_HOST=%s", rsi481);
                            rsp454 = rsp454 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx483) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx483) + 4) = 0;
                            ++ebp455;
                            *reinterpret_cast<void***>(0x1b300 + rcx483 * 8) = rax482;
                        }
                        rcx484 = *reinterpret_cast<void***>(v76 + 0x1f0);
                        if (rcx484 != 0xffffffffffffffff) {
                            rbx485 = reinterpret_cast<void**>(rsp454 + 0x1b0);
                            my_snprintf(rbx485, 0x100, "%lu", rcx484, 0, 0, v76, v13, v280, v75, v356, v486, v487, v488, v489);
                            rax490 = build_env("CONTENT_LENGTH=%s", rbx485, "CONTENT_LENGTH=%s", rbx485);
                            rsp454 = rsp454 - 8 + 8 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx491) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx491) + 4) = 0;
                            ++ebp455;
                            *reinterpret_cast<void***>(0x1b300 + rcx491 * 8) = rax490;
                        }
                        rsi492 = *reinterpret_cast<void***>(v76 + 0x168);
                        if (*reinterpret_cast<void***>(rsi492)) {
                            rax493 = build_env("REMOTE_USER=%s", rsi492);
                            rsp454 = rsp454 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx494) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx494) + 4) = 0;
                            ++ebp455;
                            *reinterpret_cast<void***>(0x1b300 + rcx494 * 8) = rax493;
                        }
                        if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(v76 + 0x160))) {
                            rsi492 = reinterpret_cast<void**>("Basic");
                            rax495 = build_env("AUTH_TYPE=%s", "Basic");
                            rsp454 = rsp454 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx496) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx496) + 4) = 0;
                            ++ebp455;
                            *reinterpret_cast<void***>(0x1b300 + rcx496 * 8) = rax495;
                        }
                        rax497 = fun_5030("TZ", rsi492);
                        rsp498 = rsp454 - 8 + 8;
                        if (rax497) {
                            rax499 = build_env("TZ=%s", rax497);
                            rsp498 = rsp498 - 8 + 8;
                            *reinterpret_cast<uint32_t*>(&rcx500) = ebp455;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx500) + 4) = 0;
                            ++ebp455;
                            *reinterpret_cast<void***>(0x1b300 + rcx500 * 8) = rax499;
                        }
                        rsi501 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(v76 + 8) + 24);
                        rax502 = build_env("CGI_PATTERN=%s", rsi501);
                        *reinterpret_cast<uint32_t*>(&rcx503) = ebp455;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx503) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rbp504) = ebp455 + 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp504) + 4) = 0;
                        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(0x1b300) + reinterpret_cast<uint64_t>(rcx503 * 8)) = rax502;
                        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(0x1b300) + reinterpret_cast<uint64_t>(rbp504 * 8)) = reinterpret_cast<void**>(0);
                        r15_262 = *reinterpret_cast<void***>(v76 + 0x108);
                        rax505 = fun_51d0(r15_262, rsi501);
                        rdi506 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax505) * 8 + 16);
                        rax507 = fun_5430(rdi506, rdi506);
                        rsp508 = rsp498 - 8 + 8 - 8 + 8 - 8 + 8;
                        rcx287 = rax507;
                        v13 = rax507;
                        if (rax507) {
                            r14_509 = *reinterpret_cast<void***>(v75);
                            rax510 = fun_5250(r14_509, 47, 0x1b300, rcx287);
                            rcx511 = reinterpret_cast<void**>(&rax510->f1);
                            if (!rax510) {
                                rcx511 = r14_509;
                            }
                            *reinterpret_cast<void***>(v13) = rcx511;
                            rdi512 = r15_262;
                            *reinterpret_cast<uint32_t*>(&rsi501) = 61;
                            *reinterpret_cast<int32_t*>(&rsi501 + 4) = 0;
                            rax513 = fun_5220(rdi512, 61, 0x1b300);
                            rsp508 = rsp508 - 8 + 8 - 8 + 8;
                            r14d514 = 1;
                            if (!rax513) 
                                goto addr_dba6_317;
                        } else {
                            v13 = reinterpret_cast<void**>(0);
                            goto addr_dd53_319;
                        }
                        addr_dd43_320:
                        rcx287 = v13;
                        *reinterpret_cast<void***>(rcx287 + r14d514 * 8) = reinterpret_cast<void**>(0);
                        addr_dd53_319:
                        if (*reinterpret_cast<int32_t*>(v76 + 0xb4) == 3 && (rcx287 = v76, reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx287 + 0xa0)) > reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx287 + 0xa8)))) {
                            rdi515 = reinterpret_cast<void**>(rsp508 + 0x1b0);
                            eax516 = fun_52c0(rdi515, rsi501);
                            rsp293 = reinterpret_cast<void*>(rsp508 - 8 + 8);
                            if (eax516 < 0) {
                                addr_df18_322:
                                rsi298 = reinterpret_cast<void**>("pipe - %m");
                                continue;
                            } else {
                                eax517 = fun_56b0(rdi515, rsi501);
                                rsp293 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp293) - 8 + 8);
                                if (reinterpret_cast<int32_t>(eax517) < reinterpret_cast<int32_t>(0)) 
                                    break;
                                if (eax517) 
                                    goto addr_e143_325;
                                sub_process = 1;
                                fun_52a0();
                                cgi_interpose_input(v76, v518);
                                fun_5620();
                                rsp508 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp293) - 8 + 8 - 8 + 8 - 8 + 8);
                            }
                        }
                        if (!*reinterpret_cast<void***>(v76 + 0x2c0)) 
                            goto addr_dddb_328;
                        fun_5210();
                        rsp508 = rsp508 - 8 + 8;
                        goto addr_dddb_328;
                        addr_dba6_317:
                        r14d514 = 1;
                        *reinterpret_cast<uint32_t*>(&r12_11) = 0;
                        *reinterpret_cast<int32_t*>(&r12_11 + 4) = 0;
                        rbp519 = r15_262;
                        while (1) {
                            if (*reinterpret_cast<void***>(rbp519) == 43) {
                                *reinterpret_cast<void***>(rbp519) = reinterpret_cast<void**>(0);
                                rbx520 = r15_262;
                                r13_521 = r15_262;
                                while (1) {
                                    edx522 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_521));
                                    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&edx522) == 37)) {
                                        if (!*reinterpret_cast<void***>(&edx522)) 
                                            break;
                                    } else {
                                        rax523 = fun_56f0(rdi512, rdi512);
                                        rsp508 = rsp508 - 8 + 8;
                                        rsi501 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_521 + 1))));
                                        *reinterpret_cast<void***>(&edx522) = reinterpret_cast<void**>(37);
                                        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(*rax523 + reinterpret_cast<unsigned char>(rsi501) * 2) + 1) & 16 && (rax524 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_521 + 2)), !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(*rax523 + rax524 * 2) + 1) & 16))) {
                                            ecx525 = static_cast<uint32_t>(reinterpret_cast<uint64_t>(rsi501 + 0xffffffffffffffd0));
                                            if (*reinterpret_cast<unsigned char*>(&ecx525) >= 10) {
                                                ecx526 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rsi501 + 0xffffffffffffff9f));
                                                if (*reinterpret_cast<unsigned char*>(&ecx526) > 5) {
                                                    ecx527 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rsi501 + 0xffffffffffffffbf));
                                                    *reinterpret_cast<unsigned char*>(&rsi501) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi501) - 55);
                                                    ecx525 = *reinterpret_cast<unsigned char*>(&rsi501);
                                                    if (*reinterpret_cast<unsigned char*>(&ecx527) >= 6) {
                                                        ecx525 = 0;
                                                    }
                                                } else {
                                                    *reinterpret_cast<unsigned char*>(&rsi501) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi501) - 87);
                                                    ecx525 = *reinterpret_cast<uint32_t*>(&rsi501);
                                                }
                                            }
                                            edx528 = static_cast<uint32_t>(rax524 - 48);
                                            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void****>(&edx528)) >= 10) {
                                                edx529 = static_cast<int32_t>(rax524 - 97);
                                                if (*reinterpret_cast<unsigned char*>(&edx529) > 5) {
                                                    edx530 = static_cast<int32_t>(rax524 - 65);
                                                    edx528 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax524) - 55);
                                                    if (*reinterpret_cast<unsigned char*>(&edx530) >= 6) {
                                                        edx528 = 0;
                                                    }
                                                } else {
                                                    *reinterpret_cast<signed char*>(&rax524) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax524) - 87);
                                                    edx528 = *reinterpret_cast<uint32_t*>(&rax524);
                                                }
                                            }
                                            *reinterpret_cast<void***>(&edx522) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void****>(&edx528)) + reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx525) << 4));
                                            r13_521 = r13_521 + 2;
                                        }
                                    }
                                    *reinterpret_cast<void***>(rbx520) = *reinterpret_cast<void***>(&edx522);
                                    ++rbx520;
                                    ++r13_521;
                                }
                                *reinterpret_cast<void***>(rbx520) = reinterpret_cast<void**>(0);
                                rax531 = r14d514;
                                ++r14d514;
                                *reinterpret_cast<void***>(v13 + rax531 * 8) = r15_262;
                                r15_262 = rbp519 + 1;
                            } else {
                                if (!*reinterpret_cast<void***>(rbp519)) 
                                    break;
                            }
                            ++rbp519;
                        }
                        if (rbp519 == r15_262) 
                            goto addr_dd43_320;
                        *reinterpret_cast<uint32_t*>(&r12_11) = 0;
                        *reinterpret_cast<int32_t*>(&r12_11 + 4) = 0;
                        rbx532 = r15_262;
                        rbp533 = r15_262;
                        while (1) {
                            edx534 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp533));
                            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(&edx534) == 37)) {
                                if (!*reinterpret_cast<void***>(&edx534)) 
                                    break;
                            } else {
                                rax535 = fun_56f0(rdi512, rdi512);
                                rsp508 = rsp508 - 8 + 8;
                                rsi501 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp533 + 1))));
                                *reinterpret_cast<void***>(&edx534) = reinterpret_cast<void**>(37);
                                if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(*rax535 + reinterpret_cast<unsigned char>(rsi501) * 2) + 1) & 16 && (rax536 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbp533 + 2)), !!(*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(*rax535 + rax536 * 2) + 1) & 16))) {
                                    ecx537 = static_cast<uint32_t>(reinterpret_cast<uint64_t>(rsi501 + 0xffffffffffffffd0));
                                    if (*reinterpret_cast<unsigned char*>(&ecx537) >= 10) {
                                        ecx538 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rsi501 + 0xffffffffffffff9f));
                                        if (*reinterpret_cast<unsigned char*>(&ecx538) > 5) {
                                            ecx539 = static_cast<int32_t>(reinterpret_cast<uint64_t>(rsi501 + 0xffffffffffffffbf));
                                            *reinterpret_cast<unsigned char*>(&rsi501) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi501) - 55);
                                            ecx537 = *reinterpret_cast<unsigned char*>(&rsi501);
                                            if (*reinterpret_cast<unsigned char*>(&ecx539) >= 6) {
                                                ecx537 = 0;
                                            }
                                        } else {
                                            *reinterpret_cast<unsigned char*>(&rsi501) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi501) - 87);
                                            ecx537 = *reinterpret_cast<uint32_t*>(&rsi501);
                                        }
                                    }
                                    edx540 = static_cast<uint32_t>(rax536 - 48);
                                    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void****>(&edx540)) >= 10) {
                                        edx541 = static_cast<int32_t>(rax536 - 97);
                                        if (*reinterpret_cast<unsigned char*>(&edx541) > 5) {
                                            edx542 = static_cast<int32_t>(rax536 - 65);
                                            edx540 = reinterpret_cast<unsigned char>(*reinterpret_cast<signed char*>(&rax536) - 55);
                                            if (*reinterpret_cast<unsigned char*>(&edx542) >= 6) {
                                                edx540 = 0;
                                            }
                                        } else {
                                            *reinterpret_cast<signed char*>(&rax536) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(&rax536) - 87);
                                            edx540 = *reinterpret_cast<uint32_t*>(&rax536);
                                        }
                                    }
                                    *reinterpret_cast<void***>(&edx534) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void****>(&edx540)) + reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&ecx537) << 4));
                                    rbp533 = rbp533 + 2;
                                }
                            }
                            *reinterpret_cast<void***>(rbx532) = *reinterpret_cast<void***>(&edx534);
                            ++rbx532;
                            ++rbp533;
                        }
                        *reinterpret_cast<void***>(rbx532) = reinterpret_cast<void**>(0);
                        rax543 = r14d514;
                        ++r14d514;
                        *reinterpret_cast<void***>(v13 + rax543 * 8) = r15_262;
                        goto addr_dd43_320;
                        addr_e0e6_243:
                        *reinterpret_cast<int32_t*>(&rdx286) = 1;
                        *reinterpret_cast<int32_t*>(&rdx286 + 4) = 0;
                        rcx287 = v280;
                        fun_5630("    </pre>\n  </body>\n</html>\n", 29, 1, rcx287, r8_275, r9);
                        fun_5190(v280, 29, 1, v280, 29, 1);
                        zf544 = 1;
                        fun_5620();
                        rsp293 = reinterpret_cast<void*>(rsp329 - 8 + 8 - 8 + 8 - 8 + 8);
                        while (1) {
                            if (!zf544) 
                                goto addr_e32c_207;
                            sub_process = 1;
                            fun_52a0();
                            cgi_interpose_output(v76, v384, rdx286, rcx287, r8_275, r9);
                            fun_5620();
                            rsp293 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp293) - 8 + 8 - 8 + 8 - 8 + 8);
                            addr_e143_325:
                            fun_52a0();
                            rsp508 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp293) - 8 + 8);
                            if (v384) {
                                fun_5210();
                                fun_52a0();
                                rsp508 = rsp508 - 8 + 8 - 8 + 8;
                            }
                            addr_dddb_328:
                            rdi545 = *reinterpret_cast<void***>(v13);
                            rsi292 = reinterpret_cast<void**>("nph-");
                            *reinterpret_cast<int32_t*>(&rdx286) = 4;
                            *reinterpret_cast<int32_t*>(&rdx286 + 4) = 0;
                            eax546 = fun_50b0(rdi545, "nph-", 4, rdi545, "nph-", 4);
                            rsp285 = rsp508 - 8 + 8;
                            if (!eax546) 
                                goto addr_de09_372;
                            if (!*reinterpret_cast<int32_t*>(v76 + 0x208)) 
                                goto addr_de09_372;
                            addr_df03_206:
                            rdi547 = reinterpret_cast<void**>(rsp285 + 0x1b0);
                            eax548 = fun_52c0(rdi547, rsi292, rdi547, rsi292);
                            rsp293 = reinterpret_cast<void*>(rsp285 - 8 + 8);
                            if (eax548 < 0) 
                                goto addr_df18_322;
                            eax549 = fun_56b0(rdi547, rsi292, rdi547, rsi292);
                            rsp293 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp293) - 8 + 8);
                            zf544 = eax549 == 0;
                            if (reinterpret_cast<int32_t>(eax549) < reinterpret_cast<int32_t>(0)) 
                                goto addr_e031_211;
                        }
                    }
                }
            }
            addr_de09_372:
        } while (*reinterpret_cast<void***>(v76 + 0x2c0) != 1 && (*reinterpret_cast<int32_t*>(&rsi284) = 1, *reinterpret_cast<int32_t*>(&rsi284 + 4) = 0, fun_5210(), rsp285 = rsp285 - 8 + 8, *reinterpret_cast<void***>(v76 + 0x2c0) == 2));
    }
}

int64_t writev = 0x50f6;

uint32_t fun_50f0(int64_t rdi, void** rsi, void** rdx) {
    goto writev;
}

int64_t write = 0x5176;

void** fun_5170(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto write;
}

int64_t __errno_location = 0x5096;

uint32_t* fun_5090() {
    goto __errno_location;
}

uint64_t stats_bytes = 0;

void fdwatch_del_fd(void** edi, void** rsi, void** rdx, void** rcx, ...);

void httpd_close_conn(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7);

void** throttles = reinterpret_cast<void**>(0);

void tmr_cancel(void** rdi, void** rsi);

void really_clear_connection(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** rbx7;
    void** rdi8;
    uint64_t tmp64_9;
    void** edi10;
    void** rsi11;
    void** rax12;
    void** eax13;
    void** rcx14;
    void** rdx15;
    int64_t rdi16;
    void* rdi17;
    int64_t rdi18;
    void* rdi19;
    int64_t rax20;
    void* rax21;
    void** rdi22;
    void** eax23;
    void* rbx24;
    uint64_t rbx25;
    void** tmp32_26;

    rbx7 = rdi;
    rdi8 = *reinterpret_cast<void***>(rdi + 8);
    tmp64_9 = stats_bytes + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi8 + 0xc8));
    stats_bytes = tmp64_9;
    if (*reinterpret_cast<void***>(rbx7) != 3) {
        edi10 = *reinterpret_cast<void***>(rdi8 + 0x2c0);
        fdwatch_del_fd(edi10, rsi, rdx, rcx);
        rdi8 = *reinterpret_cast<void***>(rbx7 + 8);
    }
    rsi11 = rsi;
    httpd_close_conn(rdi8, rsi11, rdx, rcx, r8, r9, rax12);
    eax13 = *reinterpret_cast<void***>(rbx7 + 56);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax13) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax13 == 0))) {
        rcx14 = throttles;
        if (!reinterpret_cast<int1_t>(eax13 == 1)) {
            *reinterpret_cast<uint32_t*>(&rsi11) = reinterpret_cast<unsigned char>(eax13) & 0xfffffffe;
            *reinterpret_cast<int32_t*>(&rsi11 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx15) = 0;
            *reinterpret_cast<int32_t*>(&rdx15 + 4) = 0;
            do {
                rdi16 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx7 + reinterpret_cast<unsigned char>(rdx15) * 4) + 16);
                rdi17 = reinterpret_cast<void*>(rdi16 + rdi16 * 2 << 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx14) + reinterpret_cast<uint64_t>(rdi17) + 40) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx14) + reinterpret_cast<uint64_t>(rdi17) + 40) - 1;
                rdi18 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx7 + reinterpret_cast<unsigned char>(rdx15) * 4) + 20);
                rdi19 = reinterpret_cast<void*>(rdi18 + rdi18 * 2 << 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx14) + reinterpret_cast<uint64_t>(rdi19) + 40) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx14) + reinterpret_cast<uint64_t>(rdi19) + 40) - 1;
                rdx15 = rdx15 + 2;
            } while (rsi11 != rdx15);
        } else {
            *reinterpret_cast<int32_t*>(&rdx15) = 0;
            *reinterpret_cast<int32_t*>(&rdx15 + 4) = 0;
        }
        if (*reinterpret_cast<unsigned char*>(&eax13) & 1) {
            rax20 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx7 + reinterpret_cast<unsigned char>(rdx15) * 4) + 16);
            rax21 = reinterpret_cast<void*>(rax20 + rax20 * 2 << 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx14) + reinterpret_cast<uint64_t>(rax21) + 40) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx14) + reinterpret_cast<uint64_t>(rax21) + 40) - 1;
        }
    }
    rdi22 = *reinterpret_cast<void***>(rbx7 + 0x68);
    if (rdi22) {
        tmr_cancel(rdi22, rsi11);
        *reinterpret_cast<void***>(rbx7 + 0x68) = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(rbx7) = reinterpret_cast<void**>(0);
    eax23 = first_free_connect;
    *reinterpret_cast<void***>(rbx7 + 4) = eax23;
    rbx24 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rbx7) - reinterpret_cast<unsigned char>(connects));
    rbx25 = reinterpret_cast<uint64_t>(rbx24) >> 4;
    first_free_connect = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(&rbx25) * 0x38e38e39);
    tmp32_26 = num_connects + 0xffffffff;
    num_connects = tmp32_26;
    return;
}

void fdwatch_del_fd(void** edi, void** rsi, void** rdx, void** rcx, ...) {
    void** esi5;
    void** rax6;
    int64_t rbx7;
    void** rcx8;
    int64_t rdx9;
    int64_t r9_10;
    int64_t rdi11;
    void** rdi12;
    void** r8_13;
    void** rax14;

    if (reinterpret_cast<signed char>(edi) < reinterpret_cast<signed char>(0) || ((esi5 = nfiles, reinterpret_cast<signed char>(esi5) <= reinterpret_cast<signed char>(edi)) || (rax6 = fd_rw, *reinterpret_cast<void***>(&rbx7) = edi, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0, *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax6) + reinterpret_cast<uint64_t>(rbx7 * 4)) == 0xffffffff))) {
        goto syslog;
    } else {
        rcx8 = poll_fdidx;
        *reinterpret_cast<void***>(&rdx9) = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx8) + reinterpret_cast<uint64_t>(rbx7 * 4));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx9)) < reinterpret_cast<signed char>(0) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx9)) >= reinterpret_cast<signed char>(esi5)) {
            fun_5480(3, "bad idx (%d) in poll_del_fd!");
            rax6 = fd_rw;
        } else {
            r9_10 = reinterpret_cast<int32_t>(npoll_fds);
            rdi11 = r9_10 - 1;
            npoll_fds = *reinterpret_cast<void***>(&rdi11);
            rdi12 = pollfds;
            r8_13 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rdi12 + r9_10 * 8) - 8);
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdi12) + reinterpret_cast<uint64_t>(rdx9 * 8)) = r8_13;
            *reinterpret_cast<void***>(rcx8 + *reinterpret_cast<int32_t*>(&r8_13) * 4) = *reinterpret_cast<void***>(&rdx9);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi12 + r9_10 * 8) - 8) = -1;
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx8) + reinterpret_cast<uint64_t>(rbx7 * 4)) = reinterpret_cast<void**>(0xffffffff);
        }
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax6) + reinterpret_cast<uint64_t>(rbx7 * 4)) = reinterpret_cast<void**>(0xffffffff);
        rax14 = fd_data;
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax14) + reinterpret_cast<uint64_t>(rbx7 * 8)) = reinterpret_cast<void**>(0);
        return;
    }
}

void httpd_unlisten(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    if (*reinterpret_cast<void***>(rdi + 72) != 0xffffffff) {
        fun_52a0();
        *reinterpret_cast<void***>(rdi + 72) = reinterpret_cast<void**>(0xffffffff);
    }
    if (*reinterpret_cast<void***>(rdi + 76) != 0xffffffff) {
        fun_52a0();
        *reinterpret_cast<void***>(rdi + 76) = reinterpret_cast<void**>(0xffffffff);
    }
    return;
}

int64_t logstats(void** rdi, ...);

void** httpd_destroy_conn(void** rdi, void** rsi, void** rdx, void** rcx);

void** fun_5040(void** rdi, void** rsi, void** rdx, ...);

void httpd_terminate(void** rdi, void** rsi, void** rdx, void** rcx);

void** mmc_term(void** rdi, void** rsi, void** rdx, void** rcx);

void** tmr_term(void** rdi, void** rsi, void** rdx, void** rcx);

void** shut_down(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void* rsp7;
    void** rbx8;
    void** rsi9;
    void** rdi10;
    int1_t less_or_equal11;
    void* rbx12;
    void** r12_13;
    int64_t r15_14;
    void** r14_15;
    void** rdi16;
    void** v17;
    int32_t tmp32_18;
    int64_t rax19;
    void** rbx20;
    void** edi21;
    void** edi22;
    void** rdi23;
    void** rax24;
    void** rdi25;

    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 24);
    rbx8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) + 8);
    *reinterpret_cast<int32_t*>(&rsi9) = 0;
    *reinterpret_cast<int32_t*>(&rsi9 + 4) = 0;
    fun_5260(rbx8);
    rdi10 = rbx8;
    logstats(rdi10);
    less_or_equal11 = reinterpret_cast<signed char>(max_connects) <= reinterpret_cast<signed char>(0);
    if (!less_or_equal11) {
        *reinterpret_cast<int32_t*>(&rbx12) = 8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx12) + 4) = 0;
        r12_13 = connects;
        *reinterpret_cast<int32_t*>(&r15_14) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_14) + 4) = 0;
        r14_15 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) - 8 + 8 - 8 + 8 + 8);
        do {
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r12_13) + reinterpret_cast<uint64_t>(rbx12) - 8)) {
                rdi16 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r12_13) + reinterpret_cast<uint64_t>(rbx12));
                rsi9 = r14_15;
                httpd_close_conn(rdi16, rsi9, rdx, rcx, r8, r9, v17);
                r12_13 = connects;
            }
            rdi10 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r12_13) + reinterpret_cast<uint64_t>(rbx12));
            if (rdi10) {
                httpd_destroy_conn(rdi10, rsi9, rdx, rcx);
                r12_13 = connects;
                rdi10 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r12_13) + reinterpret_cast<uint64_t>(rbx12));
                fun_5040(rdi10, rsi9, rdx);
                tmp32_18 = httpd_conn_count - 1;
                httpd_conn_count = tmp32_18;
                *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r12_13) + reinterpret_cast<uint64_t>(rbx12)) = 0;
            }
            ++r15_14;
            rax19 = reinterpret_cast<int32_t>(max_connects);
            rbx12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx12) + 0x90);
        } while (r15_14 < rax19);
    }
    rbx20 = hs;
    if (rbx20) {
        hs = reinterpret_cast<void**>(0);
        edi21 = *reinterpret_cast<void***>(rbx20 + 72);
        if (edi21 != 0xffffffff) {
            fdwatch_del_fd(edi21, rsi9, rdx, rcx);
        }
        edi22 = *reinterpret_cast<void***>(rbx20 + 76);
        if (edi22 != 0xffffffff) {
            fdwatch_del_fd(edi22, rsi9, rdx, rcx);
        }
        rdi10 = rbx20;
        httpd_terminate(rdi10, rsi9, rdx, rcx);
    }
    mmc_term(rdi10, rsi9, rdx, rcx);
    tmr_term(rdi10, rsi9, rdx, rcx);
    rdi23 = connects;
    rax24 = fun_5040(rdi23, rsi9, rdx);
    rdi25 = throttles;
    if (rdi25) {
        rax24 = fun_5040(rdi25, rsi9, rdx);
    }
    return rax24;
}

int64_t closelog = 0x5066;

void fun_5060(void** rdi, void** rsi, ...) {
    goto closelog;
}

int64_t alarm = 0x5296;

void fun_5290(int64_t rdi, int64_t rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto alarm;
}

void** httpd_ntoa(void** rdi, void** rsi, void** rdx, ...) {
    uint32_t eax4;
    int32_t edx5;
    void** rsi6;
    int32_t eax7;
    uint32_t eax8;
    uint32_t ecx9;
    void** rax10;

    eax4 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi));
    edx5 = 28;
    if (*reinterpret_cast<int16_t*>(&eax4) != 10) {
        edx5 = 0;
    }
    *reinterpret_cast<int32_t*>(&rsi6) = 16;
    *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
    if (*reinterpret_cast<int16_t*>(&eax4) != 2) {
        *reinterpret_cast<int32_t*>(&rsi6) = edx5;
        *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
    }
    eax7 = fun_52d0(rdi, rsi6, 0x1b110, 0xc8, rdi, rsi6, 0x1b110, 0xc8);
    if (!eax7) {
        if (!*reinterpret_cast<void***>(rdi + 8) && (!*reinterpret_cast<signed char*>(rdi + 12) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi + 16) == 0xffff0000) && (eax8 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx9 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx9 | eax8))))) {
            rax10 = fun_51d0(0x1b117, rsi6, 0x1b117, rsi6);
            fun_5540(0x1b110, 0x1b117, rax10 + 1);
        }
    } else {
        *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
    }
    return 0x1b110;
}

void httpd_send_err(void** rdi, void** esi, void** rdx, void** rcx, void** r8, void** r9, ...) {
    void* rsp7;
    void** v8;
    void** rcx9;
    void** r14_10;
    void** v11;
    void** v12;
    void** v13;
    int40_t v14;
    void** v15;
    void** v16;
    void** v17;
    int16_t v18;
    int32_t eax19;
    void** r14_20;
    void** r8_21;
    void** v22;
    void** v23;
    void** v24;
    int40_t v25;
    void** v26;
    void** v27;
    void** v28;
    int16_t v29;
    int32_t eax30;
    void** v31;
    void** r13_32;
    void* rsp33;
    void** r12_34;
    void** rcx35;
    void** r8_36;
    void** r9_37;
    void** v38;
    int40_t v39;
    void** v40;
    void** v41;
    void** v42;
    int16_t v43;
    void** rax44;
    void** r15_45;
    void** r14_46;
    void** rdx47;
    void*** rdi48;
    void* rsp49;
    uint32_t ecx50;
    void** rdx51;
    void*** rbx52;
    void** r12_53;
    void** rcx54;
    void** v55;
    void** v56;
    void** v57;
    int40_t v58;
    void** v59;
    void** v60;
    void** v61;
    void** rax62;
    void** rdx63;
    void*** rdi64;
    void** rsi65;
    int32_t eax66;
    void* rsp67;
    void** rdx68;
    void** rax69;
    void** rcx70;
    void** rdx71;
    void** rcx72;
    void** rdx73;
    void** rcx74;
    void** rdx75;
    void** rcx76;
    void** rdx77;
    void** rcx78;
    void** rdx79;
    void** rcx80;
    void** rdx81;
    void** rcx82;
    void** rdx83;
    void** r12_84;
    void** v85;
    void** v86;
    void** v87;
    int40_t v88;
    void** v89;
    void** v90;
    void** v91;
    void** rax92;
    void** rdx93;
    void*** rdi94;
    void* rdi95;
    void** rbx96;
    void* rax97;
    int32_t esi98;

    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x3f8);
    v8 = r9;
    if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 8) + 100) && ((rcx9 = *reinterpret_cast<void***>(rdi + 0x158), !!*reinterpret_cast<void***>(rcx9)) && (r14_10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) + 16), r9 = esi, *reinterpret_cast<int32_t*>(&r9 + 4) = 0, my_snprintf(r14_10, 0x3e8, "%s/%s/err%d.html", rcx9, "errors", r9, v11, v8, v12, v13, v14, v15, v16, v17, v18), eax19 = send_err_file(rdi, esi, rdx, rcx, r14_10, r9), rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8 - 8 + 8), !!eax19)) || (r14_20 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) + 16), r8_21 = esi, *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0, my_snprintf(r14_20, 0x3e8, "%s/err%d.html", "errors", r8_21, r9, v22, v8, v23, v24, v25, v26, v27, v28, v29), eax30 = send_err_file(rdi, esi, rdx, rcx, r14_20, r9), rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8 - 8 + 8), !!eax30)) {
        return;
    }
    v31 = r8;
    r13_32 = rdi;
    send_mime(rdi, esi, rdx, 0x13553, rcx, "text/html; charset=%s", 0xff, 0);
    rsp33 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) + 0x3f8 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - reinterpret_cast<int64_t>("addrinfo") - 8 - 8 - 8 + 8 + 8);
    r12_34 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp33) + 0x408);
    rcx35 = esi;
    *reinterpret_cast<int32_t*>(&rcx35 + 4) = 0;
    r8_36 = rdx;
    r9_37 = esi;
    *reinterpret_cast<int32_t*>(&r9_37 + 4) = 0;
    my_snprintf(r12_34, 0x7d0, "<!DOCTYPE html PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">\n\n<html>\n\n  <head>\n    <meta http-equiv=\"Content-type\" content=\"text/html;charset=UTF-8\">\n    <title>%d %s</title>\n  </head>\n\n  <body bgcolor=\"#cc9999\" text=\"#000000\" link=\"#2020ff\" vlink=\"#4040cc\">\n\n    <h2>%d %s</h2>\n", rcx35, r8_36, r9_37, rdx, 0, v38, v31, v39, v40, v41, v42, v43);
    rax44 = fun_51d0(r12_34, 0x7d0, r12_34, 0x7d0);
    r15_45 = r13_32 + 0x170;
    r14_46 = r13_32 + 0x1d0;
    rdx47 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_32 + 0x1d8)) + reinterpret_cast<unsigned char>(rax44));
    httpd_realloc_str(r15_45, r14_46, rdx47, rcx35, r8_36, r9_37);
    rdi48 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_32 + 0x170)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_32 + 0x1d8)));
    fun_53d0(rdi48, r12_34, rax44, rcx35, r8_36, r9_37);
    rsp49 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp33) - 8 - 8 + 8 + 16 - 8 + 8 - 8 + 8 - 8 + 8);
    *reinterpret_cast<void***>(r13_32 + 0x1d8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_32 + 0x1d8)) + reinterpret_cast<unsigned char>(rax44));
    *reinterpret_cast<void***>(&ecx50) = *reinterpret_cast<void***>(v8);
    if (*reinterpret_cast<void***>(&ecx50)) 
        goto addr_99cf_5;
    rdx51 = v31;
    addr_9a3c_7:
    rbx52 = reinterpret_cast<void***>(r13_32 + 0x1d8);
    r12_53 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp49) + 0x400);
    rcx54 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp49) + 16);
    my_snprintf(r12_53, 0x7d0, rdx51, rcx54, r8_36, r9_37, v55, v31, v56, v57, v58, v59, v60, v61, 0x6726);
    rax62 = fun_51d0(r12_53, 0x7d0, r12_53, 0x7d0);
    rdx63 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_32 + 0x1d8)) + reinterpret_cast<unsigned char>(rax62));
    httpd_realloc_str(r15_45, r14_46, rdx63, rcx54, r8_36, r9_37);
    rdi64 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_32 + 0x170)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_32 + 0x1d8)));
    fun_53d0(rdi64, r12_53, rax62, rcx54, r8_36, r9_37);
    *reinterpret_cast<void***>(r13_32 + 0x1d8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_32 + 0x1d8)) + reinterpret_cast<unsigned char>(rax62));
    rsi65 = *reinterpret_cast<void***>(r13_32 + 0x118);
    eax66 = match("**MSIE**", rsi65, rax62, rcx54, r8_36, r9_37);
    rsp67 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp49) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
    if (eax66) {
        rdx68 = *rbx52 + 5;
        httpd_realloc_str(r15_45, r14_46, rdx68, rcx54, r8_36, r9_37);
        rax69 = *reinterpret_cast<void***>(r15_45);
        rcx70 = *rbx52;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax69) + reinterpret_cast<unsigned char>(rcx70) + 4) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rax69) + reinterpret_cast<unsigned char>(rcx70)) = 0x2d2d213c;
        rdx71 = *rbx52;
        *rbx52 = rdx71 + 5;
        httpd_realloc_str(r15_45, r14_46, rdx71 + 83, rcx70, r8_36, r9_37);
        rcx72 = *rbx52;
        __asm__("movups xmm0, [rip+0x9e7a]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9e60]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9e44]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9e28]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9e0c]");
        __asm__("movups [rax+rcx], xmm0");
        rdx73 = *rbx52;
        *rbx52 = rdx73 + 78;
        httpd_realloc_str(r15_45, r14_46, rdx73 + 0x9c, rcx72, r8_36, r9_37);
        rcx74 = *rbx52;
        __asm__("movups xmm0, [rip+0x9e1d]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9e03]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9de7]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9dcb]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9daf]");
        __asm__("movups [rax+rcx], xmm0");
        rdx75 = *rbx52;
        *rbx52 = rdx75 + 78;
        httpd_realloc_str(r15_45, r14_46, rdx75 + 0x9c, rcx74, r8_36, r9_37);
        rcx76 = *rbx52;
        __asm__("movups xmm0, [rip+0x9dc0]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9da6]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9d8a]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9d6e]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9d52]");
        __asm__("movups [rax+rcx], xmm0");
        rdx77 = *rbx52;
        *rbx52 = rdx77 + 78;
        httpd_realloc_str(r15_45, r14_46, rdx77 + 0x9c, rcx76, r8_36, r9_37);
        rcx78 = *rbx52;
        __asm__("movups xmm0, [rip+0x9d63]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9d49]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9d2d]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9d11]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9cf5]");
        __asm__("movups [rax+rcx], xmm0");
        rdx79 = *rbx52;
        *rbx52 = rdx79 + 78;
        httpd_realloc_str(r15_45, r14_46, rdx79 + 0x9c, rcx78, r8_36, r9_37);
        rcx80 = *rbx52;
        __asm__("movups xmm0, [rip+0x9d06]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9cec]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9cd0]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9cb4]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9c98]");
        __asm__("movups [rax+rcx], xmm0");
        rdx81 = *rbx52;
        *rbx52 = rdx81 + 78;
        httpd_realloc_str(r15_45, r14_46, rdx81 + 0x9c, rcx80, r8_36, r9_37);
        rcx82 = *rbx52;
        __asm__("movups xmm0, [rip+0x9ca9]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9c8f]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9c73]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9c57]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9c3b]");
        __asm__("movups [rax+rcx], xmm0");
        rdx83 = *rbx52;
        *rbx52 = rdx83 + 78;
        httpd_realloc_str(r15_45, r14_46, rdx83 + 82, rcx82, r8_36, r9_37);
        rsp67 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp67) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_45)) + reinterpret_cast<unsigned char>(*rbx52)) = 0xa3e2d2d;
        *rbx52 = *rbx52 + 4;
    }
    r12_84 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp67) + 0xbd0);
    my_snprintf(r12_84, 0x3e8, "    <hr>\n\n    <address><a href=\"%s\">%s</a></address>\n\n  </body>\n\n</html>\n", "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", r9_37, v85, v31, v86, v87, v88, v89, v90, v91, 0x6726);
    rax92 = fun_51d0(r12_84, 0x3e8, r12_84, 0x3e8);
    rdx93 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*rbx52) + reinterpret_cast<unsigned char>(rax92));
    httpd_realloc_str(r15_45, r14_46, rdx93, "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", r9_37);
    rdi94 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_45)) + reinterpret_cast<unsigned char>(*rbx52));
    fun_53d0(rdi94, r12_84, rax92, "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", r9_37);
    *rbx52 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*rbx52) + reinterpret_cast<unsigned char>(rax92));
    return;
    addr_99cf_5:
    rdi95 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp49) + 16);
    rbx96 = v8 + 1;
    rax97 = rdi95;
    rdx51 = v31;
    do {
        esi98 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(&ecx50));
        if (esi98 == 62) {
            rax97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax97) + 3);
        } else {
            if (esi98 == 60) {
                rax97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax97) + 3);
            }
        }
        rax97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax97) + 1);
        ecx50 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx96));
        if (!*reinterpret_cast<void***>(&ecx50)) 
            goto addr_9a3c_7;
        ++rbx96;
    } while (reinterpret_cast<int64_t>(rax97) - reinterpret_cast<int64_t>(rdi95) < 0x3e3);
    goto addr_9a3c_7;
}

void fun_56a0(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8);

void** httpd_write_response(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7) {
    void** r14_8;
    int1_t zf9;
    void** ebp10;
    void** rdi11;
    void** rax12;
    void** rdi13;
    void** rbx14;
    void** r15d15;
    void** r12_16;
    uint32_t ebp17;
    void** rsi18;
    void** rdx19;
    int64_t rdi20;
    uint32_t* rax21;

    r14_8 = rdi;
    zf9 = sub_process == 1;
    if (zf9 && ((ebp10 = *reinterpret_cast<void***>(r14_8 + 0x2c0), rdi11 = ebp10, *reinterpret_cast<int32_t*>(&rdi11 + 4) = 0, rax12 = fun_5160(rdi11, 3), *reinterpret_cast<uint32_t*>(&rax12) != 0xffffffff) && (*reinterpret_cast<uint32_t*>(&rax12) & 0xfffff7ff) != *reinterpret_cast<uint32_t*>(&rax12))) {
        rdi13 = ebp10;
        *reinterpret_cast<int32_t*>(&rdi13 + 4) = 0;
        rax12 = fun_5160(rdi13, 4);
    }
    rbx14 = *reinterpret_cast<void***>(r14_8 + 0x1d8);
    if (rbx14) {
        r15d15 = *reinterpret_cast<void***>(r14_8 + 0x2c0);
        r12_16 = *reinterpret_cast<void***>(r14_8 + 0x170);
        *reinterpret_cast<uint32_t*>(&rax12) = 0;
        *reinterpret_cast<int32_t*>(&rax12 + 4) = 0;
        ebp17 = 0;
        do {
            rsi18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_16) + reinterpret_cast<unsigned char>(rax12));
            rdx19 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx14) - reinterpret_cast<unsigned char>(rax12));
            *reinterpret_cast<void***>(&rdi20) = r15d15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = 0;
            rax12 = fun_5170(rdi20, rsi18, rdx19, rcx, r8, r9);
            if (*reinterpret_cast<int32_t*>(&rax12) < reinterpret_cast<int32_t>(0)) {
                rax21 = fun_5090();
                *reinterpret_cast<uint32_t*>(&rax12) = *rax21;
                *reinterpret_cast<int32_t*>(&rax12 + 4) = 0;
                if (*reinterpret_cast<uint32_t*>(&rax12) == 11) 
                    goto addr_93d0_7;
                if (*reinterpret_cast<uint32_t*>(&rax12) != 4) 
                    break;
                addr_93d0_7:
                fun_56a0(1, rsi18, rdx19, rcx, r8);
            } else {
                if (!*reinterpret_cast<uint32_t*>(&rax12)) 
                    break;
                ebp17 = ebp17 + *reinterpret_cast<uint32_t*>(&rax12);
            }
            rax12 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(ebp17)));
        } while (reinterpret_cast<unsigned char>(rbx14) > reinterpret_cast<unsigned char>(rax12));
        *reinterpret_cast<void***>(r14_8 + 0x1d8) = reinterpret_cast<void**>(0);
    }
    return rax12;
}

void httpd_set_ndelay(void** rdi, int64_t rsi, void** rdx) {
    void** rax4;

    rax4 = fun_5160(rdi, 3);
    if (*reinterpret_cast<uint32_t*>(&rax4) == 0xffffffff || (*reinterpret_cast<uint32_t*>(&rax4) | 0x800) == *reinterpret_cast<uint32_t*>(&rax4)) {
        return;
    } else {
        goto fcntl;
    }
}

int32_t free_count = 0;

void tmr_cancel(void** rdi, void** rsi) {
    void** rax3;
    void** rcx4;
    int32_t tmp32_5;
    void** rax6;
    int32_t tmp32_7;

    rax3 = *reinterpret_cast<void***>(rdi + 48);
    if (!rax3) {
        rcx4 = *reinterpret_cast<void***>(rdi + 56);
        *reinterpret_cast<void***>(0x1b530 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdi + 64)) * 8) = rcx4;
        if (rcx4) {
            addr_115fa_3:
            *reinterpret_cast<void***>(rcx4 + 48) = rax3;
        }
    } else {
        *reinterpret_cast<void***>(rax3 + 56) = *reinterpret_cast<void***>(rdi + 56);
        rcx4 = *reinterpret_cast<void***>(rdi + 56);
        if (rcx4) 
            goto addr_115fa_3;
    }
    tmp32_5 = active_count - 1;
    active_count = tmp32_5;
    rax6 = free_timers;
    *reinterpret_cast<void***>(rdi + 56) = rax6;
    free_timers = rdi;
    tmp32_7 = free_count + 1;
    free_count = tmp32_7;
    *reinterpret_cast<void***>(rdi + 48) = reinterpret_cast<void**>(0);
    return;
}

void** fun_5070(void* rdi, void** rsi, void** rdx);

void fun_5530(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

void fun_5450(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8, void** a9, void* a10);

struct s6 {
    void** f0;
    signed char[7] pad8;
    void** f8;
    signed char[39] pad48;
    void** f30;
    signed char[55] pad104;
    void** f68;
};

void mmc_unmap(void** rdi, struct s6* rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8, void* a9, void* a10);

void httpd_close_conn(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7) {
    void* rsp8;
    void** r15_9;
    void** rcx10;
    void** rdx11;
    void** rsi12;
    void** v13;
    void** v14;
    void** v15;
    void** v16;
    int40_t v17;
    void** v18;
    void** v19;
    void** v20;
    int16_t v21;
    void* rsp22;
    void** rcx23;
    void** v24;
    void** v25;
    void** v26;
    void** v27;
    int40_t v28;
    void** v29;
    void** v30;
    void** v31;
    int16_t v32;
    void** rcx33;
    void** v34;
    void** v35;
    void** v36;
    void** v37;
    int40_t v38;
    void** v39;
    void** v40;
    void** v41;
    int16_t v42;
    void** rdi43;
    uint32_t eax44;
    int32_t edx45;
    void** rsi46;
    int32_t eax47;
    void*** rsp48;
    uint32_t eax49;
    uint32_t ecx50;
    void** rax51;
    uint32_t eax52;
    void** rax53;
    void** ecx54;
    void* v55;
    void** v56;
    void** v57;
    void** rax58;
    void** rax59;
    void* rsp60;
    void** r12_61;
    void* rsp62;
    void* rdx63;
    uint64_t rax64;
    uint64_t rdx65;
    uint32_t edx66;
    int64_t r9_67;
    int64_t rdx68;
    void** r8_69;
    uint64_t rax70;
    void** r9_71;
    void** v72;
    void** v73;
    void** v74;
    void** v75;
    int40_t v76;
    void** v77;
    void** v78;
    void** r12_79;
    void** rdi80;
    uint32_t eax81;
    int32_t ecx82;
    void** rsi83;
    int32_t eax84;
    void*** rsp85;
    uint32_t eax86;
    uint32_t ecx87;
    void** rax88;
    uint32_t eax89;
    void** rax90;
    void** ecx91;
    void* v92;
    void** rdi93;
    void** rdi94;

    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 0x290);
    if (!*reinterpret_cast<uint32_t*>(*reinterpret_cast<void***>(rdi + 8) + 80)) {
        r15_9 = reinterpret_cast<void**>("-");
        if (*reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 0x168))) {
            r15_9 = *reinterpret_cast<void***>(rdi + 0x168);
        }
        if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 8) + 100) || *reinterpret_cast<int32_t*>(rdi + 0x214)) {
            rcx10 = *reinterpret_cast<void***>(rdi + 0xd0);
            rdx11 = reinterpret_cast<void**>("%.200s");
            *reinterpret_cast<int32_t*>(&rsi12) = 0x131;
            *reinterpret_cast<int32_t*>(&rsi12 + 4) = 0;
            my_snprintf(reinterpret_cast<int64_t>(rsp8) + 0xe0, 0x131, "%.200s", rcx10, r8, r9, v13, v14, v15, v16, v17, v18, v19, v20, v21);
            rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
        } else {
            rcx23 = *reinterpret_cast<void***>(rdi + 0x200);
            if (!rcx23) {
                rcx23 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 8) + 8);
            }
            r8 = *reinterpret_cast<void***>(rdi + 0xd0);
            rdx11 = reinterpret_cast<void**>("/%.100s%.200s");
            *reinterpret_cast<int32_t*>(&rsi12) = 0x131;
            *reinterpret_cast<int32_t*>(&rsi12 + 4) = 0;
            my_snprintf(reinterpret_cast<int64_t>(rsp8) + 0xe0, 0x131, "/%.100s%.200s", rcx23, r8, r9, v24, v25, v26, v27, v28, v29, v30, v31, v32);
            rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8);
        }
        rcx33 = *reinterpret_cast<void***>(rdi + 0xc8);
        if (reinterpret_cast<signed char>(rcx33) >= reinterpret_cast<signed char>(0)) {
            rdx11 = reinterpret_cast<void**>("%lld");
            *reinterpret_cast<int32_t*>(&rsi12) = 40;
            *reinterpret_cast<int32_t*>(&rsi12 + 4) = 0;
            my_snprintf(reinterpret_cast<int64_t>(rsp22) + 64, 40, "%lld", rcx33, r8, r9, v34, v35, v36, v37, v38, v39, v40, v41, v42);
            rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
        }
        if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 8) + 88)) {
            rdi43 = rdi + 16;
            eax44 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi + 16));
            edx45 = 28;
            if (*reinterpret_cast<int16_t*>(&eax44) != 10) {
                edx45 = 0;
            }
            *reinterpret_cast<int32_t*>(&rsi46) = 16;
            *reinterpret_cast<int32_t*>(&rsi46 + 4) = 0;
            if (*reinterpret_cast<int16_t*>(&eax44) != 2) {
                *reinterpret_cast<int32_t*>(&rsi46) = edx45;
                *reinterpret_cast<int32_t*>(&rsi46 + 4) = 0;
            }
            eax47 = fun_52d0(rdi43, rsi46, 0x1b110, 0xc8, rdi43, rsi46, 0x1b110, 0xc8);
            rsp48 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
            if (!eax47) {
                if (!*reinterpret_cast<void***>(rdi + 24) && (!*reinterpret_cast<int32_t*>(rdi + 28) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi + 32) == 0xffff0000) && (eax49 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx50 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx50 | eax49))))) {
                    rax51 = fun_51d0(0x1b117, rsi46, 0x1b117, rsi46);
                    fun_5540(0x1b110, 0x1b117, rax51 + 1);
                    rsp48 = rsp48 - 8 + 8 - 8 + 8;
                }
            } else {
                *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
            }
            eax52 = *reinterpret_cast<int32_t*>(rdi + 0xb4) + 0xffffffff;
            if (eax52 > 5) {
                r8 = reinterpret_cast<void**>("UNKNOWN");
            } else {
                r8 = *reinterpret_cast<void***>(0x18da0 + reinterpret_cast<int32_t>(eax52) * 8);
            }
            rax53 = *reinterpret_cast<void***>(rdi + 0xe0);
            ecx54 = *reinterpret_cast<void***>(rdi + 0xb8);
            __asm__("movups xmm0, [rbx+0x110]");
            __asm__("movups [rsp+0x18], xmm0");
            v55 = reinterpret_cast<void*>(rsp48 + 64);
            v56 = ecx54;
            v57 = rax53;
            r9 = reinterpret_cast<void**>(rsp48 + 0xe0);
            rcx = r15_9;
            fun_5480(6, "%.80s - %.80s \"%.80s %.200s %.80s\" %d %s \"%.200s\" \"%.200s\"", 6, "%.80s - %.80s \"%.80s %.200s %.80s\" %d %s \"%.200s\" \"%.200s\"");
        } else {
            if (!rsi) {
                rax58 = fun_5400();
                rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
            } else {
                rax58 = *reinterpret_cast<void***>(rsi);
            }
            rax59 = fun_5070(reinterpret_cast<int64_t>(rsp22) + 56, rsi12, rdx11);
            rsp60 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
            r12_61 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp60) + 0x220);
            fun_5530(r12_61, 100, "%d/%b/%Y:%H:%M:%S", rax59, r8, r9);
            rsp62 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp60) - 8 + 8);
            rdx63 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__intrinsic()) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax59 + 40)));
            rax64 = reinterpret_cast<uint64_t>(rdx63) >> 63;
            rdx65 = reinterpret_cast<uint64_t>(rdx63) >> 5;
            edx66 = *reinterpret_cast<int32_t*>(&rdx65) + *reinterpret_cast<uint32_t*>(&rax64);
            *reinterpret_cast<uint32_t*>(&r9_67) = -edx66;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_67) + 4) = 0;
            if (__intrinsic()) {
                *reinterpret_cast<uint32_t*>(&r9_67) = edx66;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_67) + 4) = 0;
            }
            *reinterpret_cast<uint32_t*>(&rdx68) = edx66 >> 31;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx68) + 4) = 0;
            *reinterpret_cast<int32_t*>(&r8_69) = static_cast<int32_t>(rdx68 + rdx68) + 43;
            *reinterpret_cast<int32_t*>(&r8_69 + 4) = 0;
            rax70 = reinterpret_cast<uint64_t>(0x88888889 * r9_67) >> 37;
            *reinterpret_cast<uint32_t*>(&r9_71) = *reinterpret_cast<uint32_t*>(&r9_67) - *reinterpret_cast<int32_t*>(&rax70) * 60 + *reinterpret_cast<int32_t*>(&rax70) * 100;
            *reinterpret_cast<int32_t*>(&r9_71 + 4) = 0;
            my_snprintf(reinterpret_cast<int64_t>(rsp62) + 0x70, 100, "%s %c%04d", r12_61, r8_69, r9_71, v72, v73, v74, v75, v76, v77, v78, rax58, 45);
            r12_79 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 8) + 88);
            rdi80 = rdi + 16;
            eax81 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi + 16));
            ecx82 = 28;
            if (*reinterpret_cast<int16_t*>(&eax81) != 10) {
                ecx82 = 0;
            }
            *reinterpret_cast<int32_t*>(&rsi83) = 16;
            *reinterpret_cast<int32_t*>(&rsi83 + 4) = 0;
            if (*reinterpret_cast<int16_t*>(&eax81) != 2) {
                *reinterpret_cast<int32_t*>(&rsi83) = ecx82;
                *reinterpret_cast<int32_t*>(&rsi83 + 4) = 0;
            }
            eax84 = fun_52d0(rdi80, rsi83, 0x1b110, 0xc8, rdi80, rsi83, 0x1b110, 0xc8);
            rsp85 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp62) - 8 + 8 - 8 + 8);
            if (!eax84) {
                if (!*reinterpret_cast<void***>(rdi + 24) && (!*reinterpret_cast<int32_t*>(rdi + 28) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi + 32) == 0xffff0000) && (eax86 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx87 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx87 | eax86))))) {
                    rax88 = fun_51d0(0x1b117, rsi83, 0x1b117, rsi83);
                    fun_5540(0x1b110, 0x1b117, rax88 + 1);
                    rsp85 = rsp85 - 8 + 8 - 8 + 8;
                }
            } else {
                *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
            }
            eax89 = *reinterpret_cast<int32_t*>(rdi + 0xb4) + 0xffffffff;
            if (eax89 > 5) {
                r9 = reinterpret_cast<void**>("UNKNOWN");
            } else {
                r9 = *reinterpret_cast<void***>(0x18da0 + reinterpret_cast<int32_t>(eax89) * 8);
            }
            rax90 = *reinterpret_cast<void***>(rdi + 0xe0);
            ecx91 = *reinterpret_cast<void***>(rdi + 0xb8);
            __asm__("movups xmm0, [rbx+0x110]");
            __asm__("movups [rsp+0x20], xmm0");
            v92 = reinterpret_cast<void*>(rsp85 + 64);
            *reinterpret_cast<void***>(&v55) = ecx91;
            v56 = rax90;
            v57 = reinterpret_cast<void**>(rsp85 + 0xe0);
            r8 = reinterpret_cast<void**>(rsp85 + 0x70);
            rcx = r15_9;
            fun_53a0(r12_79, "%.80s - %.80s [%s] \"%.80s %.300s %.80s\" %d %s \"%.200s\" \"%.200s\"\n", 0x1b110, rcx, r8, r9, v57, v56, r12_79, "%.80s - %.80s [%s] \"%.80s %.300s %.80s\" %d %s \"%.200s\" \"%.200s\"\n", 0x1b110, rcx, r8, r9, v57, v56);
            rdi93 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 8) + 88);
            fun_5450(rdi93, "%.80s - %.80s [%s] \"%.80s %.300s %.80s\" %d %s \"%.200s\" \"%.200s\"\n", 0x1b110, rcx, r8, r9, v57, v56, *reinterpret_cast<void***>(&v55), v92);
        }
    }
    rdi94 = *reinterpret_cast<void***>(rdi + 0x2c8);
    if (rdi94) {
        mmc_unmap(rdi94, rdi + 0x230, rsi, rcx, r8, r9, v57, v56, v55, v92);
        *reinterpret_cast<void***>(rdi + 0x2c8) = reinterpret_cast<void**>(0);
    }
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdi + 0x2c0)) >= reinterpret_cast<signed char>(0)) {
        fun_52a0();
        *reinterpret_cast<void***>(rdi + 0x2c0) = reinterpret_cast<void**>(0xffffffff);
    }
    return;
}

void** httpd_destroy_conn(void** rdi, void** rsi, void** rdx, void** rcx) {
    void** rdi5;
    void** rdi6;
    void** rdi7;
    void** rdi8;
    void** rdi9;
    void** rdi10;
    void** rdi11;
    void** rdi12;
    void** rdi13;
    void** rdi14;
    void** rdi15;
    void** rdi16;
    void** rdi17;
    void** rax18;

    if (*reinterpret_cast<void***>(rdi)) {
        rdi5 = *reinterpret_cast<void***>(rdi + 0x90);
        fun_5040(rdi5, rsi, rdx);
        rdi6 = *reinterpret_cast<void***>(rdi + 0xd8);
        fun_5040(rdi6, rsi, rdx);
        rdi7 = *reinterpret_cast<void***>(rdi + 0xe8);
        fun_5040(rdi7, rsi, rdx);
        rdi8 = *reinterpret_cast<void***>(rdi + 0xf0);
        fun_5040(rdi8, rsi, rdx);
        rdi9 = *reinterpret_cast<void***>(rdi + 0xf8);
        fun_5040(rdi9, rsi, rdx);
        rdi10 = *reinterpret_cast<void***>(rdi + 0x100);
        fun_5040(rdi10, rsi, rdx);
        rdi11 = *reinterpret_cast<void***>(rdi + 0x108);
        fun_5040(rdi11, rsi, rdx);
        rdi12 = *reinterpret_cast<void***>(rdi + 0x120);
        fun_5040(rdi12, rsi, rdx);
        rdi13 = *reinterpret_cast<void***>(rdi + 0x128);
        fun_5040(rdi13, rsi, rdx);
        rdi14 = *reinterpret_cast<void***>(rdi + 0x148);
        fun_5040(rdi14, rsi, rdx);
        rdi15 = *reinterpret_cast<void***>(rdi + 0x158);
        fun_5040(rdi15, rsi, rdx);
        rdi16 = *reinterpret_cast<void***>(rdi + 0x168);
        fun_5040(rdi16, rsi, rdx);
        rdi17 = *reinterpret_cast<void***>(rdi + 0x170);
        rax18 = fun_5040(rdi17, rsi, rdx);
        *reinterpret_cast<void***>(rdi) = reinterpret_cast<void**>(0);
    }
    return rax18;
}

int64_t free = 0x5046;

void** fun_5040(void** rdi, void** rsi, void** rdx, ...) {
    goto free;
}

void httpd_terminate(void** rdi, void** rsi, void** rdx, void** rcx) {
    void** rdi5;
    void** rdi6;
    void** rdi7;
    void** rdi8;
    void** rdi9;
    void** rdi10;
    void** rdi11;
    void** rdi12;

    if (*reinterpret_cast<void***>(rdi + 72) != 0xffffffff) {
        fun_52a0();
        *reinterpret_cast<void***>(rdi + 72) = reinterpret_cast<void**>(0xffffffff);
    }
    if (*reinterpret_cast<void***>(rdi + 76) != 0xffffffff) {
        fun_52a0();
        *reinterpret_cast<void***>(rdi + 76) = reinterpret_cast<void**>(0xffffffff);
    }
    rdi5 = *reinterpret_cast<void***>(rdi + 88);
    if (rdi5) {
        fun_5190(rdi5, rsi, rdx);
    }
    rdi6 = *reinterpret_cast<void***>(rdi);
    if (rdi6) {
        fun_5040(rdi6, rsi, rdx);
    }
    rdi7 = *reinterpret_cast<void***>(rdi + 64);
    if (rdi7) {
        fun_5040(rdi7, rsi, rdx);
    }
    rdi8 = *reinterpret_cast<void***>(rdi + 24);
    if (rdi8) {
        fun_5040(rdi8, rsi, rdx);
    }
    rdi9 = *reinterpret_cast<void***>(rdi + 40);
    if (rdi9) {
        fun_5040(rdi9, rsi, rdx);
    }
    rdi10 = *reinterpret_cast<void***>(rdi + 48);
    if (rdi10) {
        fun_5040(rdi10, rsi, rdx);
    }
    rdi11 = *reinterpret_cast<void***>(rdi + 0x70);
    if (rdi11) {
        fun_5040(rdi11, rsi, rdx);
    }
    rdi12 = *reinterpret_cast<void***>(rdi + 0x78);
    if (rdi12) {
        fun_5040(rdi12, rsi, rdx);
    }
    goto free;
}

void** maps = reinterpret_cast<void**>(0);

void** free_maps = reinterpret_cast<void**>(0);

int32_t free_count = 0;

int32_t fun_54f0(void** rdi);

uint64_t mapped_bytes = 0;

int32_t map_count = 0;

void** hash_table = reinterpret_cast<void**>(0);

int32_t alloc_count = 0;

void** mmc_term(void** rdi, void** rsi, void** rdx, void** rcx) {
    void** rax5;
    void** r15_6;
    int32_t ebp7;
    void** rdi8;
    int32_t eax9;
    void** rax10;
    int32_t tmp32_11;
    void** rax12;
    int32_t ebp13;
    void** rax14;
    int32_t ebx15;
    int32_t ebp16;
    int32_t ebx17;
    void** r14_18;

    rax5 = maps;
    if (!rax5) {
        r15_6 = free_maps;
        if (!r15_6) {
            addr_10f2d_3:
            return rax5;
        } else {
            ebp7 = free_count;
        }
    } else {
        do {
            r15_6 = rax5;
            rsi = *reinterpret_cast<void***>(rax5 + 16);
            if (rsi && (rdi8 = *reinterpret_cast<void***>(r15_6 + 48), eax9 = fun_54f0(rdi8), eax9 < 0)) {
                rsi = reinterpret_cast<void**>("munmap - %m");
                fun_5480(3, "munmap - %m", 3, "munmap - %m");
            }
            mapped_bytes = mapped_bytes - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_6 + 16));
            rax10 = *reinterpret_cast<void***>(r15_6 + 64);
            tmp32_11 = map_count - 1;
            map_count = tmp32_11;
            maps = rax10;
            rax12 = free_maps;
            *reinterpret_cast<void***>(r15_6 + 64) = rax12;
            free_maps = r15_6;
            ebp13 = free_count;
            ebp7 = ebp13 + 1;
            free_count = ebp7;
            rax14 = hash_table;
            *reinterpret_cast<void***>(rax14 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r15_6 + 60)) * 8) = reinterpret_cast<void**>(0);
            rax5 = maps;
        } while (rax5);
    }
    ebx15 = alloc_count;
    ebp16 = ebp7 - 1;
    ebx17 = ebx15 - 1;
    do {
        r14_18 = *reinterpret_cast<void***>(r15_6 + 64);
        free_maps = r14_18;
        free_count = ebp16;
        rax5 = fun_5040(r15_6, rsi, rdx);
        alloc_count = ebx17;
        --ebp16;
        --ebx17;
        r15_6 = r14_18;
    } while (r14_18);
    goto addr_10f2d_3;
}

int32_t alloc_count = 0;

void** tmr_term(void** rdi, void** rsi, void** rdx, void** rcx) {
    void** rax5;
    void** rdi6;
    int32_t ebx7;
    int64_t r9_8;
    void** rsi9;
    void** rbp10;
    void** rsi11;
    int32_t ebp12;
    int32_t ebx13;
    int32_t ebp14;
    void** r14_15;

    *reinterpret_cast<int32_t*>(&rax5) = active_count;
    *reinterpret_cast<int32_t*>(&rax5 + 4) = 0;
    rdi6 = free_timers;
    ebx7 = free_count;
    *reinterpret_cast<int32_t*>(&r9_8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
    do {
        rsi9 = *reinterpret_cast<void***>(0x1b530 + r9_8 * 8);
        if (rsi9) {
            while (1) {
                rdx = rsi9;
                rbp10 = *reinterpret_cast<void***>(rsi9 + 48);
                if (!rbp10) {
                    rsi11 = *reinterpret_cast<void***>(rdx + 56);
                    *reinterpret_cast<void***>(0x1b530 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 64)) * 8) = rsi11;
                    if (!rsi11) {
                        addr_117a0_5:
                        *reinterpret_cast<int32_t*>(&rax5) = *reinterpret_cast<int32_t*>(&rax5) - 1;
                        *reinterpret_cast<int32_t*>(&rax5 + 4) = 0;
                        *reinterpret_cast<void***>(rdx + 56) = rdi6;
                        ++ebx7;
                        *reinterpret_cast<void***>(rdx + 48) = reinterpret_cast<void**>(0);
                        rsi9 = *reinterpret_cast<void***>(0x1b530 + r9_8 * 8);
                        rdi6 = rdx;
                        if (!rsi9) 
                            break;
                    } else {
                        addr_117f1_6:
                        *reinterpret_cast<void***>(rsi11 + 48) = rbp10;
                        goto addr_117a0_5;
                    }
                } else {
                    *reinterpret_cast<void***>(rbp10 + 56) = *reinterpret_cast<void***>(rdx + 56);
                    rsi11 = *reinterpret_cast<void***>(rdx + 56);
                    if (rsi11) 
                        goto addr_117f1_6;
                    goto addr_117a0_5;
                }
            }
            active_count = *reinterpret_cast<int32_t*>(&rax5);
            free_timers = rdx;
            free_count = ebx7;
            rdi6 = rdx;
        }
        ++r9_8;
    } while (r9_8 != 67);
    if (rdi6) {
        ebp12 = alloc_count;
        ebx13 = ebx7 - 1;
        ebp14 = ebp12 - 1;
        do {
            r14_15 = *reinterpret_cast<void***>(rdi6 + 56);
            free_timers = r14_15;
            free_count = ebx13;
            rax5 = fun_5040(rdi6, rsi9, rdx);
            alloc_count = ebp14;
            --ebx13;
            --ebp14;
            rdi6 = r14_15;
        } while (r14_15);
    }
    return rax5;
}

void** fun_5710();

int32_t fun_5140(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx, int64_t r8);

int32_t fun_5510(int64_t rdi, void** rsi, int64_t rdx, void* rcx, int64_t r8);

int32_t fun_5490(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx, int64_t r8);

void** initialize_listen_socket(void** rdi) {
    uint32_t eax2;
    void** eax3;
    uint32_t eax4;
    int32_t ecx5;
    void** rsi6;
    int32_t eax7;
    uint32_t eax8;
    uint32_t ecx9;
    void** rax10;
    void** r14d11;
    int32_t ebp12;
    void** rdi13;
    void* rcx14;
    int64_t rdi15;
    int32_t eax16;
    uint32_t eax17;
    int32_t ebx18;
    int64_t rdi19;
    int64_t rdx20;
    int32_t eax21;
    uint32_t eax22;
    void** rsi23;
    int32_t eax24;
    uint32_t eax25;
    uint32_t ecx26;
    void** rax27;
    void** rdi28;
    void** rax29;
    void** rsi30;
    void** rdi31;
    int64_t rdx32;
    void** rax33;
    int64_t rdi34;
    int32_t eax35;

    eax2 = static_cast<uint32_t>(reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi))) & 0xfffffff7;
    if (*reinterpret_cast<int16_t*>(&eax2) != 2) {
        fun_5480(2, "unknown sockaddr family on listen socket");
    } else {
        eax3 = fun_5710();
        if (reinterpret_cast<signed char>(eax3) < reinterpret_cast<signed char>(0)) {
            eax4 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi));
            ecx5 = 28;
            if (*reinterpret_cast<int16_t*>(&eax4) != 10) {
                ecx5 = 0;
            }
            *reinterpret_cast<int32_t*>(&rsi6) = 16;
            *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
            if (*reinterpret_cast<int16_t*>(&eax4) != 2) {
                *reinterpret_cast<int32_t*>(&rsi6) = ecx5;
                *reinterpret_cast<int32_t*>(&rsi6 + 4) = 0;
            }
            eax7 = fun_52d0(rdi, rsi6, 0x1b110, 0xc8, rdi, rsi6, 0x1b110, 0xc8);
            if (!eax7) {
                if (!*reinterpret_cast<void***>(rdi + 8) && (!*reinterpret_cast<signed char*>(rdi + 12) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi + 16) == 0xffff0000) && (eax8 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx9 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx9 | eax8))))) {
                    rax10 = fun_51d0(0x1b117, rsi6, 0x1b117, rsi6);
                    fun_5540(0x1b110, 0x1b117, rax10 + 1);
                }
            } else {
                *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
            }
            fun_5480(2, "socket %.80s - %m", 2, "socket %.80s - %m");
        } else {
            r14d11 = eax3;
            ebp12 = 0;
            rdi13 = eax3;
            *reinterpret_cast<int32_t*>(&rdi13 + 4) = 0;
            fun_5160(rdi13, 2, rdi13, 2);
            rcx14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 16 - 8 + 8 - 8 + 8 + 12);
            *reinterpret_cast<void***>(&rdi15) = r14d11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = 0;
            eax16 = fun_5140(rdi15, 1, 2, rcx14, 4);
            if (eax16 < 0) {
                fun_5480(2, "setsockopt SO_REUSEADDR - %m", 2, "setsockopt SO_REUSEADDR - %m");
            }
            eax17 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi));
            ebx18 = 28;
            if (*reinterpret_cast<int16_t*>(&eax17) == 10) {
                ebp12 = 28;
            }
            if (*reinterpret_cast<int16_t*>(&eax17) == 2) {
                ebp12 = 16;
            }
            *reinterpret_cast<void***>(&rdi19) = r14d11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx20) = ebp12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = 0;
            eax21 = fun_5510(rdi19, rdi, rdx20, rcx14, 4);
            if (eax21 < 0) 
                goto addr_904e_20; else 
                goto addr_8f8e_21;
        }
    }
    addr_91a3_22:
    r14d11 = reinterpret_cast<void**>(0xffffffff);
    goto addr_91a9_23;
    addr_904e_20:
    eax22 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rdi));
    if (*reinterpret_cast<int16_t*>(&eax22) != 10) {
        ebx18 = 0;
    }
    if (*reinterpret_cast<int16_t*>(&eax22) == 2) {
        ebx18 = 16;
    }
    *reinterpret_cast<int32_t*>(&rsi23) = ebx18;
    *reinterpret_cast<int32_t*>(&rsi23 + 4) = 0;
    eax24 = fun_52d0(rdi, rsi23, 0x1b110, 0xc8, rdi, rsi23, 0x1b110, 0xc8);
    if (!eax24) {
        if (!*reinterpret_cast<void***>(rdi + 8) && (!*reinterpret_cast<signed char*>(rdi + 12) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi + 16) == 0xffff0000) && (eax25 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx26 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx26 | eax25))))) {
            rax27 = fun_51d0(0x1b117, rsi23, 0x1b117, rsi23);
            fun_5540(0x1b110, 0x1b117, rax27 + 1);
        }
    } else {
        *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
    }
    fun_5480(2, "bind %.80s - %m", 2, "bind %.80s - %m");
    addr_919b_32:
    fun_52a0();
    goto addr_91a3_22;
    addr_8f8e_21:
    rdi28 = r14d11;
    *reinterpret_cast<int32_t*>(&rdi28 + 4) = 0;
    rax29 = fun_5160(rdi28, 3, rdi28, 3);
    if (*reinterpret_cast<uint32_t*>(&rax29) == 0xffffffff) {
        rsi30 = reinterpret_cast<void**>("fcntl F_GETFL - %m");
    } else {
        rdi31 = r14d11;
        *reinterpret_cast<int32_t*>(&rdi31 + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rdx32) = *reinterpret_cast<uint32_t*>(&rax29) | 0x800;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = 0;
        rax33 = fun_5160(rdi31, 4, rdi31, 4);
        if (*reinterpret_cast<int32_t*>(&rax33) < 0) {
            rsi30 = reinterpret_cast<void**>("fcntl O_NDELAY - %m");
        } else {
            *reinterpret_cast<void***>(&rdi34) = r14d11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = 0;
            eax35 = fun_5490(rdi34, 0x400, rdx32, rcx14, 4);
            if (eax35 >= 0) {
                addr_91a9_23:
                return r14d11;
            } else {
                rsi30 = reinterpret_cast<void**>("listen - %m");
            }
        }
    }
    fun_5480(2, rsi30, 2, rsi30);
    goto addr_919b_32;
}

void free_httpd_server(void** rdi, void** rsi, void** rdx) {
    void** rdi4;
    void** rdi5;
    void** rdi6;
    void** rdi7;
    void** rdi8;
    void** rdi9;
    void** rdi10;

    rdi4 = *reinterpret_cast<void***>(rdi);
    if (rdi4) {
        fun_5040(rdi4, rsi, rdx);
    }
    rdi5 = *reinterpret_cast<void***>(rdi + 64);
    if (rdi5) {
        fun_5040(rdi5, rsi, rdx);
    }
    rdi6 = *reinterpret_cast<void***>(rdi + 24);
    if (rdi6) {
        fun_5040(rdi6, rsi, rdx);
    }
    rdi7 = *reinterpret_cast<void***>(rdi + 40);
    if (rdi7) {
        fun_5040(rdi7, rsi, rdx);
    }
    rdi8 = *reinterpret_cast<void***>(rdi + 48);
    if (rdi8) {
        fun_5040(rdi8, rsi, rdx);
    }
    rdi9 = *reinterpret_cast<void***>(rdi + 0x70);
    if (rdi9) {
        fun_5040(rdi9, rsi, rdx);
    }
    rdi10 = *reinterpret_cast<void***>(rdi + 0x78);
    if (rdi10) {
        fun_5040(rdi10, rsi, rdx);
    }
    goto free;
}

int64_t qsort = 0x5116;

void fun_5110(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto qsort;
}

int64_t getnameinfo = 0x52d6;

int32_t fun_52d0(void** rdi, void** rsi, void** rdx, void** rcx, ...) {
    goto getnameinfo;
}

int64_t socket = 0x5716;

void** fun_5710() {
    goto socket;
}

int64_t setsockopt = 0x5146;

int32_t fun_5140(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx, int64_t r8) {
    goto setsockopt;
}

int64_t bind = 0x5516;

int32_t fun_5510(int64_t rdi, void** rsi, int64_t rdx, void* rcx, int64_t r8) {
    goto bind;
}

int64_t listen = 0x5496;

int32_t fun_5490(int64_t rdi, int64_t rsi, int64_t rdx, void* rcx, int64_t r8) {
    goto listen;
}

int64_t close = 0x52a6;

void fun_52a0() {
    goto close;
}

void fun_5130();

void my_snprintf(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8, void** a9, void** a10, int40_t a11, void** a12, void** a13, void** a14, int16_t a15) {
    signed char al16;

    if (al16) {
        __asm__("movaps [rsp+0x50], xmm0");
        __asm__("movaps [rsp+0x60], xmm1");
        __asm__("movaps [rsp+0x70], xmm2");
        __asm__("movaps [rsp+0x80], xmm3");
        __asm__("movaps [rsp+0x90], xmm4");
        __asm__("movaps [rsp+0xa0], xmm5");
        __asm__("movaps [rsp+0xb0], xmm6");
        __asm__("movaps [rsp+0xc0], xmm7");
    }
    fun_5130();
    return;
}

void* fun_5120(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

int32_t send_err_file(void** rdi, void** esi, void** rdx, void** rcx, void** r8, void** r9) {
    void** rbx7;
    void** rax8;
    int32_t eax9;
    void** r14_10;
    void** r8_11;
    void** rsp12;
    void** rcx13;
    void* rax14;
    void** rsp15;
    void** r15_16;
    void** r12_17;
    void** r13_18;
    void** rax19;
    void** rdx20;
    void*** rdi21;
    void** r14_22;
    void** v23;
    void** v24;
    void** v25;
    void** v26;
    int40_t v27;
    void** v28;
    void** v29;
    void** v30;
    int16_t v31;
    void** rax32;
    void** rdx33;
    void*** rdi34;

    rbx7 = rdi;
    rax8 = fun_5590(r8, "r");
    if (!rax8) {
        eax9 = 0;
    } else {
        r14_10 = rax8;
        r8_11 = rcx;
        send_mime(rbx7, esi, rdx, 0x13553, r8_11, "text/html; charset=%s", 0xff, 0);
        rsp12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x7d8 - 8 + 8 - 8 - 8 - 8 + 8 + 16);
        rcx13 = r14_10;
        rax14 = fun_5120(rsp12, 1, 0x3e7, rcx13, r8_11, "text/html; charset=%s");
        rsp15 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp12 - 8) + 8);
        if (rax14) {
            r15_16 = rbx7 + 0x170;
            r12_17 = rbx7 + 0x1d0;
            r13_18 = rsp15;
            do {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rsp15) + reinterpret_cast<uint64_t>(rax14)) = 0;
                rax19 = fun_51d0(r13_18, 1, r13_18, 1);
                rdx20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7 + 0x1d8)) + reinterpret_cast<unsigned char>(rax19));
                httpd_realloc_str(r15_16, r12_17, rdx20, rcx13, r8_11, "text/html; charset=%s");
                rdi21 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7 + 0x170)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7 + 0x1d8)));
                fun_53d0(rdi21, r13_18, rax19, rcx13, r8_11, "text/html; charset=%s");
                *reinterpret_cast<void***>(rbx7 + 0x1d8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7 + 0x1d8)) + reinterpret_cast<unsigned char>(rax19));
                rcx13 = r14_10;
                rax14 = fun_5120(r13_18, 1, 0x3e7, rcx13, r8_11, "text/html; charset=%s");
                rsp15 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15 - 8) + 8 - 8 + 8 - 8 + 8 - 8 + 8);
            } while (rax14);
        }
        fun_5190(r14_10, 1, 0x3e7, r14_10, 1, 0x3e7);
        r14_22 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rsp15 - 8) + 8 + 0x3f0);
        my_snprintf(r14_22, 0x3e8, "    <hr>\n\n    <address><a href=\"%s\">%s</a></address>\n\n  </body>\n\n</html>\n", "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", "text/html; charset=%s", v23, v24, v25, v26, v27, v28, v29, v30, v31);
        rax32 = fun_51d0(r14_22, 0x3e8, r14_22, 0x3e8);
        rdx33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7 + 0x1d8)) + reinterpret_cast<unsigned char>(rax32));
        httpd_realloc_str(rbx7 + 0x170, rbx7 + 0x1d0, rdx33, "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", "text/html; charset=%s");
        rdi34 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7 + 0x170)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7 + 0x1d8)));
        fun_53d0(rdi34, r14_22, rax32, "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", "text/html; charset=%s");
        *reinterpret_cast<void***>(rbx7 + 0x1d8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7 + 0x1d8)) + reinterpret_cast<unsigned char>(rax32));
        eax9 = 1;
    }
    return eax9;
}

int64_t vsnprintf = 0x5136;

void fun_5130() {
    goto vsnprintf;
}

void** fun_55b0(void* rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

void send_mime(void** rdi, void** esi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8) {
    void** v9;
    void** r14d10;
    void** rsi11;
    void** v12;
    void** rax13;
    void** v14;
    void** v15;
    void** rax16;
    void* rsp17;
    void** v18;
    void** rax19;
    void* rsp20;
    void* rsp21;
    void** rax22;
    void* rsp23;
    void** r13_24;
    void* rsp25;
    void** rcx26;
    void** r15_27;
    void** v28;
    void** v29;
    void** v30;
    int16_t v31;
    void* rsp32;
    void** rcx33;
    void** r12_34;
    void** r8_35;
    void** r9_36;
    void*** rsp37;
    void** rax38;
    void** rbp39;
    void** r12_40;
    void*** r15_41;
    void** rdx42;
    void* rsp43;
    void** rdi44;
    void** rsi45;
    void** rdx46;
    void** v47;
    void* rsp48;
    void** r13_49;
    void** r14_50;
    void** rbp51;
    void** v52;
    void** v53;
    void** v54;
    int16_t v55;
    void** rax56;
    void** rdx57;
    void** rdi58;
    void** rbp59;
    void** v60;
    void** v61;
    void** v62;
    int16_t v63;
    void** rax64;
    void** rdx65;
    void** rdi66;
    void** rcx67;
    void* rsp68;
    void** v69;
    int16_t v70;
    void* rsp71;
    void** rbp72;
    void** rax73;
    void** rdx74;
    void** rdi75;
    void** rax76;
    void** rcx77;
    void** rbp78;
    void** v79;
    void** v80;
    void** v81;
    int16_t v82;
    void** rax83;
    void** rdx84;
    void** rdi85;
    void** v86;
    void** v87;
    void** v88;
    int16_t v89;
    void* rax90;
    void** rax91;
    void* rsp92;
    void** r14_93;
    void** rbp94;
    void** v95;
    void** v96;
    int16_t v97;
    void** rax98;
    void** rdx99;
    void** rdi100;
    void** rax101;
    void** rdi102;
    void** rbx103;

    v9 = r8;
    r14d10 = esi;
    rsi11 = a7;
    *reinterpret_cast<void***>(rdi + 0xb8) = r14d10;
    *reinterpret_cast<void***>(rdi + 0xc0) = rsi11;
    if (!*reinterpret_cast<int32_t*>(rdi + 0x208)) {
        addr_ee40_2:
        return;
    } else {
        v12 = rcx;
        if (!reinterpret_cast<int1_t>(r14d10 == 0xc8) || (!*reinterpret_cast<int32_t*>(rdi + 0x210) || ((rax13 = *reinterpret_cast<void***>(rdi + 0x218), rcx = *reinterpret_cast<void***>(rdi + 0x220), reinterpret_cast<signed char>(rcx) < reinterpret_cast<signed char>(rax13)) || ((--rsi11, rcx == rsi11) && !rax13 || (rax13 = *reinterpret_cast<void***>(rdi + 0x1e8), rax13 != 0xffffffffffffffff) && rax13 != *reinterpret_cast<void***>(rdi + 0x288))))) {
            v14 = rdx;
            *reinterpret_cast<int32_t*>(rdi + 0x210) = 0;
            *reinterpret_cast<signed char*>(&rax13) = 1;
            *reinterpret_cast<int32_t*>(&v15 + 4) = *reinterpret_cast<int32_t*>(&rax13);
        } else {
            *reinterpret_cast<void***>(rdi + 0xb8) = reinterpret_cast<void**>(0xce);
            r14d10 = reinterpret_cast<void**>(0xce);
            v14 = reinterpret_cast<void**>("Partial Content");
            *reinterpret_cast<int32_t*>(&v15 + 4) = 0;
        }
        rax16 = fun_5400();
        rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x768 - 8 + 8);
        v18 = rax16;
        if (!a8) {
        }
        rax19 = fun_55b0(reinterpret_cast<int64_t>(rsp17) + 16, rsi11, rdx, rcx, r8, r9);
        rsp20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8);
        fun_5530(reinterpret_cast<int64_t>(rsp20) + 48, 100, "%a, %d %b %Y %H:%M:%S GMT", rax19, r8, r9);
        rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp20) - 8 + 8);
        rax22 = fun_55b0(reinterpret_cast<int64_t>(rsp21) + 0x7a8, 100, "%a, %d %b %Y %H:%M:%S GMT", rax19, r8, r9);
        rsp23 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp21) - 8 + 8);
        r13_24 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp23) + 0x110);
        fun_5530(r13_24, 100, "%a, %d %b %Y %H:%M:%S GMT", rax22, r8, r9);
        rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp23) - 8 + 8);
        rcx26 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 8) + 40);
        r15_27 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp25) + 0x570);
        my_snprintf(r15_27, 0x1f4, r9, rcx26, r8, r9, v15, v14, v18, v12, *reinterpret_cast<int40_t*>(&v9), v28, v29, v30, v31);
        rsp32 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8);
        rcx33 = *reinterpret_cast<void***>(rdi + 0xe0);
        r12_34 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp32) + 0x180);
        r8_35 = r14d10;
        *reinterpret_cast<int32_t*>(&r8_35 + 4) = 0;
        r9_36 = v14;
        rsp37 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp32) - 8);
        my_snprintf(r12_34, 0x3e8, "%.20s %d %s\r\nServer: %s\r\nContent-Type: %s\r\nDate: %s\r\nLast-Modified: %s\r\nAccept-Ranges: bytes\r\nConnection: close\r\n", rcx33, r8_35, r9_36, "thttpd/2.29 23May2018", r15_27, rsp37 + 56, r13_24, *reinterpret_cast<int40_t*>(&v15), v14, v18, v12, *reinterpret_cast<int16_t*>(&v9));
        rax38 = fun_51d0(r12_34, 0x3e8, r12_34, 0x3e8);
        rbp39 = rdi + 0x170;
        r12_40 = rdi + 0x1d0;
        r15_41 = reinterpret_cast<void***>(rdi + 0x1d8);
        rdx42 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x1d8)) + reinterpret_cast<unsigned char>(rax38));
        httpd_realloc_str(rbp39, r12_40, rdx42, rcx33, r8_35, r9_36);
        rsp43 = reinterpret_cast<void*>(rsp37 - 8 - 8 - 8 - 8 + 8 + 32 - 8 + 8 - 8 + 8);
        rdi44 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x170)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x1d8)));
        rsi45 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp43) + 0x180);
        rdx46 = rax38;
        v47 = reinterpret_cast<void**>(0xeb33);
        fun_5540(rdi44, rsi45, rdx46, rdi44, rsi45, rdx46);
        rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp43) - 8 + 8);
        r13_49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax38) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x1d8)));
        *reinterpret_cast<void***>(rdi + 0x1d8) = r13_49;
        r14_50 = rbp39;
        if (reinterpret_cast<uint32_t>(r14d10 + 0xfffffe70) <= 0xffffff37) {
            rbp51 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 0x180);
            my_snprintf(rbp51, 0x3e8, "Cache-Control: no-cache,no-store\r\n", rcx33, r8_35, r9_36, v15, v14, v18, v12, *reinterpret_cast<int40_t*>(&v9), v52, v53, v54, v55);
            rax56 = fun_51d0(rbp51, 0x3e8, rbp51, 0x3e8);
            rdx57 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*r15_41) + reinterpret_cast<unsigned char>(rax56));
            httpd_realloc_str(r14_50, r12_40, rdx57, rcx33, r8_35, r9_36);
            rdi58 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_50)) + reinterpret_cast<unsigned char>(*r15_41));
            rsi45 = rbp51;
            rdx46 = rax56;
            v47 = reinterpret_cast<void**>(0xeb9f);
            fun_5540(rdi58, rsi45, rdx46, rdi58, rsi45, rdx46);
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
            r13_49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax56) + reinterpret_cast<unsigned char>(*r15_41));
            *r15_41 = r13_49;
        }
        if (*reinterpret_cast<void***>(v12)) {
            rbp59 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 0x180);
            my_snprintf(rbp59, 0x3e8, "Content-Encoding: %s\r\n", v12, r8_35, r9_36, v15, v14, v18, v12, *reinterpret_cast<int40_t*>(&v9), v60, v61, v62, v63);
            rax64 = fun_51d0(rbp59, 0x3e8, rbp59, 0x3e8);
            rdx65 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*r15_41) + reinterpret_cast<unsigned char>(rax64));
            httpd_realloc_str(r14_50, r12_40, rdx65, v12, r8_35, r9_36);
            rdi66 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_50)) + reinterpret_cast<unsigned char>(*r15_41));
            rsi45 = rbp59;
            rdx46 = rax64;
            v47 = reinterpret_cast<void**>(0xebfa);
            fun_5540(rdi66, rsi45, rdx46, rdi66, rsi45, rdx46);
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
            r13_49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax64) + reinterpret_cast<unsigned char>(*r15_41));
            *r15_41 = r13_49;
        }
        if (*reinterpret_cast<signed char*>(&v15 + 4)) 
            goto addr_ec07_13;
    }
    rcx67 = *reinterpret_cast<void***>(rdi + 0x218);
    r8_35 = *reinterpret_cast<void***>(rdi + 0x220);
    rsp68 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8);
    r9_36 = a7;
    my_snprintf(reinterpret_cast<int64_t>(rsp68) + 0x188, 0x3e8, "Content-Range: bytes %lld-%lld/%lld\r\nContent-Length: %lld\r\n", rcx67, r8_35, r9_36, reinterpret_cast<unsigned char>(r8_35) - reinterpret_cast<unsigned char>(rcx67) + 1, v47, v15, v14, *reinterpret_cast<int40_t*>(&v18), v12, v9, v69, v70);
    rsp71 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp68) - 8 - 8 + 8 + 16);
    addr_ec79_15:
    rbp72 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp71) + 0x180);
    rax73 = fun_51d0(rbp72, 0x3e8, rbp72, 0x3e8);
    rdx74 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*r15_41) + reinterpret_cast<unsigned char>(rax73));
    httpd_realloc_str(r14_50, r12_40, rdx74, rcx67, r8_35, r9_36);
    rdi75 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_50)) + reinterpret_cast<unsigned char>(*r15_41));
    rsi45 = rbp72;
    rdx46 = rax73;
    fun_5540(rdi75, rsi45, rdx46, rdi75, rsi45, rdx46);
    rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp71) - 8 + 8 - 8 + 8 - 8 + 8);
    r13_49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax73) + reinterpret_cast<unsigned char>(*r15_41));
    *r15_41 = r13_49;
    goto addr_ecb4_16;
    addr_ec07_13:
    rcx67 = a7;
    if (reinterpret_cast<signed char>(rcx67) < reinterpret_cast<signed char>(0)) {
        addr_ecb4_16:
        rax76 = *reinterpret_cast<void***>(rdi + 8);
        rcx77 = *reinterpret_cast<void***>(rax76 + 48);
        if (*reinterpret_cast<void***>(rcx77)) {
            rbp78 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp48) + 0x180);
            my_snprintf(rbp78, 0x3e8, "P3P: %s\r\n", rcx77, r8_35, r9_36, v15, v14, v18, v12, *reinterpret_cast<int40_t*>(&v9), v79, v80, v81, v82);
            rax83 = fun_51d0(rbp78, 0x3e8, rbp78, 0x3e8);
            rdx84 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x1d8)) + reinterpret_cast<unsigned char>(rax83));
            httpd_realloc_str(r14_50, r12_40, rdx84, rcx77, r8_35, r9_36);
            rdi85 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x170)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x1d8)));
            rsi45 = rbp78;
            rdx46 = rax83;
            fun_5540(rdi85, rsi45, rdx46, rdi85, rsi45, rdx46);
            rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
            r13_49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax83) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x1d8)));
            *reinterpret_cast<void***>(rdi + 0x1d8) = r13_49;
            rax76 = *reinterpret_cast<void***>(rdi + 8);
        }
    } else {
        my_snprintf(reinterpret_cast<int64_t>(rsp48) + 0x180, 0x3e8, "Content-Length: %lld\r\n", rcx67, r8_35, r9_36, v15, v14, v18, v12, *reinterpret_cast<int40_t*>(&v9), v86, v87, v88, v89);
        rsp71 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
        goto addr_ec79_15;
    }
    *reinterpret_cast<void***>(&rax90) = *reinterpret_cast<void***>(rax76 + 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax90) + 4) = 0;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax90)) >= reinterpret_cast<signed char>(0)) {
        rax91 = fun_55b0(reinterpret_cast<int64_t>(rsp48) + 40, rsi45, rdx46, rcx77, r8_35, r9_36);
        rsp92 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp48) - 8 + 8);
        r14_93 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp92) + 0xa0);
        fun_5530(r14_93, 100, "%a, %d %b %Y %H:%M:%S GMT", rax91, r8_35, r9_36);
        rcx77 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 8) + 56);
        *reinterpret_cast<int32_t*>(&rcx77 + 4) = 0;
        rbp94 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp92) - 8 + 8 + 0x180);
        r8_35 = r14_93;
        r14_50 = r14_50;
        my_snprintf(rbp94, 0x3e8, "Cache-Control: max-age=%d\r\nExpires: %s\r\n", rcx77, r8_35, r9_36, v15, v14, v18, v12, *reinterpret_cast<int40_t*>(&v9), reinterpret_cast<int64_t>(rax90) + reinterpret_cast<unsigned char>(v18), v95, v96, v97);
        rax98 = fun_51d0(rbp94, 0x3e8, rbp94, 0x3e8);
        rdx99 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x1d8)) + reinterpret_cast<unsigned char>(rax98));
        httpd_realloc_str(r14_50, r12_40, rdx99, rcx77, r8_35, r9_36);
        rdi100 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x170)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x1d8)));
        rsi45 = rbp94;
        fun_5540(rdi100, rsi45, rax98, rdi100, rsi45, rax98);
        r13_49 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax98) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0x1d8)));
        *reinterpret_cast<void***>(rdi + 0x1d8) = r13_49;
    }
    if (*reinterpret_cast<void***>(v9)) {
        rax101 = fun_51d0(v9, rsi45, v9, rsi45);
        httpd_realloc_str(r14_50, r12_40, reinterpret_cast<unsigned char>(r13_49) + reinterpret_cast<unsigned char>(rax101), rcx77, r8_35, r9_36);
        rdi102 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_50)) + reinterpret_cast<unsigned char>(*r15_41));
        fun_5540(rdi102, v9, rax101, rdi102, v9, rax101);
        rbx103 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax101) + reinterpret_cast<unsigned char>(*r15_41));
        *r15_41 = rbx103;
        r13_49 = rbx103;
    }
    httpd_realloc_str(r14_50, r12_40, r13_49 + 2, rcx77, r8_35, r9_36);
    *reinterpret_cast<int16_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_50)) + reinterpret_cast<unsigned char>(*r15_41)) = 0xa0d;
    *r15_41 = *r15_41 + 2;
    goto addr_ee40_2;
}

int64_t fread = 0x5126;

void* fun_5120(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto fread;
}

int64_t memcpy = 0x53d6;

void fun_53d0(void*** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto memcpy;
}

int64_t accept = 0x55c6;

void** fun_55c0(int64_t rdi, void* rsi, void* rdx) {
    goto accept;
}

int64_t memset = 0x5276;

void fun_5270(void** rdi, ...) {
    goto memset;
}

int64_t strspn = 0x52f6;

void* fun_52f0(void** rdi, void** rsi, void** rdx) {
    goto strspn;
}

int64_t strpbrk = 0x54b6;

struct s3* fun_54b0(void** rdi, int64_t rsi) {
    goto strpbrk;
}

int64_t strcpy = 0x50d6;

void fun_50d0(void** rdi, void** rsi, void** rdx, ...) {
    goto strcpy;
}

int64_t __ctype_b_loc = 0x56f6;

void*** fun_56f0(void** rdi, ...) {
    goto __ctype_b_loc;
}

int64_t strncasecmp = 0x5446;

int32_t fun_5440(void** rdi, void** rsi, void** rdx) {
    goto strncasecmp;
}

int64_t strtoll = 0x5386;

void** fun_5380(void** rdi) {
    goto strtoll;
}

int64_t __ctype_tolower_loc = 0x56e6;

unsigned char** fun_56e0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto __ctype_tolower_loc;
}

int64_t strcat = 0x55e6;

void fun_55e0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto strcat;
}

/* expand_symlinks.checked */
void** expand_symlinks_checked = reinterpret_cast<void**>(0);

/* expand_symlinks.rest */
void** expand_symlinks_rest = reinterpret_cast<void**>(0);

void** fun_5150(void** rdi, void** rsi, void** rdx, void** rcx);

void** expand_symlinks(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, int32_t a7) {
    void* rsp8;
    void** r14_9;
    void** rsi10;
    int32_t eax11;
    void** v12;
    void** rax13;
    void** rax14;
    void** r15_15;
    void** rdx16;
    void** rdi17;
    void** rsi18;
    void* rsp19;
    void** rax20;
    void** r14_21;
    void** rbp22;
    void** rax23;
    void** rax24;
    void** rdi25;
    void** rcx26;
    void** rax27;
    void* rbx28;
    void** rdx29;
    void** rax30;
    void** rax31;
    void** rbx32;
    int32_t v33;
    void** r12_34;
    void** rax35;
    void* rsp36;
    int32_t eax37;
    void** rbp38;
    struct s4* rax39;
    void** r13_40;
    void** rbx41;
    void** r13_42;
    void** rax43;
    void** rdi44;
    void** rdi45;
    void* rbp46;
    void** rdi47;
    int32_t eax48;
    void** rax49;
    void** rdi50;
    void** rsi51;
    void** rax52;
    void** rbp53;
    void** rcx54;
    int1_t zf55;
    uint32_t* rax56;
    void* rsp57;
    void** rdi58;
    void** r15_59;
    void** rax60;
    void* rsp61;
    void* rdi62;
    uint64_t rbx63;
    void* rax64;
    uint64_t rbx65;
    void** rsi66;
    uint32_t ecx67;
    void** rcx68;
    uint32_t edx69;
    void** rcx70;
    uint32_t edx71;
    void** rcx72;
    uint32_t edx73;
    void** rcx74;
    void** rdi75;
    void** rax76;
    void** rax77;
    void** rax78;
    void** rbx79;
    void** r12_80;
    struct s4* rax81;
    void** r13_82;
    void** r12_83;
    void** rax84;
    void** rdi85;
    void** rsi86;
    void** rax87;
    void** rax88;

    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x13a8);
    r14_9 = rsi;
    if (!*reinterpret_cast<int32_t*>(&rdx) || (rsi10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp8) + 32), eax11 = fun_53b0(rdi, rsi10, rdx, rcx, r8, r9), rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8), eax11 == -1)) {
        v12 = r14_9;
        httpd_realloc_str(0x1b1e8, 0x1b1f8, 1, rcx, r8, r9);
        rax13 = expand_symlinks_checked;
        *reinterpret_cast<void***>(rax13) = reinterpret_cast<void**>(0);
        rax14 = fun_51d0(rdi, 0x1b1f8, rdi, 0x1b1f8);
        r15_15 = rax14;
        rdx16 = rax14;
        httpd_realloc_str(0x1b1f0, 0x1b200, rdx16, rcx, r8, r9);
        rdi17 = expand_symlinks_rest;
        rsi18 = rdi;
        fun_50d0(rdi17, rsi18, rdx16);
        rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        rax20 = expand_symlinks_rest;
        if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax20) + reinterpret_cast<unsigned char>(r15_15) + 0xffffffffffffffff) == 47) {
            --r15_15;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax20) + reinterpret_cast<unsigned char>(r15_15)) = 0;
        }
        r14_21 = expand_symlinks_rest;
        if (!*reinterpret_cast<int32_t*>(&rcx)) {
            while (*reinterpret_cast<void***>(r14_21) == 47) {
                rbp22 = r14_21 + 1;
                rax23 = fun_51d0(rbp22, rsi18, rbp22, rsi18);
                rdx16 = rax23 + 1;
                rsi18 = rbp22;
                fun_5540(r14_21, rsi18, rdx16);
                rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8 - 8 + 8);
                --r15_15;
                r14_21 = expand_symlinks_rest;
            }
        }
        if (r15_15) 
            goto addr_b8a5_9;
    } else {
        rax24 = fun_51d0(rdi, rsi10);
        httpd_realloc_str(0x1b1e8, 0x1b1f8, rax24, rcx, r8, r9);
        rdi25 = expand_symlinks_checked;
        fun_50d0(rdi25, rdi, rax24);
        rcx26 = expand_symlinks_checked;
        if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx26) + reinterpret_cast<unsigned char>(rax24) + 0xffffffffffffffff) == 47) {
            rax27 = rax24 + 0xffffffffffffffff;
            rcx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx26) + reinterpret_cast<unsigned char>(rax24) + 0xffffffffffffffff);
            rbx28 = reinterpret_cast<void*>(rax24 + 0xfffffffffffffffe);
            do {
                *reinterpret_cast<void***>(rcx26) = reinterpret_cast<void**>(0);
                rdx29 = expand_symlinks_checked;
                rcx26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx29) + reinterpret_cast<unsigned char>(rax27) + 0xffffffffffffffff);
                --rax27;
                rbx28 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx28) - 1);
            } while (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rdx29) + reinterpret_cast<uint64_t>(rbx28)) == 47);
        }
        httpd_realloc_str(0x1b1f0, 0x1b200, 0, rcx26, r8, r9);
        rax30 = expand_symlinks_rest;
        *reinterpret_cast<void***>(rax30) = reinterpret_cast<void**>(0);
        rax31 = expand_symlinks_rest;
        *reinterpret_cast<void***>(r14_9) = rax31;
        goto addr_bd17_14;
    }
    addr_bcc0_15:
    *reinterpret_cast<void***>(v12) = r14_21;
    rbx32 = expand_symlinks_checked;
    if (*reinterpret_cast<void***>(rbx32)) {
        addr_bd1e_16:
        return rbx32;
    } else {
        *reinterpret_cast<void***>(rbx32) = reinterpret_cast<void**>(46);
    }
    addr_bd17_14:
    rbx32 = expand_symlinks_checked;
    goto addr_bd1e_16;
    addr_b8a5_9:
    v33 = 0;
    *reinterpret_cast<int32_t*>(&r12_34) = 0;
    *reinterpret_cast<int32_t*>(&r12_34 + 4) = 0;
    do {
        addr_b8cf_18:
        rax35 = fun_5220(r14_21, 47, rdx16, r14_21, 47, rdx16);
        rsp36 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8);
        if (!rax35) {
            eax37 = fun_5370(r14_21, "..", r14_21, "..");
            rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp36) - 8 + 8);
            if (!eax37) {
                if (r12_34) {
                    rbp38 = expand_symlinks_checked;
                    rax39 = fun_5250(rbp38, 47, rdx16, rcx);
                    rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8);
                    if (!rax39) {
                        *reinterpret_cast<int32_t*>(&r13_40) = 0;
                        *reinterpret_cast<int32_t*>(&r13_40 + 4) = 0;
                        *reinterpret_cast<void***>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(rbp38))) = reinterpret_cast<void**>(0);
                    } else {
                        r13_40 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax39) - reinterpret_cast<unsigned char>(rbp38));
                        if (!r13_40) {
                            *reinterpret_cast<int32_t*>(&r13_40) = 1;
                            *reinterpret_cast<int32_t*>(&r13_40 + 4) = 0;
                        }
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rbp38) + reinterpret_cast<unsigned char>(r13_40)) = 0;
                    }
                } else {
                    *reinterpret_cast<uint32_t*>(&rbx41) = 0;
                    *reinterpret_cast<int32_t*>(&rbx41 + 4) = 0;
                    *reinterpret_cast<int32_t*>(&r13_40) = 0;
                    *reinterpret_cast<int32_t*>(&r13_40 + 4) = 0;
                    goto addr_ba77_27;
                }
            } else {
                rdx16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_34) + reinterpret_cast<unsigned char>(r15_15) + 1);
                httpd_realloc_str(0x1b1e8, 0x1b1f8, rdx16, rcx, r8, r9);
                if (!r12_34) {
                    *reinterpret_cast<int32_t*>(&r13_42) = 0;
                    *reinterpret_cast<int32_t*>(&r13_42 + 4) = 0;
                } else {
                    rax43 = expand_symlinks_checked;
                    r13_42 = r12_34;
                    if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r12_34) + reinterpret_cast<unsigned char>(rax43) + 0xffffffffffffffff) != 47) {
                        r13_42 = r12_34 + 1;
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax43) + reinterpret_cast<unsigned char>(r12_34)) = 47;
                    }
                }
                rdi44 = expand_symlinks_checked;
                rdi45 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi44) + reinterpret_cast<unsigned char>(r13_42));
                fun_50d0(rdi45, r14_21, rdx16, rdi45, r14_21, rdx16);
                rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8 - 8 + 8);
                r13_40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_42) + reinterpret_cast<unsigned char>(r15_15));
            }
        } else {
            rbp46 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax35) - reinterpret_cast<unsigned char>(r14_21));
            if (!*reinterpret_cast<uint32_t*>(&rbp46)) {
                r13_40 = r12_34 + 1;
                httpd_realloc_str(0x1b1e8, 0x1b1f8, r13_40, rcx, r8, r9);
                rdi47 = expand_symlinks_checked;
                *reinterpret_cast<uint32_t*>(&rdx16) = 1;
                *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
                fun_50a0(reinterpret_cast<unsigned char>(rdi47) + reinterpret_cast<unsigned char>(r12_34), r14_21, 1, rcx, r8, r9);
                rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp36) - 8 + 8 - 8 + 8);
                goto addr_ba43_35;
            } else {
                *reinterpret_cast<uint32_t*>(&rdx16) = *reinterpret_cast<uint32_t*>(&rbp46);
                *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
                if (*reinterpret_cast<int32_t*>(&rbp46) < reinterpret_cast<int32_t>(3)) {
                    rdx16 = reinterpret_cast<void**>(2);
                }
                eax48 = fun_50b0(r14_21, "..", rdx16, r14_21, "..", rdx16);
                rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp36) - 8 + 8);
                if (!eax48) 
                    goto addr_ba04_39; else 
                    goto addr_b918_40;
            }
        }
        *reinterpret_cast<uint32_t*>(&rbx41) = 0;
        *reinterpret_cast<int32_t*>(&rbx41 + 4) = 0;
        addr_ba77_27:
        rax49 = r15_15;
        addr_ba7a_42:
        r14_21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14_21) + reinterpret_cast<unsigned char>(rax49));
        rdi50 = expand_symlinks_checked;
        if (!*reinterpret_cast<void***>(rdi50)) {
            addr_b8c0_43:
            r12_34 = r13_40;
            r15_15 = rbx41;
            if (!rbx41) 
                goto addr_bcc0_15; else 
                goto addr_b8cf_18;
        } else {
            *reinterpret_cast<uint32_t*>(&rdx16) = 0x1387;
            *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
            rsi51 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp19) + 32);
            rax52 = fun_5150(rdi50, rsi51, 0x1387, rcx);
            rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8);
            if (!reinterpret_cast<int1_t>(rax52 == 0xffffffffffffffff)) {
                if (v33 == 32) 
                    break;
                *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp19) + reinterpret_cast<unsigned char>(rax52) + 32) = 0;
                rbp53 = rax52 + 0xffffffffffffffff;
                *reinterpret_cast<uint32_t*>(&rcx54) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp19) + reinterpret_cast<unsigned char>(rax52) + 31);
                *reinterpret_cast<int32_t*>(&rcx54 + 4) = 0;
                zf55 = *reinterpret_cast<signed char*>(&rcx54) == 47;
                if (!zf55) 
                    goto addr_bb4c_47;
            } else {
                rax56 = fun_5090();
                rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8);
                if (*rax56 == 22) 
                    goto addr_b8c0_43; else 
                    goto addr_bab6_49;
            }
        }
        *reinterpret_cast<uint32_t*>(&rcx54) = 0;
        *reinterpret_cast<int32_t*>(&rcx54 + 4) = 0;
        addr_bb4c_47:
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp19) + reinterpret_cast<unsigned char>(rax52) + 31) = *reinterpret_cast<signed char*>(&rcx54);
        if (!zf55) {
            rbp53 = rax52;
        }
        if (!rbx41) {
            rdx16 = rbp53;
            httpd_realloc_str(0x1b1f0, 0x1b200, rdx16, rcx54, r8, r9);
            rsp57 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8);
            rdi58 = expand_symlinks_rest;
            fun_50d0(rdi58, reinterpret_cast<int64_t>(rsp57) + 32, rdx16);
            rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp57) - 8 + 8);
            r15_15 = rbp53;
        } else {
            r15_59 = expand_symlinks_rest;
            rax60 = fun_51d0(r14_21, rsi51);
            fun_5540(r15_59, r14_21, rax60 + 1);
            r15_15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx41) + reinterpret_cast<unsigned char>(rbp53) + 1);
            rdx16 = r15_15;
            httpd_realloc_str(0x1b1f0, 0x1b200, rdx16, rcx54, r8, r9);
            rsp61 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8 - 8 + 8 - 8 + 8);
            if (!(*reinterpret_cast<uint32_t*>(&rbx41) & 0x80000000)) {
                *reinterpret_cast<uint32_t*>(&rdi62) = *reinterpret_cast<uint32_t*>(&rbx41);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi62) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rbx63) = *reinterpret_cast<uint32_t*>(&rbx41) + 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx63) + 4) = 0;
                rax64 = rdi62;
                rbx65 = rbx63 & 3;
                if (rbx65) {
                    rdx16 = rbp53 + 1;
                    rax64 = rdi62;
                    do {
                        rsi66 = expand_symlinks_rest;
                        ecx67 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rsi66) + reinterpret_cast<uint64_t>(rax64));
                        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rax64) + (reinterpret_cast<unsigned char>(rsi66) + reinterpret_cast<unsigned char>(rdx16))) = *reinterpret_cast<signed char*>(&ecx67);
                        rax64 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax64) - 1);
                        --rbx65;
                    } while (rbx65);
                }
                if (*reinterpret_cast<uint32_t*>(&rdi62) >= 3) {
                    do {
                        rcx68 = expand_symlinks_rest;
                        edx69 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx68) + reinterpret_cast<uint64_t>(rax64));
                        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rax64) + (reinterpret_cast<unsigned char>(rcx68) + reinterpret_cast<unsigned char>(rbp53)) + 1) = *reinterpret_cast<signed char*>(&edx69);
                        rcx70 = expand_symlinks_rest;
                        edx71 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx70) + reinterpret_cast<uint64_t>(rax64) - 1);
                        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rax64) + (reinterpret_cast<unsigned char>(rcx70) + reinterpret_cast<unsigned char>(rbp53))) = *reinterpret_cast<signed char*>(&edx71);
                        rcx72 = expand_symlinks_rest;
                        edx73 = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx72) + reinterpret_cast<uint64_t>(rax64) - 2);
                        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rax64) + (reinterpret_cast<unsigned char>(rcx72) + reinterpret_cast<unsigned char>(rbp53)) - 1) = *reinterpret_cast<signed char*>(&edx73);
                        rcx74 = expand_symlinks_rest;
                        *reinterpret_cast<uint32_t*>(&rdx16) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rcx74) + reinterpret_cast<uint64_t>(rax64) - 3);
                        *reinterpret_cast<int32_t*>(&rdx16 + 4) = 0;
                        *reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rax64) + (reinterpret_cast<unsigned char>(rcx74) + reinterpret_cast<unsigned char>(rbp53)) - 2) = *reinterpret_cast<signed char*>(&rdx16);
                        rax64 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax64) - 4);
                    } while (!reinterpret_cast<int1_t>(rax64 == 0xffffffffffffffff));
                }
            }
            rdi75 = expand_symlinks_rest;
            fun_50d0(rdi75, reinterpret_cast<int64_t>(rsp61) + 32, rdx16);
            rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp61) - 8 + 8);
            rax76 = expand_symlinks_rest;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax76) + reinterpret_cast<unsigned char>(rbp53)) = 47;
        }
        ++v33;
        r14_21 = expand_symlinks_rest;
        rax77 = expand_symlinks_checked;
        *reinterpret_cast<int32_t*>(&rcx) = 0;
        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
        if (*reinterpret_cast<void***>(r14_21) == 47) {
            r12_34 = reinterpret_cast<void**>(0);
            continue;
        }
        addr_ba43_35:
        rax78 = expand_symlinks_checked;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax78) + reinterpret_cast<unsigned char>(r13_40)) = 0;
        rax49 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<uint32_t*>(&rbp46) + 1)));
        rbx41 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_15) - reinterpret_cast<unsigned char>(rax49));
        goto addr_ba7a_42;
        addr_ba04_39:
        if (r12_34) {
            rbx79 = r12_34;
            r12_80 = expand_symlinks_checked;
            rax81 = fun_5250(r12_80, 47, rdx16, rcx);
            rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8);
            if (!rax81) {
                *reinterpret_cast<int32_t*>(&r13_40) = 0;
                *reinterpret_cast<int32_t*>(&r13_40 + 4) = 0;
            } else {
                r13_40 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax81) - reinterpret_cast<unsigned char>(r12_80));
                if (!r13_40) {
                    *reinterpret_cast<int32_t*>(&r13_40) = 1;
                    *reinterpret_cast<int32_t*>(&r13_40 + 4) = 0;
                }
            }
        } else {
            *reinterpret_cast<int32_t*>(&r13_40) = 0;
            *reinterpret_cast<int32_t*>(&r13_40 + 4) = 0;
            goto addr_ba43_35;
        }
        addr_ba40_68:
        r12_34 = rbx79;
        goto addr_ba43_35;
        addr_b918_40:
        r13_82 = r12_34;
        r12_83 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rbp46)));
        httpd_realloc_str(0x1b1e8, 0x1b1f8, reinterpret_cast<unsigned char>(r12_83) + reinterpret_cast<unsigned char>(r13_82) + 1, rcx, r8, r9);
        if (!r13_82) {
            rbx79 = r13_82;
            *reinterpret_cast<int32_t*>(&r13_82) = 0;
            *reinterpret_cast<int32_t*>(&r13_82 + 4) = 0;
        } else {
            rax84 = expand_symlinks_checked;
            rbx79 = r13_82;
            if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r13_82) + reinterpret_cast<unsigned char>(rax84) + 0xffffffffffffffff) != 47) {
                rcx = rbx79;
                r13_82 = rbx79 + 1;
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax84) + reinterpret_cast<unsigned char>(rbx79)) = 47;
            }
        }
        rdi85 = expand_symlinks_checked;
        rdx16 = r12_83;
        fun_50a0(reinterpret_cast<unsigned char>(rdi85) + reinterpret_cast<unsigned char>(r13_82), r14_21, rdx16, rcx, r8, r9);
        rsp19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8 - 8 + 8);
        r13_40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_82) + reinterpret_cast<unsigned char>(r12_83));
        goto addr_ba40_68;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax77) + reinterpret_cast<unsigned char>(r12_34)) = 0;
    } while (r15_15);
    goto addr_bcc0_15;
    rsi86 = reinterpret_cast<void**>("too many symlinks in %.80s");
    *reinterpret_cast<int32_t*>(&rbx32) = 0;
    *reinterpret_cast<int32_t*>(&rbx32 + 4) = 0;
    addr_bd48_75:
    fun_5480(3, rsi86, 3, rsi86);
    goto addr_bd1e_16;
    addr_bab6_49:
    if (*rax56 > 20 || !static_cast<int1_t>(0x102004 >> *rax56)) {
        rsi86 = reinterpret_cast<void**>("readlink %.80s - %m");
        *reinterpret_cast<int32_t*>(&rbx32) = 0;
        *reinterpret_cast<int32_t*>(&rbx32 + 4) = 0;
        goto addr_bd48_75;
    } else {
        *reinterpret_cast<void***>(v12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14_21) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rbx41) - reinterpret_cast<unsigned char>(r15_15)));
        if (!r12_34) {
            rax87 = expand_symlinks_checked;
            *reinterpret_cast<void***>(rax87) = reinterpret_cast<void**>(46);
            goto addr_bd17_14;
        } else {
            rax88 = expand_symlinks_checked;
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax88) + reinterpret_cast<unsigned char>(r12_34)) = 0;
            goto addr_bd17_14;
        }
    }
}

int64_t stat = 0x53b6;

int32_t fun_53b0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto stat;
}

int64_t readlink = 0x5156;

void** fun_5150(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto readlink;
}

uint32_t hash_mask = 0;

int32_t hash_size = 0;

void mmc_unmap(void** rdi, struct s6* rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8, void* a9, void* a10) {
    void** r10_11;
    void** r11_12;
    void** r8_13;
    void** r9_14;
    uint32_t eax15;
    uint32_t eax16;
    uint32_t eax17;
    uint32_t r14d18;
    int64_t rsi19;
    void** r15_20;
    void** rbx21;
    int64_t rax22;
    void** ebp23;
    void** eax24;
    int64_t rcx25;
    void** rax26;

    if (!rsi) 
        goto addr_10be7_2;
    r10_11 = rsi->f0;
    r11_12 = rsi->f8;
    r8_13 = rsi->f30;
    r9_14 = rsi->f68;
    eax15 = *reinterpret_cast<uint32_t*>(&r11_12) ^ 0x2b5a5;
    eax16 = *reinterpret_cast<uint32_t*>(&r10_11) ^ (eax15 << 5) + eax15;
    eax17 = *reinterpret_cast<uint32_t*>(&r8_13) ^ (eax16 << 5) + eax16;
    r14d18 = hash_mask;
    *reinterpret_cast<void***>(&rsi19) = reinterpret_cast<void**>((*reinterpret_cast<uint32_t*>(&r9_14) ^ (eax17 << 5) + eax17) & r14d18);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = 0;
    r15_20 = hash_table;
    rbx21 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r15_20) + reinterpret_cast<uint64_t>(rsi19 * 8));
    if (!rbx21) 
        goto addr_10be7_2;
    *reinterpret_cast<int32_t*>(&rax22) = hash_size;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
    ebp23 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(rax22 + rsi19) - 1) & r14d18);
    eax24 = *reinterpret_cast<void***>(&rsi19);
    do {
        if (*reinterpret_cast<void***>(rbx21 + 56) == *reinterpret_cast<void***>(&rsi19) && (*reinterpret_cast<void***>(rbx21) == r11_12 && (*reinterpret_cast<void***>(rbx21 + 8) == r10_11 && *reinterpret_cast<void***>(rbx21 + 16) == r8_13))) {
            if (*reinterpret_cast<void***>(rbx21 + 24) == r9_14) 
                break;
        }
    } while (eax24 != ebp23 && (*reinterpret_cast<void***>(&rcx25) = reinterpret_cast<void**>(r14d18 & reinterpret_cast<unsigned char>(eax24 + 1)), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = 0, rbx21 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r15_20) + reinterpret_cast<uint64_t>(rcx25 * 8)), eax24 = *reinterpret_cast<void***>(&rcx25), !!rbx21));
    goto addr_10be7_2;
    if (*reinterpret_cast<void***>(rbx21 + 48) != rdi) {
        addr_10be7_2:
        rbx21 = maps;
        if (!rbx21) {
            addr_10c0f_10:
        } else {
            do {
                if (*reinterpret_cast<void***>(rbx21 + 48) == rdi) 
                    goto addr_10c32_13;
                rbx21 = *reinterpret_cast<void***>(rbx21 + 64);
            } while (rbx21);
            goto addr_10c0f_10;
        }
    } else {
        addr_10c32_13:
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx21 + 32)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx21 + 32) == 0))) {
            *reinterpret_cast<void***>(rbx21 + 32) = *reinterpret_cast<void***>(rbx21 + 32) + 0xffffffff;
            if (!rdx) {
                rax26 = fun_5400();
            } else {
                rax26 = *reinterpret_cast<void***>(rdx);
            }
            *reinterpret_cast<void***>(rbx21 + 40) = rax26;
            return;
        }
    }
    goto syslog;
}

/* auth_check2.authpath */
void** auth_check2_authpath = reinterpret_cast<void**>(0);

/* auth_check2.maxauthpath */
void** auth_check2_maxauthpath = reinterpret_cast<void**>(0);

/* send_authenticate.header */
void** send_authenticate_header = reinterpret_cast<void**>(0);

/* send_authenticate.maxheader */
void** send_authenticate_maxheader = reinterpret_cast<void**>(0);

/* auth_check2.maxprevauthpath */
int64_t auth_check2_maxprevauthpath = 0;

/* auth_check2.prevauthpath */
void** auth_check2_prevauthpath = reinterpret_cast<void**>(0);

/* auth_check2.prevmtime */
int64_t auth_check2_prevmtime = 0;

/* auth_check2.prevuser */
void** auth_check2_prevuser = reinterpret_cast<void**>(0);

void** fun_5690(void** rdi, void** rsi, void** rdx);

void send_authenticate(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, int40_t a7, void** a8, void** a9, void** a10, int16_t a11);

/* auth_check2.prevcryp */
void** auth_check2_prevcryp = reinterpret_cast<void**>(0);

int32_t g12da0 = 0xffffc51f;

int32_t auth_check2(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** r15_7;
    void** r14_8;
    void** rax9;
    void** rdi10;
    void** rsi11;
    void** r8_12;
    int32_t ebx13;
    void** rcx14;
    void** v15;
    void** v16;
    void** v17;
    void** v18;
    int40_t v19;
    void** v20;
    void** v21;
    void** v22;
    int16_t v23;
    void* rsp24;
    void** rdi25;
    void** rsi26;
    int32_t eax27;
    void** rbx28;
    void** rdx29;
    int32_t eax30;
    void* rsp31;
    uint32_t eax32;
    void** rdi33;
    void** rax34;
    void** rax35;
    void** rdi36;
    void** rsi37;
    void** v38;
    void** v39;
    void** v40;
    void** v41;
    int40_t v42;
    void** v43;
    void** v44;
    void** v45;
    int16_t v46;
    void** rcx47;
    void** r9_48;
    void** r12_49;
    void** rax50;
    void* rsp51;
    int1_t zf52;
    void** rbx53;
    void** rsi54;
    int32_t eax55;
    int1_t zf56;
    int64_t v57;
    void** rsi58;
    void** rdi59;
    int32_t eax60;
    void** rax61;
    void* rsp62;
    void** rdi63;
    uint32_t eax64;
    int32_t edx65;
    void** rsi66;
    int32_t eax67;
    uint32_t eax68;
    uint32_t ecx69;
    void** rax70;
    void** r9_71;
    void** r13_72;
    int64_t rax73;
    void* rsp74;
    void** rbp75;
    void** rax76;
    void* rsp77;
    void* rax78;
    void** rax79;
    void* rsp80;
    void** rsi81;
    int32_t eax82;
    int64_t rax83;
    void** rbx84;
    void** rax85;
    int32_t eax86;
    void* rsp87;
    int40_t v88;
    void** v89;
    void** v90;
    void** v91;
    int16_t v92;
    void** r12_93;
    void** rax94;
    void** rdi95;
    void** rdi96;
    void** rax97;
    void** rdi98;
    void** rsi99;
    int64_t v100;
    void** rbp101;
    void** rax102;
    void** rdi103;
    void** rax104;
    void** rdx105;
    void** rdi106;
    void** rsi107;
    void** rsi108;
    void** rax109;
    void** rsi110;
    int32_t eax111;
    void** r15_112;
    void** rax113;
    unsigned char* rbx114;
    int64_t rax115;
    int64_t rax116;

    r15_7 = rsi;
    r14_8 = rdi;
    rax9 = fun_51d0(rsi, rsi);
    httpd_realloc_str(0x1b248, 0x1b250, rax9 + 11, rcx, r8, r9);
    rdi10 = auth_check2_authpath;
    rsi11 = auth_check2_maxauthpath;
    r8_12 = reinterpret_cast<void**>(".htpasswd");
    ebx13 = 0;
    rcx14 = r15_7;
    my_snprintf(rdi10, rsi11, "%s/%s", rcx14, ".htpasswd", r9, v15, v16, v17, v18, v19, v20, v21, v22, v23);
    rsp24 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x498 - 8 + 8 - 8 + 8 - 8 + 8);
    rdi25 = auth_check2_authpath;
    rsi26 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp24) + 16);
    eax27 = fun_53b0(rdi25, rsi26, "%s/%s", rcx14, ".htpasswd", r9);
    if (eax27 < 0) {
        addr_f257_2:
        return ebx13;
    } else {
        rbx28 = *reinterpret_cast<void***>(r14_8 + 0x160);
        if (!*reinterpret_cast<void***>(rbx28)) 
            goto addr_f1cf_4;
        rsi26 = reinterpret_cast<void**>("Basic ");
        *reinterpret_cast<int32_t*>(&rdx29) = 6;
        *reinterpret_cast<int32_t*>(&rdx29 + 4) = 0;
        eax30 = fun_50b0(rbx28, "Basic ", 6, rbx28, "Basic ", 6);
        rsp31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp24) - 8 + 8 - 8 + 8);
        if (eax30) 
            goto addr_f1cf_4;
        *reinterpret_cast<unsigned char*>(&eax32) = *reinterpret_cast<unsigned char*>(rbx28 + 6);
        if (*reinterpret_cast<unsigned char*>(&eax32)) 
            goto addr_f276_7;
    }
    *reinterpret_cast<int32_t*>(&rcx14) = 0;
    *reinterpret_cast<int32_t*>(&rcx14 + 4) = 0;
    addr_f331_9:
    rdi33 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp31) + 0xa0);
    *reinterpret_cast<int32_t*>(&rsi26) = 58;
    *reinterpret_cast<int32_t*>(&rsi26 + 4) = 0;
    rax34 = fun_5220(rdi33, 58, rdx29, rdi33, 58, rdx29);
    rsp31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
    if (!rax34) {
        addr_f1cf_4:
        rax35 = fun_51d0(r15_7, rsi26, r15_7, rsi26);
        httpd_realloc_str(0x1b290, 0x1b298, rax35 + 35, rcx14, r8_12, r9);
        rdi36 = send_authenticate_header;
        rsi37 = send_authenticate_maxheader;
        my_snprintf(rdi36, rsi37, "%s%s\"\r\n", "WWW-Authenticate: Basic realm=\"", r15_7, r9, v38, v39, v40, v41, v42, v43, v44, v45, v46);
        rcx47 = send_authenticate_header;
        r9_48 = *reinterpret_cast<void***>(r14_8 + 0xd0);
        httpd_send_err(r14_8, 0x191, "Unauthorized", rcx47, "Authorization required for the URL '%.80s'.\n", r9_48);
        ebx13 = -1;
        if (*reinterpret_cast<int32_t*>(r14_8 + 0xb4) == 3) {
            *reinterpret_cast<int32_t*>(r14_8 + 0x22c) = 1;
            goto addr_f257_2;
        }
    } else {
        r12_49 = rax34 + 1;
        *reinterpret_cast<void***>(rax34) = reinterpret_cast<void**>(0);
        rax50 = fun_5220(r12_49, 58, rdx29, r12_49, 58, rdx29);
        rsp51 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
        if (rax50) {
            *reinterpret_cast<void***>(rax50) = reinterpret_cast<void**>(0);
        }
        zf52 = auth_check2_maxprevauthpath == 0;
        rbx53 = auth_check2_authpath;
        if (zf52) 
            goto addr_f3c4_14;
        rsi54 = auth_check2_prevauthpath;
        eax55 = fun_5370(rbx53, rsi54, rbx53, rsi54);
        rsp51 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp51) - 8 + 8);
        if (eax55) 
            goto addr_f3c4_14;
        zf56 = v57 == auth_check2_prevmtime;
        if (!zf56) 
            goto addr_f3c4_14;
        rsi58 = auth_check2_prevuser;
        rdi59 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp51) + 0xa0);
        eax60 = fun_5370(rdi59, rsi58, rdi59, rsi58);
        rsp51 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp51) - 8 + 8);
        if (!eax60) 
            goto addr_f679_18;
    }
    addr_f3c4_14:
    rax61 = fun_5590(rbx53, "r", rbx53, "r");
    rsp62 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp51) - 8 + 8);
    if (!rax61) {
        rdi63 = r14_8 + 16;
        eax64 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_8 + 16));
        edx65 = 28;
        if (*reinterpret_cast<int16_t*>(&eax64) != 10) {
            edx65 = 0;
        }
        *reinterpret_cast<int32_t*>(&rsi66) = 16;
        *reinterpret_cast<int32_t*>(&rsi66 + 4) = 0;
        if (*reinterpret_cast<int16_t*>(&eax64) != 2) {
            *reinterpret_cast<int32_t*>(&rsi66) = edx65;
            *reinterpret_cast<int32_t*>(&rsi66 + 4) = 0;
        }
        eax67 = fun_52d0(rdi63, rsi66, 0x1b110, 0xc8, rdi63, rsi66, 0x1b110, 0xc8);
        if (!eax67) {
            if (!*reinterpret_cast<void***>(r14_8 + 24) && (!*reinterpret_cast<int32_t*>(r14_8 + 28) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r14_8 + 32) == 0xffff0000) && (eax68 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx69 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx69 | eax68))))) {
                rax70 = fun_51d0(0x1b117, rsi66, 0x1b117, rsi66);
                fun_5540(0x1b110, 0x1b117, rax70 + 1);
            }
        } else {
            *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
        }
        fun_5480(3, "%.80s auth file %.80s could not be opened - %m", 3, "%.80s auth file %.80s could not be opened - %m");
        r9_71 = *reinterpret_cast<void***>(r14_8 + 0xd0);
        httpd_send_err(r14_8, 0x193, "Forbidden", 0x13553, "The requested URL '%.80s' is protected by an authentication file, but the authentication file cannot be opened.\n", r9_71, r14_8, 0x193, "Forbidden", 0x13553, "The requested URL '%.80s' is protected by an authentication file, but the authentication file cannot be opened.\n", r9_71);
    } else {
        r13_72 = rax61;
        *reinterpret_cast<int32_t*>(&rsi26) = 0x1f4;
        *reinterpret_cast<int32_t*>(&rsi26 + 4) = 0;
        rdx29 = rax61;
        rax73 = fun_5350(reinterpret_cast<int64_t>(rsp62) + 0x2a0, 0x1f4, rdx29);
        rsp74 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp62) - 8 + 8);
        if (!rax73) {
            addr_f57c_29:
            fun_5190(r13_72, 0x1f4, rdx29);
            goto addr_f1cf_4;
        } else {
            rbp75 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp74) + 0x2a0);
            do {
                rax76 = fun_51d0(rbp75, 0x1f4, rbp75, 0x1f4);
                rsp77 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp74) - 8 + 8);
                rax78 = reinterpret_cast<void*>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax76) - 1));
                if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp77) + reinterpret_cast<int64_t>(rax78) + 0x2a0) == 10) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp77) + reinterpret_cast<int64_t>(rax78) + 0x2a0) = 0;
                }
                rax79 = fun_5220(rbp75, 58, rdx29, rbp75, 58, rdx29);
                rsp80 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp77) - 8 + 8);
                if (!rax79) 
                    continue;
                *reinterpret_cast<void***>(rax79) = reinterpret_cast<void**>(0);
                rsi81 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp80) + 0xa0);
                eax82 = fun_5370(rbp75, rsi81, rbp75, rsi81);
                rsp80 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp80) - 8 + 8);
                if (!eax82) 
                    goto addr_f474_35;
                *reinterpret_cast<int32_t*>(&rsi26) = 0x1f4;
                *reinterpret_cast<int32_t*>(&rsi26 + 4) = 0;
                rdx29 = r13_72;
                rax83 = fun_5350(rbp75, 0x1f4, rdx29);
                rsp74 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp80) - 8 + 8);
            } while (rax83);
            goto addr_f57c_29;
        }
    }
    addr_f6a6_37:
    ebx13 = -1;
    goto addr_f257_2;
    addr_f474_35:
    rbx84 = rax79 + 1;
    fun_5190(r13_72, rsi81, rdx29);
    rax85 = fun_5690(r12_49, rbx84, rdx29);
    eax86 = fun_5370(rax85, rbx84, rax85, rbx84);
    rsp87 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp80) - 8 + 8 - 8 + 8 - 8 + 8);
    if (eax86) {
        addr_f69b_38:
        send_authenticate(r14_8, r15_7, rdx29, 0, r8_12, r9, v88, v89, v90, v91, v92);
        goto addr_f6a6_37;
    } else {
        r12_93 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp87) + 0x2a0);
        rax94 = fun_51d0(r12_93, rbx84, r12_93, rbx84);
        httpd_realloc_str(r14_8 + 0x168, r14_8 + 0x1c8, rax94, 0, r8_12, r9);
        rdi95 = *reinterpret_cast<void***>(r14_8 + 0x168);
        fun_50d0(rdi95, r12_93, rax94, rdi95, r12_93, rax94);
        rdi96 = auth_check2_authpath;
        rax97 = fun_51d0(rdi96, r12_93, rdi96, r12_93);
        httpd_realloc_str(0x1b258, 0x1b260, rax97, 0, r8_12, r9);
        rdi98 = auth_check2_prevauthpath;
        rsi99 = auth_check2_authpath;
        fun_50d0(rdi98, rsi99, rax97, rdi98, rsi99, rax97);
        auth_check2_prevmtime = v100;
        rbp101 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp87) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 + 0xa0);
        rax102 = fun_51d0(rbp101, rsi99, rbp101, rsi99);
        httpd_realloc_str(0x1b270, 0x1b278, rax102, 0, r8_12, r9);
        rdi103 = auth_check2_prevuser;
        fun_50d0(rdi103, rbp101, rax102, rdi103, rbp101, rax102);
        rax104 = fun_51d0(rbx84, rbp101, rbx84, rbp101);
        rdx105 = rax104;
        httpd_realloc_str(0x1b280, 0x1b288, rdx105, 0, r8_12, r9);
        rdi106 = auth_check2_prevcryp;
        rsi107 = rbx84;
    }
    addr_f6e6_40:
    fun_50d0(rdi106, rsi107, rdx105, rdi106, rsi107, rdx105);
    ebx13 = 1;
    goto addr_f257_2;
    addr_f679_18:
    rsi108 = auth_check2_prevcryp;
    rax109 = fun_5690(r12_49, rsi108, rdx29);
    rsi110 = auth_check2_prevcryp;
    eax111 = fun_5370(rax109, rsi110, rax109, rsi110);
    if (eax111) 
        goto addr_f69b_38;
    r15_112 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp51) - 8 + 8 - 8 + 8 + 0xa0);
    rax113 = fun_51d0(r15_112, rsi110, r15_112, rsi110);
    rdx105 = rax113;
    httpd_realloc_str(r14_8 + 0x168, r14_8 + 0x1c8, rdx105, 0, r8_12, r9);
    rdi106 = *reinterpret_cast<void***>(r14_8 + 0x168);
    rsi107 = r15_112;
    goto addr_f6e6_40;
    addr_f276_7:
    rbx114 = reinterpret_cast<unsigned char*>(rbx28 + 7);
    r8_12 = reinterpret_cast<void**>(0x12e80);
    rdx29 = reinterpret_cast<void**>(0x12da0);
    *reinterpret_cast<int32_t*>(&rcx14) = 0;
    *reinterpret_cast<int32_t*>(&rcx14 + 4) = 0;
    do {
        *reinterpret_cast<uint32_t*>(&rax115) = *reinterpret_cast<unsigned char*>(&eax32);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax115) + 4) = 0;
        if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(0x12e80) + reinterpret_cast<uint64_t>(rax115 * 4)) != 0xffffffff) {
            if (!0) 
                break;
        }
        eax32 = *rbx114;
        ++rbx114;
    } while (*reinterpret_cast<unsigned char*>(&eax32));
    goto addr_f331_9;
    rax116 = g12da0;
    goto rax116 + reinterpret_cast<unsigned char>(0x12da0);
}

/* really_check_referrer.refhost */
void** really_check_referrer_refhost = reinterpret_cast<void**>(0);

int32_t check_referrer(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** r14_7;
    void** rbx8;
    int32_t ebp9;
    void** r13_10;
    void** rdi11;
    void** rax12;
    void** rsi13;
    void** rdi14;
    void** r12_15;
    void** rbx16;
    void* rbp17;
    void** r15_18;
    void** v19;
    int32_t eax20;
    void** rax21;
    void** rdi22;
    uint32_t eax23;
    int32_t edx24;
    void** rsi25;
    int32_t eax26;
    uint32_t eax27;
    uint32_t ecx28;
    void** rax29;
    void** r9_30;
    void** rdi31;
    void** rsi32;
    int32_t eax33;
    void** r12_34;
    void*** rax35;
    void*** r13_36;
    uint32_t eax37;
    int64_t rbp38;
    unsigned char** rax39;

    r14_7 = *reinterpret_cast<void***>(rdi + 8);
    rbx8 = *reinterpret_cast<void***>(r14_7 + 0x70);
    ebp9 = 1;
    if (!rbx8) 
        goto addr_f104_2;
    r13_10 = rdi;
    rdi11 = *reinterpret_cast<void***>(rdi + 0x110);
    if (!rdi11 || (!*reinterpret_cast<void***>(rdi11) || (rax12 = fun_56c0(rdi11, "//", rdx), rax12 == 0))) {
        if (!*reinterpret_cast<void***>(r14_7 + 0x80)) {
            addr_f104_2:
            return ebp9;
        } else {
            rsi13 = *reinterpret_cast<void***>(r13_10 + 0xe8);
            rdi14 = rbx8;
        }
    } else {
        r12_15 = rax12;
        rbx16 = rax12 + 2;
        *reinterpret_cast<int32_t*>(&rbp17) = 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp17) + 4) = 0;
        while ((*reinterpret_cast<uint32_t*>(&rcx) = *reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r12_15) + reinterpret_cast<uint64_t>(rbp17)), *reinterpret_cast<int32_t*>(&rcx + 4) = 0, reinterpret_cast<unsigned char>(rcx) > reinterpret_cast<unsigned char>(58)) || !static_cast<int1_t>(0x400800000000001 >> reinterpret_cast<unsigned char>(rcx))) {
            rbp17 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbp17) + 1);
        }
        rdx = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbp17) + 0xfffffffffffffffe);
        httpd_realloc_str(0x1b2a0, 0x1b2a8, rdx, rcx, r8, r9);
        r15_18 = really_check_referrer_refhost;
        v19 = r13_10;
        if (reinterpret_cast<uint64_t>(rbp17) < 3) 
            goto addr_f004_10; else 
            goto addr_ef22_11;
    }
    addr_ef7c_12:
    eax20 = match(rdi14, rsi13, rdx, rcx, r8, r9);
    if (eax20) {
        if (!*reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_10 + 8) + 100) || (rax21 = *reinterpret_cast<void***>(r13_10 + 0x200), !rax21)) {
            rax21 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r13_10 + 8) + 8);
        }
        if (rax21) {
        }
        rdi22 = r13_10 + 16;
        eax23 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r13_10 + 16));
        edx24 = 28;
        if (*reinterpret_cast<int16_t*>(&eax23) != 10) {
            edx24 = 0;
        }
        *reinterpret_cast<int32_t*>(&rsi25) = 16;
        *reinterpret_cast<int32_t*>(&rsi25 + 4) = 0;
        if (*reinterpret_cast<int16_t*>(&eax23) != 2) {
            *reinterpret_cast<int32_t*>(&rsi25) = edx24;
            *reinterpret_cast<int32_t*>(&rsi25 + 4) = 0;
        }
        eax26 = fun_52d0(rdi22, rsi25, 0x1b110, 0xc8, rdi22, rsi25, 0x1b110, 0xc8);
        if (!eax26) {
            if (!*reinterpret_cast<void***>(r13_10 + 24) && (!*reinterpret_cast<int32_t*>(r13_10 + 28) && (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r13_10 + 32) == 0xffff0000) && (eax27 = 0x66663a3a ^ *reinterpret_cast<uint32_t*>(&httpd_ntoa_str), ecx28 = 0x3a666666 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&httpd_ntoa_str) + 3), !(ecx28 | eax27))))) {
                rax29 = fun_51d0(0x1b117, rsi25, 0x1b117, rsi25);
                fun_5540(0x1b110, 0x1b117, rax29 + 1);
            }
        } else {
            *reinterpret_cast<int16_t*>(&httpd_ntoa_str) = 63;
        }
        ebp9 = 0;
        fun_5480(6, "%.80s non-local referrer \"%.80s%.80s\" \"%.80s\"", 6, "%.80s non-local referrer \"%.80s%.80s\" \"%.80s\"");
        r9_30 = *reinterpret_cast<void***>(r13_10 + 0xd0);
        httpd_send_err(r13_10, 0x193, "Forbidden", 0x13553, "You must supply a local referrer to get URL '%.80s' from this server.\n", r9_30, r13_10, 0x193, "Forbidden", 0x13553, "You must supply a local referrer to get URL '%.80s' from this server.\n", r9_30);
        goto addr_f104_2;
    }
    addr_f004_10:
    *reinterpret_cast<void***>(r15_18) = reinterpret_cast<void**>(0);
    rdi31 = *reinterpret_cast<void***>(r14_7 + 0x78);
    r13_10 = v19;
    ebp9 = 1;
    if (!rdi31) {
        if (!*reinterpret_cast<void***>(r14_7 + 100)) {
            rdi31 = *reinterpret_cast<void***>(r14_7 + 8);
            if (!rdi31) 
                goto addr_f104_2;
        } else {
            rdi31 = *reinterpret_cast<void***>(r13_10 + 0x200);
            if (!rdi31) {
                goto addr_f104_2;
            }
        }
    }
    rsi32 = really_check_referrer_refhost;
    eax33 = match(rdi31, rsi32, rdx, rcx, r8, r9);
    if (eax33) 
        goto addr_f104_2;
    rdi14 = *reinterpret_cast<void***>(r14_7 + 0x70);
    rsi13 = *reinterpret_cast<void***>(r13_10 + 0xe8);
    goto addr_ef7c_12;
    addr_ef22_11:
    r12_34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_15) + reinterpret_cast<uint64_t>(rbp17));
    rax35 = fun_56f0(0x1b2a0, 0x1b2a0);
    r13_36 = rax35;
    do {
        rcx = *r13_36;
        eax37 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx16));
        rbp38 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(&eax37));
        if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(rcx + rbp38 * 2) + 1) & 1) {
            rax39 = fun_56e0(0x1b2a0, 0x1b2a8, rdx, rcx);
            eax37 = (*rax39)[rbp38 * 4];
        }
        *reinterpret_cast<void***>(r15_18) = *reinterpret_cast<void***>(&eax37);
        ++rbx16;
        ++r15_18;
    } while (reinterpret_cast<unsigned char>(rbx16) < reinterpret_cast<unsigned char>(r12_34));
    goto addr_f004_10;
}

int64_t opendir = 0x51a6;

void** fun_51a0(void** rdi, void** rsi, void** rdx) {
    goto opendir;
}

int64_t closedir = 0x5306;

void fun_5300(void** rdi, void** rsi, ...) {
    goto closedir;
}

int64_t strrchr = 0x5256;

struct s4* fun_5250(void** rdi, void** rsi, void** rdx, void** rcx, ...) {
    goto strrchr;
}

int32_t fun_5570(void** rdi);

void** fun_5200();

void panic();

void** mmc_map(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void* rsp7;
    void** rbx8;
    int32_t eax9;
    void** rax10;
    void** rsi11;
    void** rbx12;
    void** v13;
    void** v14;
    uint32_t r13d15;
    int64_t rbp16;
    int64_t r14_17;
    int64_t r14_18;
    int32_t eax19;
    void** rdi20;
    void** rax21;
    void** rax22;
    void** rbp23;
    void** r14_24;
    void** v25;
    void** r15_26;
    void** v27;
    void** r12_28;
    void** v29;
    void** rdi30;
    void** v31;
    uint32_t eax32;
    uint32_t eax33;
    uint32_t eax34;
    int64_t rax35;
    void** rdx36;
    int32_t eax37;
    void** rbx38;
    void** rax39;
    int32_t eax40;
    int32_t* rcx41;
    void** ecx42;
    int64_t rsi43;
    void** rdx44;
    void** rax45;
    uint32_t* rax46;
    void** rax47;
    void** r8_48;
    uint32_t ecx49;
    uint32_t edx50;
    uint32_t edx51;
    uint32_t esi52;
    int64_t rcx53;
    int64_t rbp54;
    int64_t rdi55;
    void** rax56;
    int32_t tmp32_57;
    uint64_t tmp64_58;
    int64_t rdi59;
    void** ebp60;
    void** rsi61;
    int32_t tmp32_62;
    int64_t rcx63;
    uint32_t edx64;
    uint32_t esi65;
    uint32_t edx66;
    int64_t rsi67;
    int64_t rdx68;
    int64_t rdi69;
    void** edx70;

    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0xa8);
    rbx8 = rdx;
    if (rsi) {
        *reinterpret_cast<int32_t*>(&rdx) = 0x90;
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        fun_53d0(reinterpret_cast<int64_t>(rsp7) + 24, rsi, 0x90, rcx, r8, r9);
        goto addr_1061b_3;
    }
    rsi = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp7) + 24);
    eax9 = fun_53b0(rdi, rsi, rdx, rcx, r8, r9);
    if (!eax9) {
        addr_1061b_3:
        if (!rbx8) {
            rax10 = fun_5400();
        } else {
            rax10 = *reinterpret_cast<void***>(rbx8);
        }
    } else {
        rsi11 = reinterpret_cast<void**>("stat - %m");
        goto addr_10867_8;
    }
    rbx12 = hash_table;
    v13 = rax10;
    v14 = rdi;
    if (!rbx12) {
        hash_size = 0x400;
        r13d15 = 0x3ff;
        *reinterpret_cast<int32_t*>(&rbp16) = 0x400;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp16) + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&rbp16) = hash_size;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp16) + 4) = 0;
        *reinterpret_cast<int32_t*>(&r14_17) = map_count;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_17) + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&rbp16) >= static_cast<int32_t>(r14_17 + r14_17 * 2)) {
            r13d15 = hash_mask;
            goto addr_10788_13;
        } else {
            fun_5040(rbx12, rsi, rdx);
            *reinterpret_cast<int32_t*>(&r14_18) = *reinterpret_cast<int32_t*>(&r14_17) + *reinterpret_cast<int32_t*>(&r14_17);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_18) + 4) = 0;
            eax19 = static_cast<int32_t>(r14_18 + r14_18 * 2);
            do {
                *reinterpret_cast<int32_t*>(&rbp16) = *reinterpret_cast<int32_t*>(&rbp16) + *reinterpret_cast<int32_t*>(&rbp16);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp16) + 4) = 0;
            } while (*reinterpret_cast<int32_t*>(&rbp16) < eax19);
            hash_size = *reinterpret_cast<int32_t*>(&rbp16);
            r13d15 = static_cast<uint32_t>(rbp16 - 1);
        }
    }
    hash_mask = r13d15;
    rdi20 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rbp16))) << 3);
    rax21 = fun_5430(rdi20, rdi20);
    hash_table = rax21;
    if (!rax21) {
        addr_10775_18:
        rsi11 = reinterpret_cast<void**>("check_hash_size() failure");
    } else {
        rbx12 = rax21;
        if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbp16) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbp16) == 0))) {
            fun_5270(rbx12);
        }
        rax22 = maps;
        if (!rax22) 
            goto addr_10788_13; else 
            goto addr_10701_22;
    }
    addr_10867_8:
    *reinterpret_cast<int32_t*>(&rbp23) = 0;
    *reinterpret_cast<int32_t*>(&rbp23 + 4) = 0;
    fun_5480(3, rsi11, 3, rsi11);
    addr_10875_23:
    return rbp23;
    addr_10788_13:
    r14_24 = v25;
    r15_26 = v27;
    r12_28 = v29;
    rdi30 = v31;
    eax32 = *reinterpret_cast<uint32_t*>(&r15_26) ^ 0x2b5a5;
    eax33 = *reinterpret_cast<uint32_t*>(&r14_24) ^ (eax32 << 5) + eax32;
    eax34 = *reinterpret_cast<uint32_t*>(&r12_28) ^ (eax33 << 5) + eax33;
    *reinterpret_cast<void***>(&rax35) = reinterpret_cast<void**>((*reinterpret_cast<uint32_t*>(&rdi30) ^ (eax34 << 5) + eax34) & r13d15);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax35) + 4) = 0;
    rdx36 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx12) + reinterpret_cast<uint64_t>(rax35 * 8));
    if (!rdx36) {
        addr_10823_24:
        eax37 = fun_5570(v14);
        if (eax37 < 0) {
            rsi11 = reinterpret_cast<void**>("open - %m");
            goto addr_10867_8;
        } else {
            rbx38 = free_maps;
            if (!rbx38) {
                rax39 = fun_5430(72);
                if (!rax39) {
                    fun_52a0();
                    rsi11 = reinterpret_cast<void**>("out of memory allocating a Map");
                    goto addr_10867_8;
                } else {
                    rbx38 = rax39;
                    eax40 = 1;
                    rcx41 = reinterpret_cast<int32_t*>(0x1b4f4);
                }
            } else {
                free_maps = *reinterpret_cast<void***>(rbx38 + 64);
                eax40 = -1;
                rcx41 = reinterpret_cast<int32_t*>(0x1b4f0);
            }
        }
    } else {
        ecx42 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(rax35 + rbp16) - 1) & r13d15);
        *reinterpret_cast<void***>(&rsi43) = *reinterpret_cast<void***>(&rax35);
        do {
            if (*reinterpret_cast<void***>(rdx36 + 56) != *reinterpret_cast<void***>(&rax35)) 
                continue;
            if (*reinterpret_cast<void***>(rdx36) != r15_26) 
                continue;
            if (*reinterpret_cast<void***>(rdx36 + 8) != r14_24) 
                continue;
            if (*reinterpret_cast<void***>(rdx36 + 16) != r12_28) 
                continue;
            if (*reinterpret_cast<void***>(rdx36 + 24) == rdi30) 
                goto addr_10a46_37;
        } while (*reinterpret_cast<void***>(&rsi43) != ecx42 && (*reinterpret_cast<void***>(&rsi43) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi43) + 1) & r13d15), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi43) + 4) = 0, rdx36 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx12) + reinterpret_cast<uint64_t>(rsi43 * 8)), !!rdx36));
        goto addr_10823_24;
    }
    *rcx41 = *rcx41 + eax40;
    *reinterpret_cast<void***>(rbx38) = r15_26;
    *reinterpret_cast<void***>(rbx38 + 8) = r14_24;
    *reinterpret_cast<void***>(rbx38 + 16) = r12_28;
    *reinterpret_cast<void***>(rbx38 + 24) = rdi30;
    *reinterpret_cast<void***>(rbx38 + 32) = reinterpret_cast<void**>(1);
    *reinterpret_cast<void***>(rbx38 + 40) = v13;
    if (!r12_28) {
        *reinterpret_cast<void***>(rbx38 + 48) = reinterpret_cast<void**>(1);
        goto addr_10953_41;
    }
    *reinterpret_cast<int32_t*>(&rdx44) = 1;
    *reinterpret_cast<int32_t*>(&rdx44 + 4) = 0;
    rax45 = fun_5200();
    *reinterpret_cast<void***>(rbx38 + 48) = rax45;
    if (!reinterpret_cast<int1_t>(rax45 == 0xffffffffffffffff) || (rax46 = fun_5090(), *rax46 == 12) && (panic(), *reinterpret_cast<int32_t*>(&rdx44) = 1, *reinterpret_cast<int32_t*>(&rdx44 + 4) = 0, rax47 = fun_5200(), *reinterpret_cast<void***>(rbx38 + 48) = rax47, !reinterpret_cast<int1_t>(rax47 == 0xffffffffffffffff))) {
        addr_10953_41:
        fun_52a0();
        r8_48 = *reinterpret_cast<void***>(rbx38 + 16);
        ecx49 = 0x2b5a5 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx38));
        edx50 = (ecx49 << 5) + ecx49 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx38 + 8));
        edx51 = *reinterpret_cast<uint32_t*>(&r8_48) ^ (edx50 << 5) + edx50;
        esi52 = hash_mask;
        *reinterpret_cast<void***>(&rcx53) = reinterpret_cast<void**>(((edx51 << 5) + edx51 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx38 + 24))) & esi52);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx53) + 4) = 0;
        rdx44 = hash_table;
        rbp54 = rcx53;
        *reinterpret_cast<void***>(&rdi55) = *reinterpret_cast<void***>(&rcx53);
        if (!*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx44) + reinterpret_cast<uint64_t>(rcx53 * 8))) {
            addr_109d6_43:
            *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx44) + reinterpret_cast<uint64_t>(rbp54 * 8)) = rbx38;
            *reinterpret_cast<void***>(rbx38 + 56) = *reinterpret_cast<void***>(&rcx53);
            *reinterpret_cast<void***>(rbx38 + 60) = *reinterpret_cast<void***>(&rdi55);
            rax56 = maps;
            *reinterpret_cast<void***>(rbx38 + 64) = rax56;
            maps = rbx38;
            tmp32_57 = map_count + 1;
            map_count = tmp32_57;
            tmp64_58 = mapped_bytes + reinterpret_cast<unsigned char>(r8_48);
            mapped_bytes = tmp64_58;
            rbp23 = *reinterpret_cast<void***>(rbx38 + 48);
            goto addr_10875_23;
        } else {
            *reinterpret_cast<int32_t*>(&rdi59) = hash_size;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi59) + 4) = 0;
            ebp60 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(static_cast<int32_t>(rdi59 + rcx53) - 1) & esi52);
            *reinterpret_cast<void***>(&rdi55) = *reinterpret_cast<void***>(&rcx53);
            do {
                if (*reinterpret_cast<void***>(&rdi55) == ebp60) 
                    break;
                *reinterpret_cast<void***>(&rdi55) = reinterpret_cast<void**>(esi52 & reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdi55) + 1));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi55) + 4) = 0;
            } while (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx44) + reinterpret_cast<uint64_t>(rdi55 * 8)));
            goto addr_109d4_47;
        }
    } else {
        rsi61 = reinterpret_cast<void**>("mmap - %m");
        *reinterpret_cast<int32_t*>(&rbp23) = 0;
        *reinterpret_cast<int32_t*>(&rbp23 + 4) = 0;
        fun_5480(3, "mmap - %m", 3, "mmap - %m");
        fun_52a0();
        goto addr_10a1e_49;
    }
    rsi61 = reinterpret_cast<void**>("add_hash() failure");
    *reinterpret_cast<int32_t*>(&rbp23) = 0;
    *reinterpret_cast<int32_t*>(&rbp23 + 4) = 0;
    fun_5480(3, "add_hash() failure");
    addr_10a1e_49:
    fun_5040(rbx38, rsi61, rdx44, rbx38, rsi61, rdx44);
    tmp32_62 = alloc_count - 1;
    alloc_count = tmp32_62;
    goto addr_10875_23;
    addr_109d4_47:
    *reinterpret_cast<void***>(&rbp54) = *reinterpret_cast<void***>(&rdi55);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp54) + 4) = 0;
    goto addr_109d6_43;
    addr_10a46_37:
    *reinterpret_cast<void***>(rdx36 + 32) = *reinterpret_cast<void***>(rdx36 + 32) + 1;
    *reinterpret_cast<void***>(rdx36 + 40) = v13;
    rbp23 = *reinterpret_cast<void***>(rdx36 + 48);
    goto addr_10875_23;
    addr_10701_22:
    *reinterpret_cast<int32_t*>(&rcx63) = static_cast<int32_t>(rbp16 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx63) + 4) = 0;
    do {
        edx64 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax22)) ^ 0x2b5a5;
        esi65 = (edx64 << 5) + edx64 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax22 + 8));
        edx66 = (esi65 << 5) + esi65 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax22 + 16));
        *reinterpret_cast<void***>(&rsi67) = reinterpret_cast<void**>(((edx66 << 5) + edx66 ^ reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax22 + 24))) & r13d15);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi67) + 4) = 0;
        rdx68 = rsi67;
        *reinterpret_cast<void***>(&rdi69) = *reinterpret_cast<void***>(&rsi67);
        if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx12) + reinterpret_cast<uint64_t>(rsi67 * 8))) {
            edx70 = reinterpret_cast<void**>(static_cast<uint32_t>(rcx63 + rsi67) & r13d15);
            *reinterpret_cast<void***>(&rdi69) = *reinterpret_cast<void***>(&rsi67);
            do {
                if (*reinterpret_cast<void***>(&rdi69) == edx70) 
                    goto addr_10775_18;
                *reinterpret_cast<void***>(&rdi69) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rdi69) + 1) & r13d15);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi69) + 4) = 0;
            } while (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx12) + reinterpret_cast<uint64_t>(rdi69 * 8)));
            *reinterpret_cast<void***>(&rdx68) = *reinterpret_cast<void***>(&rdi69);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx68) + 4) = 0;
        }
        *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx12) + reinterpret_cast<uint64_t>(rdx68 * 8)) = rax22;
        *reinterpret_cast<void***>(rax22 + 56) = *reinterpret_cast<void***>(&rsi67);
        *reinterpret_cast<void***>(rax22 + 60) = *reinterpret_cast<void***>(&rdi69);
        rax22 = *reinterpret_cast<void***>(rax22 + 64);
    } while (rax22);
    goto addr_10788_13;
}

int64_t dup2 = 0x5216;

void** fun_5210() {
    goto dup2;
}

/* build_env.maxbuf */
void** build_env_maxbuf = reinterpret_cast<void**>(0);

/* build_env.buf */
void** build_env_buf = reinterpret_cast<void**>(0);

void** fun_56d0(void** rdi, void** rsi, void** rdx, void** rcx);

int32_t fun_5640(int64_t rdi, void* rsi, void** rdx, void** rcx);

int32_t fun_54c0(int64_t rdi, void*** rsi, void** rdx);

int64_t nwatches = 0;

void** poll_rfdidx = reinterpret_cast<void**>(0);

void** build_env(void** rdi, void** rsi, ...) {
    void** v3;
    void** rbx4;
    void** rax5;
    void** rax6;
    void* rsp7;
    void** rax8;
    void** rsi9;
    void** rcx10;
    void** r8_11;
    void** r9_12;
    void** rdi13;
    void** r8_14;
    void** r9_15;
    void** r14_16;
    void** r15_17;
    int40_t v18;
    void** v19;
    void** v20;
    void** v21;
    int16_t v22;
    void** rdi23;
    void** r8_24;
    void** r9_25;
    void** rax26;
    void** eax27;
    void* rsp28;
    int32_t eax29;
    void** rcx30;
    void** v31;
    void** v32;
    void** v33;
    int32_t eax34;
    void** r12d35;
    uint64_t rbx36;
    void** r14_37;
    void** rax38;
    void** rbx39;
    void** rax40;
    int64_t rbp41;
    void** rax42;
    void** rbx43;
    void** rax44;
    void** rax45;
    int1_t zf46;
    int64_t rax47;
    int64_t rbp48;
    int64_t rcx49;
    void*** rcx50;
    int64_t rdx51;

    v3 = rbx4;
    rax5 = fun_51d0(rdi, rsi);
    rax6 = fun_51d0(rsi, rsi);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 + 8 - 8 + 8);
    rax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax6) + reinterpret_cast<unsigned char>(rax5));
    rsi9 = build_env_maxbuf;
    if (reinterpret_cast<unsigned char>(rax8) > reinterpret_cast<unsigned char>(rsi9)) {
        httpd_realloc_str(0x1b490, 0x1b498, rax8, rcx10, r8_11, r9_12);
        rsp7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8);
        rsi9 = build_env_maxbuf;
    }
    rdi13 = build_env_buf;
    my_snprintf(rdi13, rsi9, rdi, rsi, r8_14, r9_15, v3, r14_16, r15_17, __return_address(), v18, v19, v20, v21, v22);
    rdi23 = build_env_buf;
    rax26 = fun_5670(rdi23, rsi9, rdi, rsi, r8_24, r9_25);
    if (rax26) {
        return rax26;
    }
    fun_5480(3, "out of memory copying environment variable", 3, "out of memory copying environment variable");
    fun_5620();
    eax27 = fun_56d0(1, "out of memory copying environment variable", rdi, rsi);
    rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp7) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 16 - 8 + 8);
    nfiles = eax27;
    eax29 = fun_5640(7, rsp28, rdi, rsi);
    if (eax29) 
        goto addr_10105_7;
    rcx30 = v31;
    nfiles = rcx30;
    if (v32 == 0xffffffffffffffff) {
        v33 = reinterpret_cast<void**>(0x2000);
    } else {
        if (reinterpret_cast<unsigned char>(v32) > reinterpret_cast<unsigned char>(rcx30)) {
            v33 = v32;
        }
    }
    eax34 = fun_54c0(7, reinterpret_cast<int64_t>(rsp28) - 8 + 8, rdi);
    if (!eax34) {
        r12d35 = v33;
        nfiles = r12d35;
    } else {
        addr_10105_7:
        r12d35 = nfiles;
    }
    nwatches = 0;
    rbx36 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r12d35)));
    r14_37 = reinterpret_cast<void**>(rbx36 * 4);
    rax38 = fun_5430(r14_37, r14_37);
    fd_rw = rax38;
    rbx39 = reinterpret_cast<void**>(rbx36 << 3);
    rax40 = fun_5430(rbx39, rbx39);
    fd_data = rax40;
    if (rax38 && rax40) {
        *reinterpret_cast<void***>(&rbp41) = r12d35;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp41) + 4) = 0;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r12d35) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r12d35 == 0))) {
            fun_5270(rax38, rax38);
        }
        rax42 = fun_5430(rbx39, rbx39);
        rbx43 = rax42;
        pollfds = rax42;
        rax44 = fun_5430(r14_37, r14_37);
        poll_fdidx = rax44;
        rax45 = fun_5430(r14_37, r14_37);
        poll_rfdidx = rax45;
        zf46 = (static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax45 == 0)) | reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax44 == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(rbx43 == 0)))) == 0;
        if (zf46) {
        }
        if (zf46 && !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r12d35) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r12d35 == 0))) {
            fun_5270(rax44, rax44);
            *reinterpret_cast<uint32_t*>(&rax47) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp41)) & 7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax47) + 4) = 0;
            if (reinterpret_cast<uint64_t>(rbp41 - 1) >= 7) {
                *reinterpret_cast<uint32_t*>(&rbp48) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp41)) & 0xfffffff8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp48) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rcx49) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = 0;
                do {
                    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx43) + reinterpret_cast<uint64_t>(rcx49 * 8)) = reinterpret_cast<void**>(0xffffffff);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx43) + reinterpret_cast<uint64_t>(rcx49 * 8) + 8) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx43) + reinterpret_cast<uint64_t>(rcx49 * 8) + 16) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx43) + reinterpret_cast<uint64_t>(rcx49 * 8) + 24) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx43) + reinterpret_cast<uint64_t>(rcx49 * 8) + 32) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx43) + reinterpret_cast<uint64_t>(rcx49 * 8) + 40) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx43) + reinterpret_cast<uint64_t>(rcx49 * 8) + 48) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx43) + reinterpret_cast<uint64_t>(rcx49 * 8) + 56) = -1;
                    rcx49 = rcx49 + 8;
                } while (rbp48 != rcx49);
            } else {
                *reinterpret_cast<int32_t*>(&rcx49) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = 0;
            }
            if (rax47) {
                rcx50 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx43) + reinterpret_cast<uint64_t>(rcx49 * 8));
                *reinterpret_cast<int32_t*>(&rdx51) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx51) + 4) = 0;
                do {
                    rcx50[rdx51 * 8] = reinterpret_cast<void**>(0xffffffff);
                    ++rdx51;
                } while (rax47 != rdx51);
            }
        }
    }
    goto v3;
}

int64_t getenv = 0x5036;

void** fun_5030(int64_t rdi, void** rsi) {
    goto getenv;
}

int64_t pipe = 0x52c6;

int32_t fun_52c0(void** rdi, void** rsi, ...) {
    goto pipe;
}

int64_t fork = 0x56b6;

uint32_t fun_56b0(void** rdi, void** rsi, ...) {
    goto fork;
}

void** fun_5330(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

void** cgi_interpose_input(void** rdi, int32_t esi) {
    void* rsp3;
    int32_t r15d4;
    void** r12_5;
    void** r13_6;
    void* r14_7;
    void** rax8;
    int32_t ebx9;
    void** rsi10;
    void** rdx11;
    int64_t rdi12;
    void** rcx13;
    void** r8_14;
    void** r9_15;
    void** rax16;
    void** rbp17;
    uint32_t* rax18;
    void** rcx19;
    void** r8_20;
    void** rax21;
    void** rdx22;
    int1_t zf23;
    void** ebp24;
    void** rdi25;
    void** rax26;
    void** rdi27;
    void** rbx28;
    void** rdi29;
    void** rdx30;
    void** rcx31;
    void** r8_32;
    void** r9_33;
    void** rbp34;
    void** rax35;
    int32_t r14d36;
    void** rsi37;
    void** rdx38;
    int64_t rdi39;
    void** rcx40;
    void** r8_41;
    void** r9_42;
    void** rax43;
    void** rbx44;
    uint32_t* rax45;
    void** rcx46;
    void** r8_47;
    uint32_t* rax48;
    void** rcx49;
    void** r8_50;
    void** rdi51;
    void** rcx52;
    void** r8_53;
    void** r9_54;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x418);
    r15d4 = esi;
    r12_5 = rdi;
    r13_6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0xa0)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0xa8)));
    if (!r13_6) 
        goto addr_f8ff_2;
    r14_7 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi + 0xa8)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_5 + 0x90)));
    *reinterpret_cast<int32_t*>(&rax8) = 0;
    *reinterpret_cast<int32_t*>(&rax8 + 4) = 0;
    ebx9 = 0;
    do {
        rsi10 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r14_7) + reinterpret_cast<unsigned char>(rax8));
        rdx11 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_6) - reinterpret_cast<unsigned char>(rax8));
        *reinterpret_cast<int32_t*>(&rdi12) = r15d4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = 0;
        rax16 = fun_5170(rdi12, rsi10, rdx11, rcx13, r8_14, r9_15);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        rbp17 = rax16;
        if (*reinterpret_cast<int32_t*>(&rbp17) < 0) {
            rax18 = fun_5090();
            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
            if (*rax18 == 11) 
                goto addr_f8a0_6;
            if (*rax18 != 4) 
                break;
            addr_f8a0_6:
            fun_56a0(1, rsi10, rdx11, rcx19, r8_20);
            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
        } else {
            ebx9 = ebx9 + *reinterpret_cast<int32_t*>(&rbp17);
            if (!*reinterpret_cast<int32_t*>(&rbp17)) 
                goto addr_f8d1_9;
        }
        rax8 = reinterpret_cast<void**>(static_cast<int64_t>(ebx9));
    } while (reinterpret_cast<unsigned char>(r13_6) > reinterpret_cast<unsigned char>(rax8));
    goto addr_f8f3_11;
    ebx9 = *reinterpret_cast<int32_t*>(&rbp17);
    addr_f8f3_11:
    rax21 = reinterpret_cast<void**>(static_cast<int64_t>(ebx9));
    if (r13_6 != rax21) {
        addr_fa56_13:
        return rax21;
    } else {
        addr_f8ff_2:
        rdx22 = *reinterpret_cast<void***>(r12_5 + 0x1f0);
        if (reinterpret_cast<unsigned char>(rdx22) <= reinterpret_cast<unsigned char>(r13_6)) {
            addr_f9ff_14:
            zf23 = sub_process == 1;
            if (zf23 && ((ebp24 = *reinterpret_cast<void***>(r12_5 + 0x2c0), rdi25 = ebp24, *reinterpret_cast<int32_t*>(&rdi25 + 4) = 0, rax26 = fun_5160(rdi25, 3), rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8), *reinterpret_cast<uint32_t*>(&rax26) != 0xffffffff) && (*reinterpret_cast<uint32_t*>(&rax26) | 0x800) != *reinterpret_cast<uint32_t*>(&rax26))) {
                rdi27 = ebp24;
                *reinterpret_cast<int32_t*>(&rdi27 + 4) = 0;
                fun_5160(rdi27, 4);
                rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
            }
        } else {
            rbx28 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp3) + 16);
            do {
                rdi29 = *reinterpret_cast<void***>(r12_5 + 0x2c0);
                *reinterpret_cast<int32_t*>(&rdi29 + 4) = 0;
                rdx30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx22) - reinterpret_cast<unsigned char>(r13_6));
                if (reinterpret_cast<unsigned char>(rdx30) >= reinterpret_cast<unsigned char>(0x400)) {
                    rdx30 = reinterpret_cast<void**>(0x400);
                }
                rax21 = fun_5330(rdi29, rbx28, rdx30, rcx31, r8_32, r9_33);
                rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                if (reinterpret_cast<signed char>(rax21) >= reinterpret_cast<signed char>(0)) {
                    if (!rax21) 
                        goto addr_fa56_13;
                    rbp34 = rax21;
                    *reinterpret_cast<int32_t*>(&rax35) = 0;
                    *reinterpret_cast<int32_t*>(&rax35 + 4) = 0;
                    r14d36 = 0;
                    do {
                        rsi37 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp3) + reinterpret_cast<unsigned char>(rax35) + 16);
                        rdx38 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp34) - reinterpret_cast<unsigned char>(rax35));
                        *reinterpret_cast<int32_t*>(&rdi39) = r15d4;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = 0;
                        rax43 = fun_5170(rdi39, rsi37, rdx38, rcx40, r8_41, r9_42);
                        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                        rbx44 = rax43;
                        if (*reinterpret_cast<int32_t*>(&rbx44) < 0) {
                            rax45 = fun_5090();
                            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                            if (*rax45 == 11) 
                                goto addr_f990_24;
                            if (*rax45 != 4) 
                                break;
                            addr_f990_24:
                            fun_56a0(1, rsi37, rdx38, rcx46, r8_47);
                            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                        } else {
                            r14d36 = r14d36 + *reinterpret_cast<int32_t*>(&rbx44);
                            if (!*reinterpret_cast<int32_t*>(&rbx44)) 
                                goto addr_f9c6_27;
                        }
                        rax35 = reinterpret_cast<void**>(static_cast<int64_t>(r14d36));
                    } while (reinterpret_cast<unsigned char>(rbp34) > reinterpret_cast<unsigned char>(rax35));
                    goto addr_f9e4_29;
                } else {
                    rax48 = fun_5090();
                    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                    *reinterpret_cast<uint32_t*>(&rax21) = *rax48;
                    *reinterpret_cast<int32_t*>(&rax21 + 4) = 0;
                    if (*reinterpret_cast<uint32_t*>(&rax21) == 11) 
                        goto addr_f958_31;
                    if (*reinterpret_cast<uint32_t*>(&rax21) != 4) 
                        goto addr_fa56_13;
                    addr_f958_31:
                    fun_56a0(1, rbx28, rdx30, rcx49, r8_50);
                    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
                    continue;
                }
                r14d36 = *reinterpret_cast<int32_t*>(&rbx44);
                addr_f9e4_29:
                rax21 = reinterpret_cast<void**>(static_cast<int64_t>(r14d36));
                rbx28 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp3) + 16);
                if (rbp34 != rax21) 
                    goto addr_fa56_13;
                r13_6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r13_6) + reinterpret_cast<unsigned char>(rbp34));
                continue;
                addr_f9c6_27:
                goto addr_f9e4_29;
                rdx22 = *reinterpret_cast<void***>(r12_5 + 0x1f0);
            } while (reinterpret_cast<unsigned char>(rdx22) > reinterpret_cast<unsigned char>(r13_6));
            goto addr_f96f_36;
        }
    }
    rdi51 = *reinterpret_cast<void***>(r12_5 + 0x2c0);
    *reinterpret_cast<int32_t*>(&rdi51 + 4) = 0;
    rax21 = fun_5330(rdi51, reinterpret_cast<int64_t>(rsp3) + 14, 2, rcx52, r8_53, r9_54);
    goto addr_fa56_13;
    addr_f96f_36:
    goto addr_f9ff_14;
    addr_f8d1_9:
    goto addr_f8f3_11;
}

int64_t fwrite = 0x5636;

void fun_5630(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto fwrite;
}

int64_t shutdown = 0x51c6;

void cgi_interpose_output(void** rdi, int32_t esi, void** rdx, void** rcx, void** r8, void** r9) {
    void** r14_7;
    void** v8;
    void** rbx9;
    void** rdi10;
    void** rax11;
    void* rsp12;
    void** rdi13;
    void** rax14;
    void* rsp15;
    void** v16;
    int32_t tmp32_17;
    uint64_t tmp64_18;
    void** v19;
    void** rax20;
    void** rax21;
    void* rsp22;
    void** rax23;
    void** rsi24;
    void** r15_25;
    void** r12_26;
    void** rbp27;
    void** rdi28;
    void** rsi29;
    void** rax30;
    uint32_t* rax31;
    uint32_t* rbx32;
    void** rdi33;
    void** rbx34;
    void** r13_35;
    void** rdi36;
    void** rsi37;
    void** rax38;
    void** rdi39;
    void** r15_40;
    void** v41;
    void** v42;
    int16_t v43;
    void** rdi44;
    void** rax45;
    int64_t v46;
    void** eax47;
    void* rsp48;
    int32_t eax49;
    void** rcx50;
    void** v51;
    void** v52;
    void** v53;
    int32_t eax54;
    void** r12d55;
    uint64_t rbx56;
    void** r14_57;
    void** rax58;
    void** rbx59;
    void** rax60;
    int64_t rbp61;
    void** rax62;
    void** rbx63;
    void** rax64;
    void** rax65;
    int1_t zf66;
    int64_t rax67;
    int64_t rbp68;
    int64_t rcx69;
    void*** rcx70;
    int64_t rdx71;
    void** rbx72;
    void** rdx73;
    int32_t eax74;
    void* rsp75;
    void** r13_76;
    void** rax77;
    void** rax78;
    void** rax79;
    void** rax80;
    void* rsp81;
    void* rax82;
    void** rax83;
    void** rcx84;
    void** r8_85;
    int64_t rax86;
    int32_t r13d87;
    void** rbp88;
    void** v89;
    int40_t v90;
    void** v91;
    void** v92;
    void** v93;
    int16_t v94;
    void** ebx95;
    void** rax96;
    void* rsp97;
    void** rbp98;
    void** rax99;
    void** rsi100;
    void** rdx101;
    int64_t rdi102;
    void** rax103;
    uint32_t* rax104;
    void** rdi105;
    void** rsi106;
    void** rax107;
    void** r12_108;
    uint32_t* rax109;
    void** r13d110;
    void* r15_111;
    void* rax112;
    int32_t ebx113;
    void** rsi114;
    void** rdx115;
    int64_t rdi116;
    void** rax117;
    void** rbp118;
    uint32_t* rax119;
    void** rax120;
    int32_t ebp121;
    void** rsi122;
    void** rdx123;
    int64_t rdi124;
    void** rax125;
    uint32_t* rax126;

    *reinterpret_cast<int32_t*>(&r14_7) = esi;
    *reinterpret_cast<int32_t*>(&r14_7 + 4) = 0;
    v8 = rdi;
    rbx9 = *reinterpret_cast<void***>(rdi + 0x2c0);
    *reinterpret_cast<int32_t*>(&rbx9 + 4) = 0;
    rdi10 = rbx9;
    *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
    rax11 = fun_5160(rdi10, 3);
    rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x428 - 8 + 8);
    if (*reinterpret_cast<uint32_t*>(&rax11) != 0xffffffff && (*reinterpret_cast<uint32_t*>(&rax11) & 0xfffff7ff) != *reinterpret_cast<uint32_t*>(&rax11)) {
        rdi13 = rbx9;
        *reinterpret_cast<int32_t*>(&rdi13 + 4) = 0;
        fun_5160(rdi13, 4);
        rsp12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
    }
    rax14 = fun_5430(0x259, 0x259);
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp12) - 8 + 8);
    v16 = rax14;
    tmp32_17 = str_alloc_count + 1;
    str_alloc_count = tmp32_17;
    tmp64_18 = str_alloc_size + 0x258;
    str_alloc_size = tmp64_18;
    if (!rax14) {
        fun_5480(3, "out of memory reallocating a string to %ld bytes", 3, "out of memory reallocating a string to %ld bytes");
        fun_5620();
        v19 = rbx9;
        rax20 = fun_51d0(1, "out of memory reallocating a string to %ld bytes", 1, "out of memory reallocating a string to %ld bytes");
        rax21 = fun_51d0("out of memory reallocating a string to %ld bytes", "out of memory reallocating a string to %ld bytes", "out of memory reallocating a string to %ld bytes", "out of memory reallocating a string to %ld bytes");
        rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 8 + 8 - 8 + 8);
        rax23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax21) + reinterpret_cast<unsigned char>(rax20));
        rsi24 = build_env_maxbuf;
        if (reinterpret_cast<unsigned char>(rax23) > reinterpret_cast<unsigned char>(rsi24)) 
            goto addr_1003a_6;
    } else {
        r15_25 = rax14;
        *reinterpret_cast<int32_t*>(&r12_26) = 0;
        *reinterpret_cast<int32_t*>(&r12_26 + 4) = 0;
        rbp27 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp15) + 32);
        do {
            *reinterpret_cast<int32_t*>(&rdi28) = *reinterpret_cast<int32_t*>(&r14_7);
            *reinterpret_cast<int32_t*>(&rdi28 + 4) = 0;
            rsi29 = rbp27;
            rax30 = fun_5330(rdi28, rsi29, 0x400, rcx, r8, r9);
            rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
            if (*reinterpret_cast<uint32_t*>(&rax30) & 0x80000000) {
                rax31 = fun_5090();
                rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
                rbx32 = rax31;
                do {
                    if (*rbx32 == 11) 
                        continue;
                    if (*rbx32 != 4) 
                        goto addr_fbd1_12;
                    fun_56a0(1, rsi29, 0x400, rcx, r8);
                    *reinterpret_cast<int32_t*>(&rdi33) = *reinterpret_cast<int32_t*>(&r14_7);
                    *reinterpret_cast<int32_t*>(&rdi33 + 4) = 0;
                    rsi29 = rbp27;
                    rax30 = fun_5330(rdi33, rsi29, 0x400, rcx, r8, r9);
                    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8 - 8 + 8);
                } while (*reinterpret_cast<uint32_t*>(&rax30) & 0x80000000);
            }
            if (!*reinterpret_cast<uint32_t*>(&rax30)) 
                goto addr_fbd1_12;
            rbx34 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax30)));
            r13_35 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx34) + reinterpret_cast<unsigned char>(r12_26));
            rdi36 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp15) + 16);
            rsi37 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp15) + 24);
            httpd_realloc_str(rdi36, rsi37, r13_35, rcx, r8, r9, rdi36, rsi37, r13_35, rcx, r8, r9);
            r15_25 = v16;
            fun_53d0(reinterpret_cast<unsigned char>(r12_26) + reinterpret_cast<unsigned char>(r15_25), rbp27, rbx34, rcx, r8, r9);
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r15_25) + reinterpret_cast<unsigned char>(r13_35)) = 0;
            rax38 = fun_56c0(r15_25, "\r\n\r\n", rbx34);
            rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8 - 8 + 8 - 8 + 8);
            if (rax38) 
                goto addr_fcdc_16;
            rax38 = fun_56c0(r15_25, "\n\n", rbx34);
            rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
            r12_26 = r13_35;
        } while (!rax38);
        goto addr_fb82_18;
    }
    addr_10057_19:
    rdi39 = build_env_buf;
    my_snprintf(rdi39, rsi24, 1, "out of memory reallocating a string to %ld bytes", r8, r9, v19, r14_7, r15_40, v41, *reinterpret_cast<int40_t*>(&v8), v16, 0x258, v42, v43);
    rdi44 = build_env_buf;
    rax45 = fun_5670(rdi44, rsi24, 1, "out of memory reallocating a string to %ld bytes", r8, r9);
    if (rax45) {
        goto v46;
    }
    fun_5480(3, "out of memory copying environment variable", 3, "out of memory copying environment variable");
    fun_5620();
    eax47 = fun_56d0(1, "out of memory copying environment variable", 1, "out of memory reallocating a string to %ld bytes");
    rsp48 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 16 - 8 + 8);
    nfiles = eax47;
    eax49 = fun_5640(7, rsp48, 1, "out of memory reallocating a string to %ld bytes");
    if (eax49) 
        goto addr_10105_23;
    rcx50 = v51;
    nfiles = rcx50;
    if (v52 == 0xffffffffffffffff) {
        v53 = reinterpret_cast<void**>(0x2000);
    } else {
        if (reinterpret_cast<unsigned char>(v52) > reinterpret_cast<unsigned char>(rcx50)) {
            v53 = v52;
        }
    }
    eax54 = fun_54c0(7, reinterpret_cast<int64_t>(rsp48) - 8 + 8, 1);
    if (!eax54) {
        r12d55 = v53;
        nfiles = r12d55;
    } else {
        addr_10105_23:
        r12d55 = nfiles;
    }
    nwatches = 0;
    rbx56 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r12d55)));
    r14_57 = reinterpret_cast<void**>(rbx56 * 4);
    rax58 = fun_5430(r14_57, r14_57);
    fd_rw = rax58;
    rbx59 = reinterpret_cast<void**>(rbx56 << 3);
    rax60 = fun_5430(rbx59, rbx59);
    fd_data = rax60;
    if (rax58 && rax60) {
        *reinterpret_cast<void***>(&rbp61) = r12d55;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp61) + 4) = 0;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r12d55) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r12d55 == 0))) {
            fun_5270(rax58, rax58);
        }
        rax62 = fun_5430(rbx59, rbx59);
        rbx63 = rax62;
        pollfds = rax62;
        rax64 = fun_5430(r14_57, r14_57);
        poll_fdidx = rax64;
        rax65 = fun_5430(r14_57, r14_57);
        poll_rfdidx = rax65;
        zf66 = (static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax65 == 0)) | reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax64 == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(rbx63 == 0)))) == 0;
        if (zf66) {
        }
        if (zf66 && !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r12d55) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r12d55 == 0))) {
            fun_5270(rax64, rax64);
            *reinterpret_cast<uint32_t*>(&rax67) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp61)) & 7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax67) + 4) = 0;
            if (reinterpret_cast<uint64_t>(rbp61 - 1) >= 7) {
                *reinterpret_cast<uint32_t*>(&rbp68) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp61)) & 0xfffffff8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp68) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rcx69) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx69) + 4) = 0;
                do {
                    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx63) + reinterpret_cast<uint64_t>(rcx69 * 8)) = reinterpret_cast<void**>(0xffffffff);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx63) + reinterpret_cast<uint64_t>(rcx69 * 8) + 8) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx63) + reinterpret_cast<uint64_t>(rcx69 * 8) + 16) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx63) + reinterpret_cast<uint64_t>(rcx69 * 8) + 24) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx63) + reinterpret_cast<uint64_t>(rcx69 * 8) + 32) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx63) + reinterpret_cast<uint64_t>(rcx69 * 8) + 40) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx63) + reinterpret_cast<uint64_t>(rcx69 * 8) + 48) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx63) + reinterpret_cast<uint64_t>(rcx69 * 8) + 56) = -1;
                    rcx69 = rcx69 + 8;
                } while (rbp68 != rcx69);
            } else {
                *reinterpret_cast<int32_t*>(&rcx69) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx69) + 4) = 0;
            }
            if (rax67) {
                rcx70 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx63) + reinterpret_cast<uint64_t>(rcx69 * 8));
                *reinterpret_cast<int32_t*>(&rdx71) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx71) + 4) = 0;
                do {
                    rcx70[rdx71 * 8] = reinterpret_cast<void**>(0xffffffff);
                    ++rdx71;
                } while (rax67 != rdx71);
            }
        }
    }
    goto v19;
    addr_1003a_6:
    httpd_realloc_str(0x1b490, 0x1b498, rax23, rcx, r8, r9);
    rsp22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp22) - 8 + 8);
    rsi24 = build_env_maxbuf;
    goto addr_10057_19;
    addr_fbd1_12:
    rbx72 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_25) + reinterpret_cast<unsigned char>(r12_26));
    if (!*reinterpret_cast<void***>(r15_25)) {
        addr_fcec_45:
        return;
    } else {
        addr_fbdf_46:
        *reinterpret_cast<int32_t*>(&rdx73) = 5;
        *reinterpret_cast<int32_t*>(&rdx73 + 4) = 0;
        eax74 = fun_50b0(r15_25, "HTTP/", 5, r15_25, "HTTP/", 5);
        rsp75 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
        *reinterpret_cast<int32_t*>(&r13_76) = 0xc8;
        *reinterpret_cast<int32_t*>(&r13_76 + 4) = 0;
        if (!eax74) {
            rax77 = fun_5310(r15_25, " \t", 5);
            *reinterpret_cast<int32_t*>(&rdx73) = 10;
            *reinterpret_cast<int32_t*>(&rdx73 + 4) = 0;
            rax78 = fun_53c0(reinterpret_cast<unsigned char>(rax77) + reinterpret_cast<unsigned char>(r15_25));
            rsp75 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp75) - 8 + 8 - 8 + 8);
            r13_76 = rax78;
        }
    }
    rax79 = fun_56c0(r15_25, "Location:", rdx73);
    if (rax79 && (reinterpret_cast<unsigned char>(rax79) < reinterpret_cast<unsigned char>(rbx72) && (rax79 == r15_25 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax79 + 0xffffffffffffffff) == 10)))) {
        *reinterpret_cast<int32_t*>(&r13_76) = 0x12e;
        *reinterpret_cast<int32_t*>(&r13_76 + 4) = 0;
    }
    rax80 = fun_56c0(r15_25, "Status:", rdx73);
    rsp81 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp75) - 8 + 8 - 8 + 8);
    if (rax80 && (reinterpret_cast<unsigned char>(rax80) < reinterpret_cast<unsigned char>(rbx72) && (rax80 == r15_25 || reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rax80 + 0xffffffffffffffff) == 10)))) {
        rax82 = fun_52f0(rax80 + 7, " \t", rdx73);
        rax83 = fun_53c0(reinterpret_cast<uint64_t>(rax82) + reinterpret_cast<unsigned char>(rax80) + 7);
        rsp81 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp81) - 8 + 8 - 8 + 8);
        r13_76 = rax83;
    }
    if (*reinterpret_cast<int32_t*>(&r13_76) <= 0x18f) {
        if (*reinterpret_cast<int32_t*>(&r13_76) == 0xc8) {
            rcx84 = r13_76;
            r8_85 = reinterpret_cast<void**>("OK");
        } else {
            if (*reinterpret_cast<int32_t*>(&r13_76) == 0x12e) {
                rcx84 = r13_76;
                r8_85 = reinterpret_cast<void**>("Found");
            } else {
                if (*reinterpret_cast<int32_t*>(&r13_76) != 0x130) {
                    addr_fdc7_58:
                    rcx84 = r13_76;
                    r8_85 = reinterpret_cast<void**>("Something");
                } else {
                    rcx84 = r13_76;
                    r8_85 = reinterpret_cast<void**>("Not Modified");
                }
            }
        }
    } else {
        if (*reinterpret_cast<int32_t*>(&r13_76) > 0x1f3) {
            if (*reinterpret_cast<int32_t*>(&r13_76) == 0x1f4) {
                rcx84 = r13_76;
                r8_85 = reinterpret_cast<void**>("Internal Error");
            } else {
                if (*reinterpret_cast<int32_t*>(&r13_76) == 0x1f5) {
                    rcx84 = r13_76;
                    r8_85 = reinterpret_cast<void**>("Not Implemented");
                } else {
                    if (*reinterpret_cast<int32_t*>(&r13_76) != 0x1f7) 
                        goto addr_fdc7_58;
                    rcx84 = r13_76;
                    r8_85 = httpd_err503title;
                }
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rax86) = static_cast<uint32_t>(reinterpret_cast<uint64_t>(r13_76 + 0xfffffffffffffe70));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax86) + 4) = 0;
            if (*reinterpret_cast<uint32_t*>(&rax86) <= 51) {
                goto *reinterpret_cast<int32_t*>(0x12db0 + rax86 * 4) + 0x12db0;
            }
        }
    }
    r13d87 = 0;
    rbp88 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp81) + 32);
    my_snprintf(rbp88, 0x400, "HTTP/1.0 %d %s\r\n", rcx84, r8_85, r9, v89, v8, v16, 0x258, v90, v91, v92, v93, v94);
    ebx95 = *reinterpret_cast<void***>(v8 + 0x2c0);
    rax96 = fun_51d0(rbp88, 0x400, rbp88, 0x400);
    rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp81) - 8 + 8 - 8 + 8);
    if (rax96) {
        rbp98 = rax96;
        *reinterpret_cast<int32_t*>(&rax99) = 0;
        *reinterpret_cast<int32_t*>(&rax99 + 4) = 0;
        do {
            rsi100 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp97) + reinterpret_cast<unsigned char>(rax99) + 32);
            rdx101 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp98) - reinterpret_cast<unsigned char>(rax99));
            *reinterpret_cast<void***>(&rdi102) = ebx95;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi102) + 4) = 0;
            rax103 = fun_5170(rdi102, rsi100, rdx101, rcx84, r8_85, r9);
            rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
            if (*reinterpret_cast<int32_t*>(&rax103) < 0) {
                rax104 = fun_5090();
                rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
                if (*rax104 == 11) 
                    goto addr_fe10_73;
                if (*rax104 != 4) 
                    break;
                addr_fe10_73:
                fun_56a0(1, rsi100, rdx101, rcx84, r8_85);
                rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
            } else {
                if (!*reinterpret_cast<int32_t*>(&rax103)) 
                    break;
                r13d87 = r13d87 + *reinterpret_cast<int32_t*>(&rax103);
            }
            rax99 = reinterpret_cast<void**>(static_cast<int64_t>(r13d87));
        } while (reinterpret_cast<unsigned char>(rbp98) > reinterpret_cast<unsigned char>(rax99));
        ebx95 = *reinterpret_cast<void***>(v8 + 0x2c0);
    }
    if (!r12_26) {
        do {
            addr_feda_80:
            *reinterpret_cast<int32_t*>(&rdi105) = *reinterpret_cast<int32_t*>(&r14_7);
            *reinterpret_cast<int32_t*>(&rdi105 + 4) = 0;
            rsi106 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp97) + 32);
            rax107 = fun_5330(rdi105, rsi106, 0x400, rcx84, r8_85, r9);
            rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
            r12_108 = rax107;
            if (*reinterpret_cast<int32_t*>(&r12_108) < 0) {
                rax109 = fun_5090();
                rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
                if (*rax109 == 11) 
                    goto addr_fed0_82;
                if (*rax109 != 4) 
                    break;
                addr_fed0_82:
                fun_56a0(1, rsi106, 0x400, rcx84, r8_85);
                rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
                goto addr_feda_80;
            }
            if (!*reinterpret_cast<int32_t*>(&r12_108)) 
                goto addr_ffbb_85;
            if (!(reinterpret_cast<unsigned char>(r12_108) << 32)) 
                continue;
            r13d110 = *reinterpret_cast<void***>(v8 + 0x2c0);
            r15_111 = reinterpret_cast<void*>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&r12_108)));
            *reinterpret_cast<int32_t*>(&rax112) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax112) + 4) = 0;
            ebx113 = 0;
            do {
                rsi114 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp97) + reinterpret_cast<uint64_t>(rax112) + 32);
                rdx115 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r15_111) - reinterpret_cast<uint64_t>(rax112));
                *reinterpret_cast<void***>(&rdi116) = r13d110;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi116) + 4) = 0;
                rax117 = fun_5170(rdi116, rsi114, rdx115, rcx84, r8_85, r9);
                rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
                rbp118 = rax117;
                if (*reinterpret_cast<int32_t*>(&rbp118) < 0) {
                    rax119 = fun_5090();
                    rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
                    if (*rax119 == 11) 
                        goto addr_ff20_90;
                    if (*rax119 != 4) 
                        break;
                    addr_ff20_90:
                    fun_56a0(1, rsi114, rdx115, rcx84, r8_85);
                    rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
                } else {
                    ebx113 = ebx113 + *reinterpret_cast<int32_t*>(&rbp118);
                    if (!*reinterpret_cast<int32_t*>(&rbp118)) 
                        goto addr_ff55_93;
                }
                rax112 = reinterpret_cast<void*>(static_cast<int64_t>(ebx113));
            } while (reinterpret_cast<uint64_t>(r15_111) > reinterpret_cast<uint64_t>(rax112));
            goto addr_ff80_95;
            ebx113 = *reinterpret_cast<int32_t*>(&rbp118);
            addr_ff80_95:
            if (ebx113 == *reinterpret_cast<int32_t*>(&r12_108)) 
                goto addr_feda_80; else 
                goto addr_ff89_97;
            addr_ff55_93:
            goto addr_ff80_95;
        } while (!*reinterpret_cast<int32_t*>(&r12_108));
        goto addr_ffbb_85;
    } else {
        *reinterpret_cast<int32_t*>(&rax120) = 0;
        *reinterpret_cast<int32_t*>(&rax120 + 4) = 0;
        ebp121 = 0;
        do {
            rsi122 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_25) + reinterpret_cast<unsigned char>(rax120));
            rdx123 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12_26) - reinterpret_cast<unsigned char>(rax120));
            *reinterpret_cast<void***>(&rdi124) = ebx95;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi124) + 4) = 0;
            rax125 = fun_5170(rdi124, rsi122, rdx123, rcx84, r8_85, r9);
            rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
            if (*reinterpret_cast<int32_t*>(&rax125) < 0) {
                rax126 = fun_5090();
                rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
                if (*rax126 == 11) 
                    goto addr_fe80_102;
                if (*rax126 != 4) 
                    goto addr_fec1_104;
                addr_fe80_102:
                fun_56a0(1, rsi122, rdx123, rcx84, r8_85);
                rsp97 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp97) - 8 + 8);
            } else {
                if (!*reinterpret_cast<int32_t*>(&rax125)) 
                    goto addr_feda_80;
                ebp121 = ebp121 + *reinterpret_cast<int32_t*>(&rax125);
            }
            rax120 = reinterpret_cast<void**>(static_cast<int64_t>(ebp121));
        } while (reinterpret_cast<unsigned char>(r12_26) > reinterpret_cast<unsigned char>(rax120));
        goto addr_feda_80;
    }
    addr_ffbb_85:
    goto shutdown;
    addr_ff89_97:
    goto addr_ffbb_85;
    addr_fec1_104:
    goto addr_feda_80;
    addr_fcdc_16:
    rbx72 = rax38;
    r12_26 = r13_35;
    if (*reinterpret_cast<void***>(r15_25)) 
        goto addr_fbdf_46; else 
        goto addr_fcec_45;
    addr_fb82_18:
    goto addr_fcdc_16;
}

int64_t memchr = 0x5326;

int64_t fun_5320(int64_t rdi, int64_t rsi, void** rdx) {
    goto memchr;
}

int64_t lstat = 0x5346;

int32_t fun_5340(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto lstat;
}

int64_t time = 0x5406;

void** fun_5400() {
    goto time;
}

int64_t ctime = 0x51b6;

void** fun_51b0(void* rdi) {
    goto ctime;
}

int64_t read = 0x5336;

void** fun_5330(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto read;
}

int64_t gmtime = 0x55b6;

void** fun_55b0(void* rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto gmtime;
}

int64_t strftime = 0x5536;

void fun_5530(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto strftime;
}

int64_t crypt = 0x5696;

void** fun_5690(void** rdi, void** rsi, void** rdx) {
    goto crypt;
}

void send_authenticate(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, int40_t a7, void** a8, void** a9, void** a10, int16_t a11) {
    void** rax12;
    void** rdx13;
    void** rdi14;
    void** rsi15;
    void** rax16;
    void** rbx17;
    void** r14_18;
    void** rcx19;
    void** r9_20;

    rax12 = fun_51d0(rsi, rsi, rsi, rsi);
    rdx13 = rax12 + 35;
    httpd_realloc_str(0x1b290, 0x1b298, rdx13, rcx, r8, r9, 0x1b290, 0x1b298, rdx13, rcx, r8, r9);
    rdi14 = send_authenticate_header;
    rsi15 = send_authenticate_maxheader;
    my_snprintf(rdi14, rsi15, "%s%s\"\r\n", "WWW-Authenticate: Basic realm=\"", rsi, r9, rax16, rbx17, r14_18, __return_address(), a7, a8, a9, a10, a11);
    rcx19 = send_authenticate_header;
    r9_20 = *reinterpret_cast<void***>(rdi + 0xd0);
    httpd_send_err(rdi, 0x191, "Unauthorized", rcx19, "Authorization required for the URL '%.80s'.\n", r9_20, rdi, 0x191, "Unauthorized", rcx19, "Authorization required for the URL '%.80s'.\n", r9_20);
    if (*reinterpret_cast<int32_t*>(rdi + 0xb4) == 3) {
        *reinterpret_cast<int32_t*>(rdi + 0x22c) = 1;
    }
    return;
}

int64_t sleep = 0x56a6;

void fun_56a0(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8) {
    goto sleep;
}

void fun_51c0(int64_t rdi, int64_t rsi) {
    goto shutdown;
}

int64_t open = 0x5576;

int32_t fun_5570(void** rdi) {
    goto open;
}

int64_t mmap = 0x5206;

void** fun_5200() {
    goto mmap;
}

void panic() {
    void** rbx1;
    void*** r15_2;
    void** rdi3;
    int32_t eax4;
    int32_t tmp32_5;
    void** rax6;
    int32_t tmp32_7;
    void** rax8;

    fun_5480(3, "mmc panic - freeing all unreferenced maps");
    rbx1 = maps;
    if (rbx1) {
        r15_2 = reinterpret_cast<void***>(0x1b4f8);
        do {
            if (*reinterpret_cast<void***>(rbx1 + 32)) {
                r15_2 = reinterpret_cast<void***>(rbx1 + 64);
            } else {
                if (*reinterpret_cast<void***>(rbx1 + 16) && (rdi3 = *reinterpret_cast<void***>(rbx1 + 48), eax4 = fun_54f0(rdi3), eax4 < 0)) {
                    fun_5480(3, "munmap - %m");
                }
                mapped_bytes = mapped_bytes - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx1 + 16));
                *r15_2 = *reinterpret_cast<void***>(rbx1 + 64);
                tmp32_5 = map_count - 1;
                map_count = tmp32_5;
                rax6 = free_maps;
                *reinterpret_cast<void***>(rbx1 + 64) = rax6;
                tmp32_7 = free_count + 1;
                free_count = tmp32_7;
                free_maps = rbx1;
                rax8 = hash_table;
                *reinterpret_cast<void***>(rax8 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx1 + 60)) * 8) = reinterpret_cast<void**>(0);
            }
            rbx1 = *r15_2;
        } while (rbx1);
    }
    return;
}

int64_t munmap = 0x54f6;

int32_t fun_54f0(void** rdi) {
    goto munmap;
}

void l_resort(void** rdi) {
    void** rax2;
    void** rcx3;
    void** r9_4;
    void** r8_5;
    uint64_t rsi6;
    int64_t rax7;
    uint64_t rax8;
    int64_t rsi9;
    void** rdx10;
    void** rsi11;
    void** rax12;
    void** rcx13;

    rax2 = *reinterpret_cast<void***>(rdi + 48);
    if (!rax2) {
        rcx3 = *reinterpret_cast<void***>(rdi + 56);
        *reinterpret_cast<void***>(0x1b530 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdi + 64)) * 8) = rcx3;
        if (rcx3) {
            addr_114ea_3:
            *reinterpret_cast<void***>(rcx3 + 48) = rax2;
        }
    } else {
        *reinterpret_cast<void***>(rax2 + 56) = *reinterpret_cast<void***>(rdi + 56);
        rcx3 = *reinterpret_cast<void***>(rdi + 56);
        if (rcx3) 
            goto addr_114ea_3;
    }
    r9_4 = *reinterpret_cast<void***>(rdi + 32);
    r8_5 = *reinterpret_cast<void***>(rdi + 40);
    rsi6 = reinterpret_cast<unsigned char>(r8_5) ^ reinterpret_cast<unsigned char>(r9_4);
    *reinterpret_cast<void****>(&rax7) = *reinterpret_cast<void****>(&rsi6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    rax8 = reinterpret_cast<uint64_t>(rax7 * 0x7a44c6b) >> 33;
    *reinterpret_cast<void***>(&rsi9) = reinterpret_cast<void**>(*reinterpret_cast<void****>(&rsi6) - *reinterpret_cast<int32_t*>(&rax8) * 67);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = 0;
    *reinterpret_cast<void***>(rdi + 64) = *reinterpret_cast<void***>(&rsi9);
    rdx10 = *reinterpret_cast<void***>(0x1b530 + rsi9 * 8);
    if (!rdx10) {
        *reinterpret_cast<void***>(0x1b530 + rsi9 * 8) = rdi;
        __asm__("xorps xmm0, xmm0");
        __asm__("movups [rdi], xmm0");
        return;
    }
    if (reinterpret_cast<signed char>(r9_4) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx10 + 32)) || r9_4 == *reinterpret_cast<void***>(rdx10 + 32) && reinterpret_cast<signed char>(r8_5) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx10 + 40))) {
        *reinterpret_cast<void***>(0x1b530 + rsi9 * 8) = rdi;
        *reinterpret_cast<void***>(rdi + 48) = reinterpret_cast<void**>(0);
        *reinterpret_cast<void***>(rdi + 56) = rdx10;
        *reinterpret_cast<void***>(rdx10 + 48) = rdi;
        return;
    }
    rsi11 = *reinterpret_cast<void***>(rdx10 + 56);
    if (rsi11) 
        goto addr_11576_11;
    addr_115c7_12:
    *reinterpret_cast<void***>(rdx10 + 56) = rdi;
    *reinterpret_cast<void***>(rdi + 48) = rdx10;
    *reinterpret_cast<void***>(rdi + 56) = reinterpret_cast<void**>(0);
    return;
    addr_11576_11:
    rax12 = *reinterpret_cast<void***>(rsi11 + 32);
    if (reinterpret_cast<signed char>(r9_4) >= reinterpret_cast<signed char>(rax12)) {
        do {
            rcx13 = rsi11;
            if (r9_4 != rax12) 
                goto addr_1159e_14;
            if (reinterpret_cast<signed char>(r8_5) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx13 + 40))) 
                break;
            addr_1159e_14:
            rsi11 = *reinterpret_cast<void***>(rcx13 + 56);
            if (!rsi11) 
                goto addr_115c4_16;
            rax12 = *reinterpret_cast<void***>(rsi11 + 32);
            rdx10 = rcx13;
        } while (reinterpret_cast<signed char>(r9_4) >= reinterpret_cast<signed char>(rax12));
        goto addr_115b3_18;
    } else {
        addr_1157f_19:
        rcx13 = rdx10;
        goto addr_115b3_18;
    }
    rsi11 = rcx13;
    goto addr_1157f_19;
    addr_115c4_16:
    rdx10 = rcx13;
    goto addr_115c7_12;
    addr_115b3_18:
    *reinterpret_cast<void***>(rcx13 + 56) = rdi;
    *reinterpret_cast<void***>(rdi + 48) = rcx13;
    *reinterpret_cast<void***>(rdi + 56) = rsi11;
    *reinterpret_cast<void***>(rsi11 + 48) = rdi;
    return;
}

int32_t match_one(void** rdi, int32_t esi, void** rdx) {
    void** r15_4;
    int32_t r13d5;
    int32_t r12d6;
    void** r14_7;
    void** rcx8;
    void** rsi9;
    void** rbx10;
    void** rdx11;
    uint32_t eax12;
    void** r15_13;
    void** rax14;
    int32_t r14d15;
    void* rbp16;
    int32_t eax17;
    uint1_t less_or_equal18;

    r15_4 = rdx;
    if (reinterpret_cast<uint1_t>(esi < 0) | reinterpret_cast<uint1_t>(esi == 0)) {
        addr_1197e_2:
        r13d5 = 0;
        *reinterpret_cast<unsigned char*>(&r13d5) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(r15_4) == 0);
        goto addr_11989_3;
    } else {
        r12d6 = esi;
        r14_7 = rdi;
        rcx8 = reinterpret_cast<void**>(static_cast<int64_t>(esi));
        rsi9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_4) + reinterpret_cast<unsigned char>(rcx8));
        rbx10 = rdi + 1;
        *reinterpret_cast<int32_t*>(&rdx11) = 0;
        *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
        do {
            eax12 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx10 + 0xffffffffffffffff));
            if (*reinterpret_cast<signed char*>(&eax12) == 63) {
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r15_4) + reinterpret_cast<unsigned char>(rdx11))) 
                    break;
            } else {
                if (*reinterpret_cast<signed char*>(&eax12) == 42) 
                    goto addr_1199b_8;
                if (*reinterpret_cast<signed char*>(&eax12) != *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r15_4) + reinterpret_cast<unsigned char>(rdx11))) 
                    break;
            }
            ++rbx10;
            ++rdx11;
        } while (reinterpret_cast<signed char>(rdx11) < reinterpret_cast<signed char>(rcx8));
        goto addr_1197b_11;
    }
    r13d5 = 0;
    goto addr_11989_3;
    addr_1197b_11:
    r15_4 = rsi9;
    goto addr_1197e_2;
    addr_1199b_8:
    r15_13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r15_4) + reinterpret_cast<unsigned char>(rdx11));
    if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx10) == 42)) {
        rax14 = fun_5310(r15_13, "/", rdx11);
    } else {
        ++rbx10;
        rax14 = fun_51d0(r15_13, rsi9, r15_13, rsi9);
    }
    r13d5 = 0;
    if (*reinterpret_cast<uint32_t*>(&rax14) & 0x80000000) {
        addr_11989_3:
        return r13d5;
    } else {
        r14d15 = *reinterpret_cast<int32_t*>(&r14_7) - *reinterpret_cast<int32_t*>(&rbx10) + r12d6;
        *reinterpret_cast<uint32_t*>(&rbp16) = *reinterpret_cast<uint32_t*>(&rax14);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp16) + 4) = 0;
        do {
            eax17 = match_one(rbx10, r14d15, reinterpret_cast<unsigned char>(r15_13) + reinterpret_cast<uint64_t>(rbp16));
            if (eax17) 
                break;
            less_or_equal18 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rbp16) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rbp16 == 0));
            rbp16 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbp16) + 0xffffffffffffffff);
        } while (!less_or_equal18);
        goto addr_119ff_19;
    }
    r13d5 = 1;
    goto addr_11989_3;
    addr_119ff_19:
    goto addr_11989_3;
}

/* scan_mon.sorted */
signed char scan_mon_sorted = 0;

void strlong_compare(int64_t rdi, int64_t rsi);

int32_t scan_mon(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** v7;
    void** r15_8;
    int1_t zf9;
    uint32_t ebx10;
    void*** rax11;
    void*** r12_12;
    void** rbp13;
    int64_t rbx14;
    unsigned char** rax15;
    uint32_t eax16;
    int64_t rbx17;
    int64_t r13_18;
    uint32_t eax19;
    int32_t ebp20;
    int64_t r14_21;
    void** rsi22;
    int32_t eax23;
    int32_t eax24;

    v7 = rsi;
    r15_8 = rdi;
    zf9 = scan_mon_sorted == 0;
    if (zf9) {
        rdi = reinterpret_cast<void**>(0x1ac90);
        rcx = reinterpret_cast<void**>(strlong_compare);
        *reinterpret_cast<int32_t*>(&rsi) = 23;
        *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx) = 16;
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        fun_5110(0x1ac90, 23, 16, strlong_compare, r8, r9);
        scan_mon_sorted = 1;
    }
    *reinterpret_cast<void***>(&ebx10) = *reinterpret_cast<void***>(r15_8);
    if (*reinterpret_cast<void***>(&ebx10)) {
        rax11 = fun_56f0(rdi, rdi);
        r12_12 = rax11;
        rbp13 = r15_8 + 1;
        do {
            rbx14 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(&ebx10));
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(*r12_12 + rbx14 * 2) + 1) & 1) {
                rax15 = fun_56e0(rdi, rsi, rdx, rcx);
                eax16 = (*rax15)[rbx14 * 4];
                *reinterpret_cast<void***>(rbp13 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&eax16);
            }
            ebx10 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp13));
            ++rbp13;
        } while (*reinterpret_cast<void***>(&ebx10));
    }
    *reinterpret_cast<int32_t*>(&rbx17) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx17) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r13_18) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = 0;
    while (1) {
        eax19 = static_cast<uint32_t>(rbx17 + r13_18);
        ebp20 = reinterpret_cast<int32_t>((eax19 >> 31) + eax19) >> 1;
        r14_21 = static_cast<int64_t>(ebp20) << 4;
        rsi22 = *reinterpret_cast<void***>(r14_21 + 0x1ac90);
        eax23 = fun_5370(r15_8, rsi22, r15_8, rsi22);
        if (eax23 < 0) {
            *reinterpret_cast<int32_t*>(&r13_18) = ebp20 - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = 0;
            if (*reinterpret_cast<int32_t*>(&r13_18) < *reinterpret_cast<int32_t*>(&rbx17)) 
                break;
        } else {
            if (!eax23) 
                goto addr_11e7f_12;
            *reinterpret_cast<int32_t*>(&rbx17) = ebp20 + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx17) + 4) = 0;
            if (*reinterpret_cast<int32_t*>(&r13_18) < *reinterpret_cast<int32_t*>(&rbx17)) 
                break;
        }
    }
    eax24 = 0;
    addr_11e90_15:
    return eax24;
    addr_11e7f_12:
    *reinterpret_cast<void***>(v7) = *reinterpret_cast<void***>(r14_21 + 0x1ac90 + 8);
    eax24 = 1;
    goto addr_11e90_15;
}

/* scan_wday.sorted */
signed char scan_wday_sorted = 0;

int32_t scan_wday(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** v7;
    void** r15_8;
    int1_t zf9;
    uint32_t ebx10;
    void*** rax11;
    void*** r12_12;
    void** rbp13;
    int64_t rbx14;
    unsigned char** rax15;
    uint32_t eax16;
    int64_t rbx17;
    int64_t r13_18;
    uint32_t eax19;
    int32_t ebp20;
    int64_t r14_21;
    void** rsi22;
    int32_t eax23;
    int32_t eax24;

    v7 = rsi;
    r15_8 = rdi;
    zf9 = scan_wday_sorted == 0;
    if (zf9) {
        rdi = reinterpret_cast<void**>(0x1ae00);
        rcx = reinterpret_cast<void**>(strlong_compare);
        *reinterpret_cast<int32_t*>(&rsi) = 14;
        *reinterpret_cast<int32_t*>(&rsi + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx) = 16;
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        fun_5110(0x1ae00, 14, 16, strlong_compare, r8, r9);
        scan_wday_sorted = 1;
    }
    *reinterpret_cast<void***>(&ebx10) = *reinterpret_cast<void***>(r15_8);
    if (*reinterpret_cast<void***>(&ebx10)) {
        rax11 = fun_56f0(rdi, rdi);
        r12_12 = rax11;
        rbp13 = r15_8 + 1;
        do {
            rbx14 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(&ebx10));
            if (*reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(*r12_12 + rbx14 * 2) + 1) & 1) {
                rax15 = fun_56e0(rdi, rsi, rdx, rcx);
                eax16 = (*rax15)[rbx14 * 4];
                *reinterpret_cast<void***>(rbp13 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&eax16);
            }
            ebx10 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbp13));
            ++rbp13;
        } while (*reinterpret_cast<void***>(&ebx10));
    }
    *reinterpret_cast<int32_t*>(&rbx17) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx17) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r13_18) = 13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = 0;
    while (1) {
        eax19 = static_cast<uint32_t>(rbx17 + r13_18);
        ebp20 = reinterpret_cast<int32_t>((eax19 >> 31) + eax19) >> 1;
        r14_21 = static_cast<int64_t>(ebp20) << 4;
        rsi22 = *reinterpret_cast<void***>(r14_21 + 0x1ae00);
        eax23 = fun_5370(r15_8, rsi22, r15_8, rsi22);
        if (eax23 < 0) {
            *reinterpret_cast<int32_t*>(&r13_18) = ebp20 - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = 0;
            if (*reinterpret_cast<int32_t*>(&r13_18) < *reinterpret_cast<int32_t*>(&rbx17)) 
                break;
        } else {
            if (!eax23) 
                goto addr_11f7f_12;
            *reinterpret_cast<int32_t*>(&rbx17) = ebp20 + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx17) + 4) = 0;
            if (*reinterpret_cast<int32_t*>(&r13_18) < *reinterpret_cast<int32_t*>(&rbx17)) 
                break;
        }
    }
    eax24 = 0;
    addr_11f90_15:
    return eax24;
    addr_11f7f_12:
    *reinterpret_cast<void***>(v7) = *reinterpret_cast<void***>(r14_21 + 0x1ae00 + 8);
    eax24 = 1;
    goto addr_11f90_15;
}

int64_t _ITM_deregisterTMCloneTable = 0;

int64_t deregister_tm_clones(int64_t rdi) {
    int64_t rax2;

    rax2 = 0x1aee0;
    if (1 || (rax2 = _ITM_deregisterTMCloneTable, rax2 == 0)) {
        return rax2;
    } else {
        goto rax2;
    }
}

int64_t puts = 0x5106;

void fun_5100(int64_t rdi, void** rsi) {
    goto puts;
}

int64_t gai_strerror = 0x5246;

void** fun_5240(int64_t rdi, void** rsi, void** rdx, void** rcx) {
    goto gai_strerror;
}

int64_t getcwd = 0x5286;

void fun_5280(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto getcwd;
}

int64_t getpid = 0x5186;

void** fun_5180() {
    goto getpid;
}

int64_t sigset = 0x5526;

void fun_5520(int64_t rdi, ...) {
    goto sigset;
}

int64_t tmr_init(int64_t rdi, int64_t rsi, void** rdx, void** rcx, void** r8, void** r9) {
    int64_t rax7;

    fun_5270(0x1b530);
    free_timers = reinterpret_cast<void**>(0);
    free_count = 0;
    active_count = 0;
    alloc_count = 0;
    return rax7;
}

int64_t setgid = 0x5556;

int32_t fun_5550(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto setgid;
}

int64_t initgroups = 0x5686;

int32_t fun_5680(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto initgroups;
}

void** tmr_mstimeout(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    int64_t rcx7;
    uint64_t r11_8;
    uint32_t r10d9;
    uint64_t rax10;
    uint64_t rdx11;
    uint64_t rcx12;

    *reinterpret_cast<int32_t*>(&rcx7) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r11_8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_8) + 4) = 0;
    r10d9 = 0;
    do {
        rax10 = *reinterpret_cast<uint64_t*>(rcx7 + 0x1b530);
        if (rax10) {
            rax10 = __intrinsic() >> 63;
            rdx11 = (reinterpret_cast<int64_t>(__intrinsic()) >> 7) + rax10 + (*reinterpret_cast<int64_t*>(rax10 + 32) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi))) * 0x3e8;
            if (r10d9) {
                if (reinterpret_cast<int64_t>(rdx11) < reinterpret_cast<int64_t>(r11_8)) {
                    r11_8 = rdx11;
                }
                r10d9 = 1;
            } else {
                r10d9 = 1;
                r11_8 = rdx11;
            }
        }
        rcx7 = rcx7 + 8;
    } while (rcx7 != 0x218);
    *reinterpret_cast<int32_t*>(&rcx12) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = 0;
    if (reinterpret_cast<int64_t>(r11_8) >= reinterpret_cast<int64_t>(0)) {
        rcx12 = r11_8;
    }
    return rax10 - (rax10 + reinterpret_cast<uint1_t>(rax10 < rax10 + reinterpret_cast<uint1_t>(r10d9 < 1))) | rcx12;
}

void** fun_5500(void** rdi, int64_t rsi, void** rdx);

void** nreturned = reinterpret_cast<void**>(0);

void** next_ridx = reinterpret_cast<void**>(0);

void** fdwatch(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    int64_t tmp64_7;
    void** rdi8;
    int64_t rsi9;
    void** eax10;
    void** ecx11;
    int64_t r9_12;
    void** r10_13;
    int64_t rdi14;
    void** r8_15;
    int64_t rsi16;

    tmp64_7 = nwatches + 1;
    nwatches = tmp64_7;
    rdi8 = pollfds;
    rsi9 = reinterpret_cast<int32_t>(npoll_fds);
    eax10 = fun_5500(rdi8, rsi9, rdi);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax10 == 0)) {
        addr_10483_2:
        ecx11 = eax10;
    } else {
        *reinterpret_cast<void***>(&r9_12) = npoll_fds;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_12) + 4) = 0;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r9_12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r9_12) == 0)) {
            ecx11 = reinterpret_cast<void**>(0);
        } else {
            r10_13 = pollfds;
            *reinterpret_cast<int32_t*>(&rdi14) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = 0;
            r8_15 = poll_rfdidx;
            ecx11 = reinterpret_cast<void**>(0);
            do {
                if (!(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(r10_13) + reinterpret_cast<uint64_t>(rdi14 * 8) + 6) & 61)) 
                    continue;
                rsi16 = reinterpret_cast<int32_t>(ecx11);
                ++ecx11;
                *reinterpret_cast<void***>(r8_15 + rsi16 * 4) = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r10_13) + reinterpret_cast<uint64_t>(rdi14 * 8));
                if (ecx11 == eax10) 
                    goto addr_10483_2;
                ++rdi14;
            } while (r9_12 != rdi14);
        }
    }
    nreturned = ecx11;
    next_ridx = reinterpret_cast<void**>(0);
    return ecx11;
}

void tmr_run(void** rdi, ...) {
    void** r14_2;
    int64_t r15_3;
    void** rbx4;
    void** r12_5;
    void** rdi6;
    void** rax7;
    void** rcx8;
    int32_t tmp32_9;
    void** rax10;
    int32_t tmp32_11;
    void** rsi12;
    void* rcx13;
    void** rcx14;
    void** rsi15;
    void* rdx16;

    r14_2 = rdi;
    *reinterpret_cast<int32_t*>(&r15_3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_3) + 4) = 0;
    do {
        rbx4 = *reinterpret_cast<void***>(0x1b530 + r15_3 * 8);
        if (rbx4) {
            do {
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx4 + 32)) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(r14_2))) 
                    break;
                r12_5 = *reinterpret_cast<void***>(rbx4 + 56);
                if (*reinterpret_cast<void***>(rbx4 + 32) != *reinterpret_cast<void***>(r14_2)) 
                    goto addr_113c9_5;
                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx4 + 40)) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(r14_2 + 8))) 
                    break;
                addr_113c9_5:
                rdi6 = *reinterpret_cast<void***>(rbx4 + 8);
                *reinterpret_cast<void***>(rbx4)(rdi6, r14_2);
                if (!*reinterpret_cast<void***>(rbx4 + 24)) {
                    rax7 = *reinterpret_cast<void***>(rbx4 + 48);
                    if (!rax7) {
                        rcx8 = *reinterpret_cast<void***>(rbx4 + 56);
                        *reinterpret_cast<void***>(0x1b530 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx4 + 64)) * 8) = rcx8;
                        if (rcx8) {
                            addr_1146a_9:
                            *reinterpret_cast<void***>(rcx8 + 48) = rax7;
                        }
                    } else {
                        *reinterpret_cast<void***>(rax7 + 56) = *reinterpret_cast<void***>(rbx4 + 56);
                        rcx8 = *reinterpret_cast<void***>(rbx4 + 56);
                        if (rcx8) 
                            goto addr_1146a_9;
                    }
                    tmp32_9 = active_count - 1;
                    active_count = tmp32_9;
                    rax10 = free_timers;
                    *reinterpret_cast<void***>(rbx4 + 56) = rax10;
                    free_timers = rbx4;
                    tmp32_11 = free_count + 1;
                    free_count = tmp32_11;
                    *reinterpret_cast<void***>(rbx4 + 48) = reinterpret_cast<void**>(0);
                } else {
                    rsi12 = *reinterpret_cast<void***>(rbx4 + 16);
                    rcx13 = reinterpret_cast<void*>((reinterpret_cast<int64_t>(__intrinsic()) >> 7) + (__intrinsic() >> 63));
                    rcx14 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rcx13) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx4 + 32)));
                    *reinterpret_cast<void***>(rbx4 + 32) = rcx14;
                    rsi15 = *reinterpret_cast<void***>(rbx4 + 40) + reinterpret_cast<uint64_t>(rsi12 - reinterpret_cast<uint64_t>(rcx13) * 0x3e8) * 0x3e8;
                    *reinterpret_cast<void***>(rbx4 + 40) = rsi15;
                    if (reinterpret_cast<signed char>(rsi15) >= reinterpret_cast<signed char>(0xf4240)) {
                        rdx16 = reinterpret_cast<void*>(__intrinsic() >> 18);
                        *reinterpret_cast<void***>(rbx4 + 32) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx14) + reinterpret_cast<uint64_t>(rdx16));
                        *reinterpret_cast<void***>(rbx4 + 40) = rsi15 - reinterpret_cast<uint64_t>(rdx16) * 0xf4240;
                    }
                    l_resort(rbx4);
                }
                rbx4 = r12_5;
            } while (r12_5);
        }
        ++r15_3;
    } while (r15_3 != 67);
    return;
}

void** fdwatch_get_next_client_data(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    int64_t rdx7;
    void** rbx8;
    int1_t less9;
    void** ecx10;
    void** rax11;
    int64_t rax12;
    void** rcx13;

    *reinterpret_cast<void***>(&rdx7) = next_ridx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    rbx8 = reinterpret_cast<void**>(0xffffffffffffffff);
    less9 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx7)) < reinterpret_cast<signed char>(nreturned);
    if (less9) {
        next_ridx = reinterpret_cast<void**>(static_cast<uint32_t>(rdx7 + 1));
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx7)) < reinterpret_cast<signed char>(0) || (ecx10 = nfiles, reinterpret_cast<signed char>(ecx10) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx7)))) {
            *reinterpret_cast<int32_t*>(&rbx8) = 0;
            *reinterpret_cast<int32_t*>(&rbx8 + 4) = 0;
            fun_5480(3, "bad ridx (%d) in poll_get_fd!");
        } else {
            rax11 = poll_rfdidx;
            *reinterpret_cast<void***>(&rax12) = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax11) + reinterpret_cast<uint64_t>(rdx7 * 4));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
            *reinterpret_cast<int32_t*>(&rbx8) = 0;
            *reinterpret_cast<int32_t*>(&rbx8 + 4) = 0;
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax12)) >= reinterpret_cast<signed char>(0) && reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax12)) < reinterpret_cast<signed char>(ecx10)) {
                rcx13 = fd_data;
                rbx8 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx13) + reinterpret_cast<uint64_t>(rax12 * 8));
            }
        }
    }
    return rbx8;
}

struct s7 {
    signed char[104] pad104;
    int64_t f68;
};

void linger_clear_connection(struct s7* rdi);

void clear_connection(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7) {
    void*** rsp8;
    void** v9;
    void** rax10;
    void** rdi11;
    void** rdi12;
    void** rax13;
    void** edi14;
    int64_t rdi15;
    void** edi16;
    void* rsp17;
    void** rdx18;
    void** rax19;
    void* rsp20;
    void** rbx21;
    void** rsi22;
    void** rdi23;
    int1_t less_or_equal24;
    void** rbx25;
    void** rdi26;
    uint64_t tmp64_27;
    void** edi28;
    void** rsi29;
    void** eax30;
    void** rcx31;
    void** rdx32;
    int64_t rdi33;
    void* rdi34;
    int64_t rdi35;
    void* rdi36;
    int64_t rax37;
    void* rax38;
    void** rdi39;
    void** eax40;
    void* rbx41;
    uint64_t rbx42;
    void** tmp32_43;
    void** rbx44;
    void** edi45;
    void** edi46;
    void** rdi47;
    void** rdi48;
    void* rbx49;
    void** r12_50;
    int64_t r15_51;
    void** r14_52;
    void** rdi53;
    void** v54;
    int32_t tmp32_55;
    int64_t rax56;

    rsp8 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8);
    v9 = rax10;
    rdi11 = *reinterpret_cast<void***>(rdi + 96);
    if (rdi11) {
        tmr_cancel(rdi11, rsi);
        rsp8 = rsp8 - 8 + 8;
        *reinterpret_cast<void***>(rdi + 96) = reinterpret_cast<void**>(0);
    }
    if (reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rdi) == 4)) {
        rdi12 = *reinterpret_cast<void***>(rdi + 0x68);
        tmr_cancel(rdi12, rsi);
        *reinterpret_cast<void***>(rdi + 0x68) = reinterpret_cast<void**>(0);
        rax13 = *reinterpret_cast<void***>(rdi + 8);
        *reinterpret_cast<int32_t*>(rax13 + 0x22c) = 0;
        goto addr_864d_5;
    }
    rax13 = *reinterpret_cast<void***>(rdi + 8);
    if (!*reinterpret_cast<int32_t*>(rax13 + 0x22c)) {
        addr_864d_5:
    } else {
        if (*reinterpret_cast<void***>(rdi) != 3) {
            edi14 = *reinterpret_cast<void***>(rax13 + 0x2c0);
            fdwatch_del_fd(edi14, rsi, rdx, rcx);
            rsp8 = rsp8 - 8 + 8;
            rax13 = *reinterpret_cast<void***>(rdi + 8);
        }
        *reinterpret_cast<void***>(rdi) = reinterpret_cast<void**>(4);
        *reinterpret_cast<void***>(&rdi15) = *reinterpret_cast<void***>(rax13 + 0x2c0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = 0;
        fun_51c0(rdi15, 1);
        edi16 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdi + 8) + 0x2c0);
        fdwatch_add_fd(edi16, rdi, 0, rcx, r8, r9, v9);
        rsp17 = reinterpret_cast<void*>(rsp8 - 8 + 8 - 8 + 8);
        if (*reinterpret_cast<void***>(rdi + 0x68)) {
            fun_5480(3, "replacing non-null linger_timer!");
            rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8);
        }
        rdx18 = rdi;
        rax19 = tmr_create(rsi, linger_clear_connection, rdx18, 0x1f4, 0, r9);
        *reinterpret_cast<void***>(rdi + 0x68) = rax19;
        if (rax19) {
            return;
        }
        fun_5480(2, "tmr_create(linger_clear_connection) failed", 2, "tmr_create(linger_clear_connection) failed");
        fun_5620();
        rsp20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8 - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 8 - 24);
        rbx21 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp20) + 8);
        *reinterpret_cast<int32_t*>(&rsi22) = 0;
        *reinterpret_cast<int32_t*>(&rsi22 + 4) = 0;
        fun_5260(rbx21);
        rdi23 = rbx21;
        logstats(rdi23);
        less_or_equal24 = reinterpret_cast<signed char>(max_connects) <= reinterpret_cast<signed char>(0);
        if (less_or_equal24) 
            goto addr_8731_15; else 
            goto addr_86af_16;
    }
    rbx25 = rdi;
    rdi26 = *reinterpret_cast<void***>(rdi + 8);
    tmp64_27 = stats_bytes + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi26 + 0xc8));
    stats_bytes = tmp64_27;
    if (*reinterpret_cast<void***>(rbx25) != 3) {
        edi28 = *reinterpret_cast<void***>(rdi26 + 0x2c0);
        fdwatch_del_fd(edi28, rsi, rdx, rcx);
        rdi26 = *reinterpret_cast<void***>(rbx25 + 8);
    }
    rsi29 = rsi;
    httpd_close_conn(rdi26, rsi29, rdx, rcx, r8, r9, rax13);
    eax30 = *reinterpret_cast<void***>(rbx25 + 56);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax30) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax30 == 0))) {
        rcx31 = throttles;
        if (!reinterpret_cast<int1_t>(eax30 == 1)) {
            *reinterpret_cast<uint32_t*>(&rsi29) = reinterpret_cast<unsigned char>(eax30) & 0xfffffffe;
            *reinterpret_cast<int32_t*>(&rsi29 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx32) = 0;
            *reinterpret_cast<int32_t*>(&rdx32 + 4) = 0;
            do {
                rdi33 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx25 + reinterpret_cast<unsigned char>(rdx32) * 4) + 16);
                rdi34 = reinterpret_cast<void*>(rdi33 + rdi33 * 2 << 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx31) + reinterpret_cast<uint64_t>(rdi34) + 40) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx31) + reinterpret_cast<uint64_t>(rdi34) + 40) - 1;
                rdi35 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx25 + reinterpret_cast<unsigned char>(rdx32) * 4) + 20);
                rdi36 = reinterpret_cast<void*>(rdi35 + rdi35 * 2 << 4);
                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx31) + reinterpret_cast<uint64_t>(rdi36) + 40) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx31) + reinterpret_cast<uint64_t>(rdi36) + 40) - 1;
                rdx32 = rdx32 + 2;
            } while (rsi29 != rdx32);
        } else {
            *reinterpret_cast<int32_t*>(&rdx32) = 0;
            *reinterpret_cast<int32_t*>(&rdx32 + 4) = 0;
        }
        if (*reinterpret_cast<unsigned char*>(&eax30) & 1) {
            rax37 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx25 + reinterpret_cast<unsigned char>(rdx32) * 4) + 16);
            rax38 = reinterpret_cast<void*>(rax37 + rax37 * 2 << 4);
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx31) + reinterpret_cast<uint64_t>(rax38) + 40) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx31) + reinterpret_cast<uint64_t>(rax38) + 40) - 1;
        }
    }
    rdi39 = *reinterpret_cast<void***>(rbx25 + 0x68);
    if (rdi39) {
        tmr_cancel(rdi39, rsi29);
        *reinterpret_cast<void***>(rbx25 + 0x68) = reinterpret_cast<void**>(0);
    }
    *reinterpret_cast<void***>(rbx25) = reinterpret_cast<void**>(0);
    eax40 = first_free_connect;
    *reinterpret_cast<void***>(rbx25 + 4) = eax40;
    rbx41 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rbx25) - reinterpret_cast<unsigned char>(connects));
    rbx42 = reinterpret_cast<uint64_t>(rbx41) >> 4;
    first_free_connect = reinterpret_cast<void**>(*reinterpret_cast<int32_t*>(&rbx42) * 0x38e38e39);
    tmp32_43 = num_connects + 0xffffffff;
    num_connects = tmp32_43;
    return;
    addr_8731_15:
    rbx44 = hs;
    if (rbx44) {
        hs = reinterpret_cast<void**>(0);
        edi45 = *reinterpret_cast<void***>(rbx44 + 72);
        if (edi45 != 0xffffffff) {
            fdwatch_del_fd(edi45, rsi22, rdx18, 0x1f4);
        }
        edi46 = *reinterpret_cast<void***>(rbx44 + 76);
        if (edi46 != 0xffffffff) {
            fdwatch_del_fd(edi46, rsi22, rdx18, 0x1f4);
        }
        rdi23 = rbx44;
        httpd_terminate(rdi23, rsi22, rdx18, 0x1f4);
    }
    mmc_term(rdi23, rsi22, rdx18, 0x1f4);
    tmr_term(rdi23, rsi22, rdx18, 0x1f4);
    rdi47 = connects;
    fun_5040(rdi47, rsi22, rdx18, rdi47, rsi22, rdx18);
    rdi48 = throttles;
    if (rdi48) {
        fun_5040(rdi48, rsi22, rdx18, rdi48, rsi22, rdx18);
    }
    goto v9;
    addr_86af_16:
    *reinterpret_cast<int32_t*>(&rbx49) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx49) + 4) = 0;
    r12_50 = connects;
    *reinterpret_cast<int32_t*>(&r15_51) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_51) + 4) = 0;
    r14_52 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp20) - 8 + 8 - 8 + 8 + 8);
    do {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r12_50) + reinterpret_cast<uint64_t>(rbx49) - 8)) {
            rdi53 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r12_50) + reinterpret_cast<uint64_t>(rbx49));
            rsi22 = r14_52;
            httpd_close_conn(rdi53, rsi22, rdx18, 0x1f4, 0, r9, v54);
            r12_50 = connects;
        }
        rdi23 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r12_50) + reinterpret_cast<uint64_t>(rbx49));
        if (rdi23) {
            httpd_destroy_conn(rdi23, rsi22, rdx18, 0x1f4);
            r12_50 = connects;
            rdi23 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r12_50) + reinterpret_cast<uint64_t>(rbx49));
            fun_5040(rdi23, rsi22, rdx18, rdi23, rsi22, rdx18);
            tmp32_55 = httpd_conn_count - 1;
            httpd_conn_count = tmp32_55;
            *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r12_50) + reinterpret_cast<uint64_t>(rbx49)) = 0;
        }
        ++r15_51;
        rax56 = reinterpret_cast<int32_t>(max_connects);
        rbx49 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx49) + 0x90);
    } while (r15_51 < rax56);
    goto addr_8731_15;
}

void** start_time = reinterpret_cast<void**>(0);

void** stats_time = reinterpret_cast<void**>(0);

void httpd_logstats(void* rdi, void** rsi, void* rdx, void* rcx, uint64_t r8, int64_t r9);

int64_t mmc_logstats(void* rdi, void** rsi, void* rdx, void* rcx, uint64_t r8, int64_t r9);

int64_t fdwatch_logstats(void* rdi, void** rsi, void* rdx, void* rcx, uint64_t r8, int64_t r9);

int64_t logstats(void** rdi, ...) {
    void** rbx2;
    void* rdx3;
    void* rcx4;
    void* rbx5;
    void** rsi6;
    void* rcx7;
    uint64_t r8_8;
    int64_t r9_9;
    int64_t rax10;
    int32_t eax11;
    int32_t tmp32_12;
    int1_t zf13;

    rbx2 = rdi;
    if (!rdi) {
        rbx2 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
        fun_5260(rbx2);
    }
    rdx3 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx2)) - reinterpret_cast<unsigned char>(start_time));
    rcx4 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx2)) - reinterpret_cast<unsigned char>(stats_time));
    *reinterpret_cast<int32_t*>(&rbx5) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx5) + 4) = 0;
    if (rcx4) {
        rbx5 = rcx4;
    }
    stats_time = *reinterpret_cast<void***>(rbx2);
    rsi6 = reinterpret_cast<void**>("up %ld seconds, stats for %ld seconds:");
    rcx7 = rbx5;
    fun_5480(5, "up %ld seconds, stats for %ld seconds:", 5, "up %ld seconds, stats for %ld seconds:");
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rbx5) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rbx5 == 0))) {
        rdx3 = stats_connections;
        __asm__("cvtsi2ss xmm0, rdx");
        __asm__("cvtsi2ss xmm1, rbx");
        __asm__("divss xmm0, xmm1");
        __asm__("cvtss2sd xmm0, xmm0");
        r8_8 = stats_bytes;
        __asm__("cvtsi2ss xmm2, r8");
        *reinterpret_cast<void***>(&rcx7) = stats_simultaneous;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        __asm__("divss xmm2, xmm1");
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtss2sd xmm1, xmm2");
        *reinterpret_cast<int32_t*>(&r9_9) = httpd_conn_count;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_9) + 4) = 0;
        rsi6 = reinterpret_cast<void**>("  thttpd - %ld connections (%g/sec), %d max simultaneous, %lld bytes (%g/sec), %d httpd_conns allocated");
        fun_5480(5, "  thttpd - %ld connections (%g/sec), %d max simultaneous, %lld bytes (%g/sec), %d httpd_conns allocated", 5, "  thttpd - %ld connections (%g/sec), %d max simultaneous, %lld bytes (%g/sec), %d httpd_conns allocated");
    }
    stats_connections = reinterpret_cast<void*>(0);
    stats_bytes = 0;
    stats_simultaneous = reinterpret_cast<void**>(0);
    httpd_logstats(rbx5, rsi6, rdx3, rcx7, r8_8, r9_9);
    mmc_logstats(rbx5, rsi6, rdx3, rcx7, r8_8, r9_9);
    rax10 = fdwatch_logstats(rbx5, rsi6, rdx3, rcx7, r8_8, r9_9);
    fun_5480(5, "  timers - %d allocated, %d active, %d free", 5, "  timers - %d allocated, %d active, %d free");
    eax11 = free_count;
    tmp32_12 = eax11 + active_count;
    zf13 = tmp32_12 == alloc_count;
    if (!zf13) {
        goto syslog;
    } else {
        return rax10;
    }
}

int64_t waitpid = 0x5566;

int32_t fun_5560(int64_t rdi, void* rsi, int64_t rdx) {
    goto waitpid;
}

int64_t abort = 0x5086;

int64_t fun_5080(void** rdi) {
    goto abort;
}

void** expire_age = reinterpret_cast<void**>(88);

void** mmc_cleanup(void*** rdi) {
    void** rax2;
    void** r15_3;
    void** rbx4;
    void*** r12_5;
    int1_t less6;
    void** rsi7;
    void** rdi8;
    int32_t eax9;
    int32_t tmp32_10;
    void** rax11;
    int32_t tmp32_12;
    void** rax13;
    int1_t less14;
    void** rax15;
    void** rcx16;
    void** rdx17;
    int32_t ebx18;
    int32_t ebp19;
    void** rdi20;
    int64_t rbx21;
    int32_t ebp22;
    void** r14_23;
    void** rax24;
    void** rcx25;

    if (!rdi) {
        rax2 = fun_5400();
        r15_3 = rax2;
    } else {
        r15_3 = *rdi;
    }
    rbx4 = maps;
    if (rbx4) {
        r12_5 = reinterpret_cast<void***>(0x1b4f8);
        do {
            if (*reinterpret_cast<void***>(rbx4 + 32) || (less6 = reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(r15_3) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx4 + 40))) < reinterpret_cast<signed char>(expire_age), less6)) {
                r12_5 = reinterpret_cast<void***>(rbx4 + 64);
            } else {
                rsi7 = *reinterpret_cast<void***>(rbx4 + 16);
                if (rsi7 && (rdi8 = *reinterpret_cast<void***>(rbx4 + 48), eax9 = fun_54f0(rdi8), eax9 < 0)) {
                    rsi7 = reinterpret_cast<void**>("munmap - %m");
                    fun_5480(3, "munmap - %m");
                }
                mapped_bytes = mapped_bytes - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx4 + 16));
                *r12_5 = *reinterpret_cast<void***>(rbx4 + 64);
                tmp32_10 = map_count - 1;
                map_count = tmp32_10;
                rax11 = free_maps;
                *reinterpret_cast<void***>(rbx4 + 64) = rax11;
                tmp32_12 = free_count + 1;
                free_count = tmp32_12;
                free_maps = rbx4;
                rax13 = hash_table;
                *reinterpret_cast<void***>(rax13 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx4 + 60)) * 8) = reinterpret_cast<void**>(0);
            }
            rbx4 = *r12_5;
        } while (rbx4);
    }
    less14 = reinterpret_cast<int64_t>(mapped_bytes) < reinterpret_cast<int64_t>(0x3b9aca01);
    if (!less14 || (*reinterpret_cast<int32_t*>(&rax15) = map_count, *reinterpret_cast<int32_t*>(&rax15 + 4) = 0, *reinterpret_cast<int32_t*>(&rax15) >= 0x3e9)) {
        rax15 = expire_age;
        *reinterpret_cast<int32_t*>(&rcx16) = 60;
        *reinterpret_cast<int32_t*>(&rcx16 + 4) = 0;
        if (reinterpret_cast<signed char>(rax15) >= reinterpret_cast<signed char>(92)) {
            rax15 = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(rax15) + reinterpret_cast<unsigned char>(rax15)) * 0x5555555555555556);
            rdx17 = __intrinsic();
            rcx16 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdx17) >> 63) + reinterpret_cast<unsigned char>(rdx17));
        }
    } else {
        if (*reinterpret_cast<int32_t*>(&rax15) > 0x1f3) {
            addr_10d9b_16:
            ebx18 = free_count;
            if (ebx18 >= 0x65) {
                ebp19 = alloc_count;
                rdi20 = free_maps;
                *reinterpret_cast<uint32_t*>(&rbx21) = ebx18 + 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx21) + 4) = 0;
                ebp22 = ebp19 - 1;
                do {
                    r14_23 = *reinterpret_cast<void***>(rdi20 + 64);
                    free_maps = r14_23;
                    free_count = static_cast<int32_t>(rbx21 - 2);
                    rax15 = fun_5040(rdi20, rsi7, rdx17);
                    alloc_count = ebp22;
                    *reinterpret_cast<uint32_t*>(&rbx21) = *reinterpret_cast<uint32_t*>(&rbx21) - 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx21) + 4) = 0;
                    --ebp22;
                    rdi20 = r14_23;
                } while (*reinterpret_cast<uint32_t*>(&rbx21) > 0x65);
                goto addr_10ded_19;
            }
        } else {
            rax24 = expire_age;
            rax15 = rax24 + reinterpret_cast<unsigned char>(rax24) * 4;
            *reinterpret_cast<int32_t*>(&rcx16) = 0x708;
            *reinterpret_cast<int32_t*>(&rcx16 + 4) = 0;
            if (reinterpret_cast<signed char>(rax15) <= reinterpret_cast<signed char>(0x1c1f)) {
                rcx25 = rax15 + 3;
                if (reinterpret_cast<signed char>(rax15) >= reinterpret_cast<signed char>(0)) {
                    rcx25 = rax15;
                }
                rcx16 = reinterpret_cast<void**>(reinterpret_cast<signed char>(rcx25) >> 2);
            }
        }
    }
    expire_age = rcx16;
    goto addr_10d9b_16;
    addr_10ded_19:
    return rax15;
}

void** tmr_cleanup(void*** rdi, void** rsi, void** rdx) {
    void** rdi4;
    int32_t ebx5;
    int32_t ebp6;
    int32_t ebp7;
    int32_t ebx8;
    void** r14_9;
    void** rax10;

    rdi4 = free_timers;
    if (rdi4) {
        ebx5 = alloc_count;
        ebp6 = free_count;
        ebp7 = ebp6 - 1;
        ebx8 = ebx5 - 1;
        do {
            r14_9 = *reinterpret_cast<void***>(rdi4 + 56);
            free_timers = r14_9;
            free_count = ebp7;
            rax10 = fun_5040(rdi4, rsi, rdx);
            alloc_count = ebx8;
            --ebp7;
            --ebx8;
            rdi4 = r14_9;
        } while (r14_9);
    }
    return rax10;
}

int32_t httpd_get_conn(void** rdi, void** esi, void** rdx, void** rcx, void** r8, void** r9, void** a7) {
    void* rsp8;
    void** rbp9;
    int64_t rdi10;
    void** eax11;
    uint32_t* rax12;
    int32_t r14d13;
    uint32_t ecx14;
    uint16_t v15;
    void** rdi16;
    uint32_t eax17;
    uint16_t v18;
    void** rcx19;
    void** rbp20;

    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0xc8);
    rbp9 = rdi;
    if (!*reinterpret_cast<void***>(rdx)) {
        *reinterpret_cast<void***>(rdx + 0x98) = reinterpret_cast<void**>(0);
        httpd_realloc_str(rdx + 0x90, rdx + 0x98, 0x1f4, rcx, r8, r9);
        __asm__("xorps xmm0, xmm0");
        __asm__("movups [rbx+0x1c8], xmm0");
        __asm__("movups [rbx+0x1b8], xmm0");
        __asm__("movups [rbx+0x1a8], xmm0");
        __asm__("movups [rbx+0x198], xmm0");
        __asm__("movups [rbx+0x188], xmm0");
        __asm__("movups [rbx+0x178], xmm0");
        httpd_realloc_str(rdx + 0xd8, rdx + 0x178, 1, rcx, r8, r9);
        httpd_realloc_str(rdx + 0xe8, rdx + 0x180, 1, rcx, r8, r9);
        httpd_realloc_str(rdx + 0xf0, rdx + 0x188, 0, rcx, r8, r9);
        httpd_realloc_str(rdx + 0xf8, rdx + 0x190, 0, rcx, r8, r9);
        rbp9 = rbp9;
        httpd_realloc_str(rdx + 0x100, rdx + 0x198, 0, rcx, r8, r9);
        httpd_realloc_str(rdx + 0x108, rdx + 0x1a0, 0, rcx, r8, r9);
        httpd_realloc_str(rdx + 0x120, rdx + 0x1a8, 0, rcx, r8, r9);
        httpd_realloc_str(rdx + 0x128, rdx + 0x1b0, 0, rcx, r8, r9);
        httpd_realloc_str(rdx + 0x148, rdx + 0x1b8, 0, rcx, r8, r9);
        httpd_realloc_str(rdx + 0x158, rdx + 0x1c0, 0, rcx, r8, r9);
        httpd_realloc_str(rdx + 0x168, rdx + 0x1c8, 0, rcx, r8, r9);
        httpd_realloc_str(rdx + 0x170, rdx + 0x1d0, 0, rcx, r8, r9);
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        *reinterpret_cast<void***>(rdx) = reinterpret_cast<void**>(1);
    }
    *reinterpret_cast<void***>(&rdi10) = esi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0;
    eax11 = fun_55c0(rdi10, reinterpret_cast<int64_t>(rsp8) + 72, reinterpret_cast<int64_t>(rsp8) + 4);
    *reinterpret_cast<void***>(rdx + 0x2c0) = eax11;
    if (reinterpret_cast<signed char>(eax11) < reinterpret_cast<signed char>(0)) {
        rax12 = fun_5090();
        if (*rax12 == 11) {
            r14d13 = 2;
        } else {
            if (*rax12 != 0x67) {
                fun_5480(3, "accept - %m", 3, "accept - %m");
            }
            r14d13 = 0;
        }
    } else {
        ecx14 = static_cast<uint32_t>(v15) & 0xfffffff7;
        if (*reinterpret_cast<int16_t*>(&ecx14) != 2) {
            r14d13 = 0;
            fun_5480(3, "unknown sockaddr family", 3, "unknown sockaddr family");
            fun_52a0();
            *reinterpret_cast<void***>(rdx + 0x2c0) = reinterpret_cast<void**>(0xffffffff);
        } else {
            r14d13 = 1;
            rdi16 = eax11;
            *reinterpret_cast<int32_t*>(&rdi16 + 4) = 0;
            fun_5160(rdi16, 2, rdi16, 2);
            *reinterpret_cast<void***>(rdx + 8) = rbp9;
            eax17 = v18;
            *reinterpret_cast<int32_t*>(&rcx19) = 28;
            *reinterpret_cast<int32_t*>(&rcx19 + 4) = 0;
            if (*reinterpret_cast<int16_t*>(&eax17) != 10) {
                rcx19 = reinterpret_cast<void**>(0);
            }
            *reinterpret_cast<int32_t*>(&rbp20) = 16;
            *reinterpret_cast<int32_t*>(&rbp20 + 4) = 0;
            if (*reinterpret_cast<int16_t*>(&eax17) != 2) {
                rbp20 = rcx19;
            }
            fun_5270(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<unsigned char>(rbp20) + 16);
            fun_53d0(rdx + 16, reinterpret_cast<int64_t>(rsp8) - 8 + 8 - 8 + 8 - 8 + 8 + 72, rbp20, rcx19, r8, r9);
            __asm__("xorps xmm0, xmm0");
            __asm__("movups [rbx+0xa0], xmm0");
            __asm__("movups [rbx+0xac], xmm0");
            __asm__("movups [rbx+0xc0], xmm0");
            *reinterpret_cast<void***>(rdx + 0xd0) = reinterpret_cast<void**>(0x13553);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0xd8)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(rdx + 0xe0) = reinterpret_cast<void**>("UNKNOWN");
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0xe8)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0xf0)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0xf8)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0x100)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0x108)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(rdx + 0x110) = reinterpret_cast<void**>(0x13553);
            *reinterpret_cast<void***>(rdx + 0x118) = reinterpret_cast<void**>(0x13553);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0x120)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0x128)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(rdx + 0x130) = reinterpret_cast<void**>(0x13553);
            *reinterpret_cast<void***>(rdx + 0x138) = reinterpret_cast<void**>(0x13553);
            *reinterpret_cast<void***>(rdx + 0x140) = reinterpret_cast<void**>(0x13553);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0x148)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(rdx + 0x150) = reinterpret_cast<void**>(0x13553);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0x158)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(rdx + 0x160) = reinterpret_cast<void**>(0x13553);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0x168)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(*reinterpret_cast<void***>(rdx + 0x170)) = reinterpret_cast<void**>(0);
            *reinterpret_cast<void***>(rdx + 0x1d8) = reinterpret_cast<void**>(0);
            __asm__("pcmpeqd xmm1, xmm1");
            __asm__("movdqu [rbx+0x1e0], xmm1");
            *reinterpret_cast<void***>(rdx + 0x1f0) = reinterpret_cast<void**>(0xffffffffffffffff);
            *reinterpret_cast<void***>(rdx + 0x1f8) = reinterpret_cast<void**>(0x13553);
            *reinterpret_cast<void***>(rdx + 0x200) = reinterpret_cast<void**>(0);
            *reinterpret_cast<int32_t*>(rdx + 0x208) = 1;
            __asm__("movups [rbx+0x20c], xmm0");
            *reinterpret_cast<int32_t*>(rdx + 0x21c) = 0;
            *reinterpret_cast<void***>(rdx + 0x220) = reinterpret_cast<void**>(0xffffffffffffffff);
            *reinterpret_cast<int32_t*>(rdx + 0x228) = reinterpret_cast<int32_t>(0);
            *reinterpret_cast<void***>(rdx + 0x2c8) = reinterpret_cast<void**>(0);
        }
    }
    return r14d13;
}

void httpd_logstats(void* rdi, void** rsi, void* rdx, void* rcx, uint64_t r8, int64_t r9) {
    int32_t edx7;
    uint64_t rcx8;

    edx7 = str_alloc_count;
    if (reinterpret_cast<uint1_t>(edx7 < 0) | reinterpret_cast<uint1_t>(edx7 == 0)) {
        return;
    } else {
        rcx8 = str_alloc_size;
        if (reinterpret_cast<int64_t>(rcx8) < reinterpret_cast<int64_t>(0)) {
            __asm__("cvtsi2ss xmm0, rsi");
            __asm__("addss xmm0, xmm0");
        } else {
            __asm__("cvtsi2ss xmm0, rcx");
        }
        __asm__("cvtsi2ss xmm1, edx");
        __asm__("divss xmm0, xmm1");
        __asm__("cvtss2sd xmm0, xmm0");
        goto syslog;
    }
}

int64_t mmc_logstats(void* rdi, void** rsi, void* rdx, void* rcx, uint64_t r8, int64_t r9) {
    int32_t eax7;
    int32_t tmp32_8;
    int1_t zf9;
    int64_t rax10;

    fun_5480(5, "  map cache - %d allocated, %d active (%lld bytes), %d free; hash size: %d; expire age: %lld", 5, "  map cache - %d allocated, %d active (%lld bytes), %d free; hash size: %d; expire age: %lld");
    eax7 = free_count;
    tmp32_8 = eax7 + map_count;
    zf9 = tmp32_8 == alloc_count;
    if (!zf9) {
        goto syslog;
    } else {
        return rax10;
    }
}

int64_t fdwatch_logstats(void* rdi, void** rsi, void* rdx, void* rcx, uint64_t r8, int64_t r9) {
    int64_t rax7;

    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int64_t>(rdi) < reinterpret_cast<int64_t>(0)) | reinterpret_cast<uint1_t>(rdi == 0))) {
        __asm__("cvtsi2ss xmm0, rdx");
        __asm__("cvtsi2ss xmm1, rdi");
        __asm__("divss xmm0, xmm1");
        __asm__("cvtss2sd xmm0, xmm0");
        fun_5480(5, "  fdwatch - %ld %ss (%g/sec)", 5, "  fdwatch - %ld %ss (%g/sec)");
    }
    nwatches = 0;
    return rax7;
}

int64_t gethostname = 0x5606;

int32_t fun_5600(int64_t rdi, void** rsi) {
    goto gethostname;
}

void send_response(void** rdi, void** esi, void** rdx, void** rcx, void** r8, void** r9) {
    void** v7;
    void** r13_8;
    void* rsp9;
    void** r12_10;
    void** rcx11;
    void** r8_12;
    void** r9_13;
    void** v14;
    int40_t v15;
    void** v16;
    void** v17;
    void** v18;
    int16_t v19;
    void** rax20;
    void** r15_21;
    void** r14_22;
    void** rdx23;
    void*** rdi24;
    void* rsp25;
    uint32_t ecx26;
    void** rdx27;
    void* rdi28;
    void** rbx29;
    void* rax30;
    int32_t esi31;
    void*** rbx32;
    void** r12_33;
    void** rcx34;
    void** v35;
    void** v36;
    void** v37;
    int40_t v38;
    void** v39;
    void** v40;
    void** v41;
    void** rax42;
    void** rdx43;
    void*** rdi44;
    void** rsi45;
    int32_t eax46;
    void* rsp47;
    void** rdx48;
    void** rax49;
    void** rcx50;
    void** rdx51;
    void** rcx52;
    void** rdx53;
    void** rcx54;
    void** rdx55;
    void** rcx56;
    void** rdx57;
    void** rcx58;
    void** rdx59;
    void** rcx60;
    void** rdx61;
    void** rcx62;
    void** rdx63;
    void** r12_64;
    void** v65;
    void** v66;
    void** v67;
    int40_t v68;
    void** v69;
    void** v70;
    void** v71;
    void** rax72;
    void** rdx73;
    void*** rdi74;

    v7 = r8;
    r13_8 = rdi;
    send_mime(rdi, esi, rdx, 0x13553, rcx, "text/html; charset=%s", 0xff, 0);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - reinterpret_cast<int64_t>("addrinfo") - 8 - 8 - 8 + 8 + 8);
    r12_10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp9) + 0x408);
    rcx11 = esi;
    *reinterpret_cast<int32_t*>(&rcx11 + 4) = 0;
    r8_12 = rdx;
    r9_13 = esi;
    *reinterpret_cast<int32_t*>(&r9_13 + 4) = 0;
    my_snprintf(r12_10, 0x7d0, "<!DOCTYPE html PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\" \"http://www.w3.org/TR/html4/loose.dtd\">\n\n<html>\n\n  <head>\n    <meta http-equiv=\"Content-type\" content=\"text/html;charset=UTF-8\">\n    <title>%d %s</title>\n  </head>\n\n  <body bgcolor=\"#cc9999\" text=\"#000000\" link=\"#2020ff\" vlink=\"#4040cc\">\n\n    <h2>%d %s</h2>\n", rcx11, r8_12, r9_13, rdx, 0, v14, v7, v15, v16, v17, v18, v19);
    rax20 = fun_51d0(r12_10, 0x7d0, r12_10, 0x7d0);
    r15_21 = r13_8 + 0x170;
    r14_22 = r13_8 + 0x1d0;
    rdx23 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_8 + 0x1d8)) + reinterpret_cast<unsigned char>(rax20));
    httpd_realloc_str(r15_21, r14_22, rdx23, rcx11, r8_12, r9_13);
    rdi24 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_8 + 0x170)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_8 + 0x1d8)));
    fun_53d0(rdi24, r12_10, rax20, rcx11, r8_12, r9_13);
    rsp25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 - 8 + 8 + 16 - 8 + 8 - 8 + 8 - 8 + 8);
    *reinterpret_cast<void***>(r13_8 + 0x1d8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_8 + 0x1d8)) + reinterpret_cast<unsigned char>(rax20));
    *reinterpret_cast<void***>(&ecx26) = *reinterpret_cast<void***>(r9);
    if (!*reinterpret_cast<void***>(&ecx26)) {
        rdx27 = v7;
    } else {
        rdi28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) + 16);
        rbx29 = r9 + 1;
        rax30 = rdi28;
        rdx27 = v7;
        do {
            esi31 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(&ecx26));
            if (esi31 == 62) {
                rax30 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax30) + 3);
            } else {
                if (esi31 == 60) {
                    rax30 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax30) + 3);
                }
            }
            rax30 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax30) + 1);
            ecx26 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx29));
            if (!*reinterpret_cast<void***>(&ecx26)) 
                break;
            ++rbx29;
        } while (reinterpret_cast<int64_t>(rax30) - reinterpret_cast<int64_t>(rdi28) < 0x3e3);
        goto addr_9a30_11;
    }
    addr_9a3c_12:
    rbx32 = reinterpret_cast<void***>(r13_8 + 0x1d8);
    r12_33 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp25) + 0x400);
    rcx34 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp25) + 16);
    my_snprintf(r12_33, 0x7d0, rdx27, rcx34, r8_12, r9_13, v35, v7, v36, v37, v38, v39, v40, v41, 0x6726);
    rax42 = fun_51d0(r12_33, 0x7d0, r12_33, 0x7d0);
    rdx43 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_8 + 0x1d8)) + reinterpret_cast<unsigned char>(rax42));
    httpd_realloc_str(r15_21, r14_22, rdx43, rcx34, r8_12, r9_13);
    rdi44 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_8 + 0x170)) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_8 + 0x1d8)));
    fun_53d0(rdi44, r12_33, rax42, rcx34, r8_12, r9_13);
    *reinterpret_cast<void***>(r13_8 + 0x1d8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r13_8 + 0x1d8)) + reinterpret_cast<unsigned char>(rax42));
    rsi45 = *reinterpret_cast<void***>(r13_8 + 0x118);
    eax46 = match("**MSIE**", rsi45, rax42, rcx34, r8_12, r9_13);
    rsp47 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp25) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
    if (eax46) {
        rdx48 = *rbx32 + 5;
        httpd_realloc_str(r15_21, r14_22, rdx48, rcx34, r8_12, r9_13);
        rax49 = *reinterpret_cast<void***>(r15_21);
        rcx50 = *rbx32;
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax49) + reinterpret_cast<unsigned char>(rcx50) + 4) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rax49) + reinterpret_cast<unsigned char>(rcx50)) = 0x2d2d213c;
        rdx51 = *rbx32;
        *rbx32 = rdx51 + 5;
        httpd_realloc_str(r15_21, r14_22, rdx51 + 83, rcx50, r8_12, r9_13);
        rcx52 = *rbx32;
        __asm__("movups xmm0, [rip+0x9e7a]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9e60]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9e44]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9e28]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9e0c]");
        __asm__("movups [rax+rcx], xmm0");
        rdx53 = *rbx32;
        *rbx32 = rdx53 + 78;
        httpd_realloc_str(r15_21, r14_22, rdx53 + 0x9c, rcx52, r8_12, r9_13);
        rcx54 = *rbx32;
        __asm__("movups xmm0, [rip+0x9e1d]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9e03]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9de7]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9dcb]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9daf]");
        __asm__("movups [rax+rcx], xmm0");
        rdx55 = *rbx32;
        *rbx32 = rdx55 + 78;
        httpd_realloc_str(r15_21, r14_22, rdx55 + 0x9c, rcx54, r8_12, r9_13);
        rcx56 = *rbx32;
        __asm__("movups xmm0, [rip+0x9dc0]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9da6]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9d8a]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9d6e]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9d52]");
        __asm__("movups [rax+rcx], xmm0");
        rdx57 = *rbx32;
        *rbx32 = rdx57 + 78;
        httpd_realloc_str(r15_21, r14_22, rdx57 + 0x9c, rcx56, r8_12, r9_13);
        rcx58 = *rbx32;
        __asm__("movups xmm0, [rip+0x9d63]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9d49]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9d2d]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9d11]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9cf5]");
        __asm__("movups [rax+rcx], xmm0");
        rdx59 = *rbx32;
        *rbx32 = rdx59 + 78;
        httpd_realloc_str(r15_21, r14_22, rdx59 + 0x9c, rcx58, r8_12, r9_13);
        rcx60 = *rbx32;
        __asm__("movups xmm0, [rip+0x9d06]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9cec]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9cd0]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9cb4]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9c98]");
        __asm__("movups [rax+rcx], xmm0");
        rdx61 = *rbx32;
        *rbx32 = rdx61 + 78;
        httpd_realloc_str(r15_21, r14_22, rdx61 + 0x9c, rcx60, r8_12, r9_13);
        rcx62 = *rbx32;
        __asm__("movups xmm0, [rip+0x9ca9]");
        __asm__("movups [rax+rcx+0x3e], xmm0");
        __asm__("movups xmm0, [rip+0x9c8f]");
        __asm__("movups [rax+rcx+0x30], xmm0");
        __asm__("movups xmm0, [rip+0x9c73]");
        __asm__("movups [rax+rcx+0x20], xmm0");
        __asm__("movups xmm0, [rip+0x9c57]");
        __asm__("movups [rax+rcx+0x10], xmm0");
        __asm__("movups xmm0, [rip+0x9c3b]");
        __asm__("movups [rax+rcx], xmm0");
        rdx63 = *rbx32;
        *rbx32 = rdx63 + 78;
        httpd_realloc_str(r15_21, r14_22, rdx63 + 82, rcx62, r8_12, r9_13);
        rsp47 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp47) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_21)) + reinterpret_cast<unsigned char>(*rbx32)) = 0xa3e2d2d;
        *rbx32 = *rbx32 + 4;
    }
    r12_64 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp47) + 0xbd0);
    my_snprintf(r12_64, 0x3e8, "    <hr>\n\n    <address><a href=\"%s\">%s</a></address>\n\n  </body>\n\n</html>\n", "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", r9_13, v65, v7, v66, v67, v68, v69, v70, v71, 0x6726);
    rax72 = fun_51d0(r12_64, 0x3e8, r12_64, 0x3e8);
    rdx73 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*rbx32) + reinterpret_cast<unsigned char>(rax72));
    httpd_realloc_str(r15_21, r14_22, rdx73, "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", r9_13);
    rdi74 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_21)) + reinterpret_cast<unsigned char>(*rbx32));
    fun_53d0(rdi74, r12_64, rax72, "http://www.acme.com/software/thttpd/", "thttpd/2.29 23May2018", r9_13);
    *rbx32 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*rbx32) + reinterpret_cast<unsigned char>(rax72));
    return;
    addr_9a30_11:
    goto addr_9a3c_12;
}

void** tdate_parse(void** rdi, void** rsi, void** rdx) {
    void* rsp4;
    void** rbx5;
    uint32_t eax6;
    void** rbp7;
    void** r15_8;
    void** rdx9;
    void** rcx10;
    void** r8_11;
    void** r9_12;
    void** v13;
    void** v14;
    int32_t eax15;
    void* rsp16;
    int32_t eax17;
    void** rdx18;
    void** r13_19;
    void** r14_20;
    void** r9_21;
    void** v22;
    void** v23;
    int32_t eax24;
    int32_t eax25;
    void** rdx26;
    void** rcx27;
    void** r8_28;
    void** r9_29;
    void** v30;
    void** v31;
    int32_t eax32;
    int32_t eax33;
    void** r12_34;
    void** rbp35;
    void** r15_36;
    void** r9_37;
    void** v38;
    void** v39;
    void** v40;
    int32_t eax41;
    int32_t eax42;
    void* rsp43;
    void** rdx44;
    void** rcx45;
    void** r8_46;
    void** r9_47;
    int32_t eax48;
    int32_t eax49;
    int32_t eax50;
    void* rsp51;
    void** rdx52;
    void** rcx53;
    void** r8_54;
    void** r14_55;
    int32_t eax56;
    int32_t eax57;
    int32_t eax58;
    void* rsp59;
    void** rdx60;
    void** rcx61;
    void** r8_62;
    void** r9_63;
    int32_t eax64;
    void** rbx65;
    int32_t eax66;
    int32_t eax67;
    int64_t rbx68;
    int32_t v69;
    int64_t rbp70;
    int64_t v71;
    int64_t rdi72;
    int32_t ebx73;
    int32_t ecx74;
    int64_t rax75;
    int64_t rbp76;
    uint32_t ebx77;
    int64_t rsi78;
    int32_t v79;
    int32_t v80;
    int32_t v81;
    int32_t v82;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x428);
    rbx5 = rdi;
    while ((eax6 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5)), *reinterpret_cast<signed char*>(&eax6) == 32) || *reinterpret_cast<signed char*>(&eax6) == 9) {
        ++rbx5;
    }
    rbp7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 36);
    r15_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 32);
    rdx9 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 12);
    rcx10 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 48);
    r8_11 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 20);
    r9_12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp4) + 16);
    eax15 = fun_5470(rbx5, "%d-%400[a-zA-Z]-%d %d:%d:%d GMT", rdx9, rcx10, r8_11, r9_12, r15_8, rbp7, v13, v14);
    rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 - 8 - 8 + 8 + 16);
    if (eax15 == 6 && (eax17 = scan_mon(reinterpret_cast<int64_t>(rsp16) + 48, reinterpret_cast<int64_t>(rsp16) + 24, rdx9, rcx10, r8_11, r9_12), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8), !!eax17) || ((rdx18 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 12), r13_19 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 48), r14_20 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 20), r9_21 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 16), eax24 = fun_5470(rbx5, "%d %400[a-zA-Z] %d %d:%d:%d GMT", rdx18, r13_19, r14_20, r9_21, r15_8, rbp7, v22, v23), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 - 8 - 8 + 8 + 16), eax24 == 6) && (eax25 = scan_mon(reinterpret_cast<int64_t>(rsp16) + 48, reinterpret_cast<int64_t>(rsp16) + 24, rdx18, r13_19, r14_20, r9_21), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8), !!eax25) || ((rdx26 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 16), rcx27 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 32), r8_28 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 36), r9_29 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 12), eax32 = fun_5470(rbx5, "%d:%d:%d GMT %d-%400[a-zA-Z]-%d", rdx26, rcx27, r8_28, r9_29, r13_19, r14_20, v30, v31), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 - 8 - 8 + 8 + 16), eax32 == 6) && (eax33 = scan_mon(reinterpret_cast<int64_t>(rsp16) + 48, reinterpret_cast<int64_t>(rsp16) + 24, rdx26, rcx27, r8_28, r9_29), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8), !!eax33) || ((r12_34 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 16), rbp35 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 32), r15_36 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 36), r9_37 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp16) + 12), v38 = r14_20, eax41 = fun_5470(rbx5, "%d:%d:%d GMT %d %400[a-zA-Z] %d", r12_34, rbp35, r15_36, r9_37, r13_19, v38, v39, v40), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 - 8 - 8 + 8 + 16), eax41 == 6) && (v38 = reinterpret_cast<void**>(0x11b72), eax42 = scan_mon(reinterpret_cast<int64_t>(rsp16) + 48, reinterpret_cast<int64_t>(rsp16) + 24, r12_34, rbp35, r15_36, r9_37), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8), !!eax42) || ((rsp43 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8), rdx44 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp43) + 0x238), rcx45 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp43) + 20), r8_46 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp43) + 56), r9_47 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp43) + 28), eax48 = fun_5470(rbx5, "%400[a-zA-Z], %d-%400[a-zA-Z]-%d %d:%d:%d GMT", rdx44, rcx45, r8_46, r9_47, r12_34, rbp35, r15_36, v38), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp43) - 8 - 8 - 8 - 8 + 8 + 32), eax48 == 7) && ((v38 = reinterpret_cast<void**>(0x11bc6), eax49 = scan_wday(reinterpret_cast<int64_t>(rsp16) + 0x230, reinterpret_cast<int64_t>(rsp16) + 40, rdx44, rcx45, r8_46, r9_47), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8), !!eax49) && (v38 = reinterpret_cast<void**>(0x11bd9), eax50 = scan_mon(reinterpret_cast<int64_t>(rsp16) + 48, reinterpret_cast<int64_t>(rsp16) + 24, rdx44, rcx45, r8_46, r9_47), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8), !!eax50)) || ((rsp51 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8), rdx52 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp51) + 0x238), rcx53 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp51) + 20), r8_54 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp51) + 56), r14_55 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp51) + 28), eax56 = fun_5470(rbx5, "%400[a-zA-Z], %d %400[a-zA-Z] %d %d:%d:%d GMT", rdx52, rcx53, r8_54, r14_55, r12_34, rbp35, r15_36, v38), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp51) - 8 - 8 - 8 - 8 + 8 + 32), eax56 == 7) && ((v38 = reinterpret_cast<void**>(0x11c30), eax57 = scan_wday(reinterpret_cast<int64_t>(rsp16) + 0x230, reinterpret_cast<int64_t>(rsp16) + 40, rdx52, rcx53, r8_54, r14_55), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8), !!eax57) && (v38 = reinterpret_cast<void**>(0x11c43), eax58 = scan_mon(reinterpret_cast<int64_t>(rsp16) + 48, reinterpret_cast<int64_t>(rsp16) + 24, rdx52, rcx53, r8_54, r14_55), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8), !!eax58)) || (rsp59 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8), rdx60 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp59) + 0x238), rcx61 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp59) + 56), r8_62 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp59) + 20), r9_63 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp59) + 24), eax64 = fun_5470(rbx5, "%400[a-zA-Z] %400[a-zA-Z] %d %d:%d:%d GMT %d", rdx60, rcx61, r8_62, r9_63, rbp35, r15_36, r14_55, v38), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp59) - 8 - 8 - 8 - 8 + 8 + 32), rbx65 = reinterpret_cast<void**>(0xffffffffffffffff), eax64 == 7) && ((eax66 = scan_wday(reinterpret_cast<int64_t>(rsp16) + 0x230, reinterpret_cast<int64_t>(rsp16) + 40, rdx60, rcx61, r8_62, r9_63), rsp16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp16) - 8 + 8), !!eax66) && (eax67 = scan_mon(reinterpret_cast<int64_t>(rsp16) + 48, reinterpret_cast<int64_t>(rsp16) + 24, rdx60, rcx61, r8_62, r9_63), !!eax67)))))))) {
        *reinterpret_cast<int32_t*>(&rbx68) = v69;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx68) + 4) = 0;
        rbp70 = v71;
        *reinterpret_cast<int32_t*>(&rdi72) = static_cast<int32_t>(rbx68 + 100);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi72) + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&rbx68) >= 70) {
            *reinterpret_cast<int32_t*>(&rdi72) = *reinterpret_cast<int32_t*>(&rbx68);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi72) + 4) = 0;
        }
        if (*reinterpret_cast<int32_t*>(&rbx68) >= 0x76d) {
            *reinterpret_cast<int32_t*>(&rdi72) = static_cast<int32_t>(rbx68 - 0x76c);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi72) + 4) = 0;
        }
        ebx73 = static_cast<int32_t>(rdi72 - 69);
        ecx74 = static_cast<int32_t>(rdi72 - 66);
        if (ebx73 >= 0) {
            ecx74 = ebx73;
        }
        rax75 = *reinterpret_cast<int32_t*>(&rbp70);
        rbp76 = *reinterpret_cast<int32_t*>(0x15990 + rax75 * 4) + ((ecx74 >> 2) + static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rdi72) * 0x16d - 0x63ce));
        if (*reinterpret_cast<int32_t*>(&rax75) >= 2 && ((ebx77 = reinterpret_cast<uint32_t>(static_cast<int32_t>(rdi72 + 0x76c) * 0xc28f5c29 + 0x51eb850), ebx77 <= 0xa3d70a) || ebx77 >= 0x28f5c29 && !(*reinterpret_cast<unsigned char*>(&rdi72) & 3))) {
            ++rbp76;
        }
        rsi78 = v79 + rbp76;
        rbx65 = reinterpret_cast<void**>(((v80 + (rsi78 + rsi78 * 2) * 8) * 60 + v81) * 60 + v82 + 0xfffffffffffeae80);
    }
    return rbx65;
}

int64_t getsockname = 0x55d6;

int32_t fun_55d0(int64_t rdi, void* rsi, void* rdx) {
    goto getsockname;
}

int64_t strncpy = 0x50a6;

void fun_50a0(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto strncpy;
}

int64_t localtime = 0x5076;

void** fun_5070(void* rdi, void** rsi, void** rdx) {
    goto localtime;
}

int64_t fflush = 0x5456;

void fun_5450(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9, void** a7, void** a8, void** a9, void* a10) {
    goto fflush;
}

int64_t nice = 0x5466;

void fun_5460(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto nice;
}

int64_t execve = 0x5366;

void fun_5360(void** rdi, void** rsi, int64_t rdx, void** rcx, void** r8, void** r9) {
    goto execve;
}

int64_t _exit = 0x50c6;

void fun_50c0(int64_t rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    goto _exit;
}

int64_t readdir = 0x5426;

void** fun_5420(void** rdi, void** rsi, void** rdx) {
    goto readdir;
}

int64_t fdopen = 0x54e6;

void** fun_54e0(int64_t rdi, int64_t rsi, void** rdx) {
    goto fdopen;
}

int64_t sprintf = 0x5616;

void fun_5610(void** rdi, int64_t rsi, void** rdx) {
    goto sprintf;
}

int64_t kill = 0x53f6;

int32_t fun_53f0() {
    goto kill;
}

int64_t getdtablesize = 0x56d6;

void** fun_56d0(void** rdi, void** rsi, void** rdx, void** rcx) {
    goto getdtablesize;
}

int64_t getrlimit = 0x5646;

int32_t fun_5640(int64_t rdi, void* rsi, void** rdx, void** rcx) {
    goto getrlimit;
}

int64_t setrlimit = 0x54c6;

int32_t fun_54c0(int64_t rdi, void*** rsi, void** rdx) {
    goto setrlimit;
}

void*** stderr = reinterpret_cast<void***>(0);

void** argv0 = reinterpret_cast<void**>(0);

int64_t g61;

int32_t g1;

void usage() {
    void*** rax1;
    void** rdi2;
    void** rdx3;
    void** rcx4;
    void** r8_5;
    void** r9_6;
    void** rax7;
    int1_t zf8;
    struct s2* rax9;
    void** edi10;
    void** esi11;
    void** rax12;
    int64_t rbx13;
    void** ecx14;
    int64_t rsi15;
    void** rdi16;
    int16_t dx17;
    void** rdx18;
    void** rax19;

    rax1 = stderr;
    rdi2 = *rax1;
    rdx3 = argv0;
    fun_53a0(rdi2, "usage:  %s [-C configfile] [-p port] [-d dir] [-r|-nor] [-dd data_dir] [-s|-nos] [-v|-nov] [-g|-nog] [-u user] [-c cgipat] [-t throttles] [-h host] [-l logfile] [-i pidfile] [-T charset] [-P P3P] [-M maxage] [-V] [-D]\n", rdx3, rcx4, r8_5, r9_6, rax7, __return_address());
    fun_5620();
    g61 = 0;
    zf8 = g1 == 3;
    if (!zf8) {
        goto rax7;
    }
    g1 = 2;
    rax9 = g9;
    edi10 = rax9->f2c0;
    if (reinterpret_cast<signed char>(edi10) < reinterpret_cast<signed char>(0)) 
        goto addr_102c8_5;
    esi11 = nfiles;
    if (reinterpret_cast<signed char>(esi11) <= reinterpret_cast<signed char>(edi10)) 
        goto addr_102c8_5;
    rax12 = fd_rw;
    *reinterpret_cast<void***>(&rbx13) = edi10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx13) + 4) = 0;
    if (*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax12) + reinterpret_cast<uint64_t>(rbx13 * 4)) == 0xffffffff) 
        goto addr_102df_8;
    addr_102c8_5:
    goto syslog;
    addr_102df_8:
    ecx14 = npoll_fds;
    if (reinterpret_cast<signed char>(ecx14) >= reinterpret_cast<signed char>(esi11)) {
        fun_5480(3, "too many fds in poll_add_fd!", 3, "too many fds in poll_add_fd!");
        rax12 = fd_rw;
    } else {
        rsi15 = reinterpret_cast<int32_t>(ecx14);
        rdi16 = pollfds;
        *reinterpret_cast<void***>(rdi16 + rsi15 * 8) = edi10;
        if (0) {
            dx17 = 1;
            goto addr_10325_13;
        } else {
            if (0) {
                addr_1032a_15:
                rdx18 = poll_fdidx;
                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx18) + reinterpret_cast<uint64_t>(rbx13 * 4)) = ecx14;
                npoll_fds = ecx14 + 1;
            } else {
                dx17 = 4;
                goto addr_10325_13;
            }
        }
    }
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax12) + reinterpret_cast<uint64_t>(rbx13 * 4)) = reinterpret_cast<void**>(1);
    rax19 = fd_data;
    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax19) + reinterpret_cast<uint64_t>(rbx13 * 8)) = reinterpret_cast<void**>(1);
    goto rax7;
    addr_10325_13:
    *reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rdi16 + rsi15 * 8) + 4) = dx17;
    goto addr_1032a_15;
}

void** fdwatch_get_nfiles(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** eax7;
    void* rsp8;
    int32_t eax9;
    void** r12d10;
    void** rcx11;
    void** v12;
    void** v13;
    void** v14;
    int32_t eax15;
    uint64_t rbx16;
    void** r14_17;
    void** rax18;
    void** rbx19;
    void** rax20;
    void** eax21;
    int64_t rbp22;
    void** rax23;
    void** rbx24;
    void** rax25;
    void** rax26;
    int1_t zf27;
    int64_t rax28;
    int64_t rbp29;
    int64_t rcx30;
    void*** rcx31;
    int64_t rdx32;

    eax7 = fun_56d0(rdi, rsi, rdx, rcx);
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 16 - 8 + 8);
    nfiles = eax7;
    eax9 = fun_5640(7, rsp8, rdx, rcx);
    if (eax9) {
        addr_10105_2:
        r12d10 = nfiles;
    } else {
        rcx11 = v12;
        nfiles = rcx11;
        if (v13 == 0xffffffffffffffff) {
            v14 = reinterpret_cast<void**>(0x2000);
        } else {
            if (reinterpret_cast<unsigned char>(v13) > reinterpret_cast<unsigned char>(rcx11)) {
                v14 = v13;
            }
        }
        eax15 = fun_54c0(7, reinterpret_cast<int64_t>(rsp8) - 8 + 8, rdx);
        if (!eax15) 
            goto addr_10207_8; else 
            goto addr_10105_2;
    }
    addr_1010c_9:
    nwatches = 0;
    rbx16 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r12d10)));
    r14_17 = reinterpret_cast<void**>(rbx16 * 4);
    rax18 = fun_5430(r14_17, r14_17);
    fd_rw = rax18;
    rbx19 = reinterpret_cast<void**>(rbx16 << 3);
    rax20 = fun_5430(rbx19, rbx19);
    fd_data = rax20;
    eax21 = reinterpret_cast<void**>(0xffffffff);
    if (rax18 && rax20) {
        *reinterpret_cast<void***>(&rbp22) = r12d10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp22) + 4) = 0;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r12d10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r12d10 == 0))) {
            fun_5270(rax18, rax18);
        }
        rax23 = fun_5430(rbx19, rbx19);
        rbx24 = rax23;
        pollfds = rax23;
        rax25 = fun_5430(r14_17, r14_17);
        poll_fdidx = rax25;
        rax26 = fun_5430(r14_17, r14_17);
        poll_rfdidx = rax26;
        zf27 = (static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax26 == 0)) | reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(rax25 == 0)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(rbx24 == 0)))) == 0;
        eax21 = reinterpret_cast<void**>(0xffffffff);
        if (zf27) {
            eax21 = r12d10;
        }
        if (zf27 && !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r12d10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r12d10 == 0))) {
            fun_5270(rax25, rax25);
            *reinterpret_cast<uint32_t*>(&rax28) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp22)) & 7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
            if (reinterpret_cast<uint64_t>(rbp22 - 1) >= 7) {
                *reinterpret_cast<uint32_t*>(&rbp29) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp22)) & 0xfffffff8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp29) + 4) = 0;
                *reinterpret_cast<int32_t*>(&rcx30) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = 0;
                do {
                    *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rcx30 * 8)) = reinterpret_cast<void**>(0xffffffff);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rcx30 * 8) + 8) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rcx30 * 8) + 16) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rcx30 * 8) + 24) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rcx30 * 8) + 32) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rcx30 * 8) + 40) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rcx30 * 8) + 48) = -1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rcx30 * 8) + 56) = -1;
                    rcx30 = rcx30 + 8;
                } while (rbp29 != rcx30);
            } else {
                *reinterpret_cast<int32_t*>(&rcx30) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx30) + 4) = 0;
            }
            if (rax28) {
                rcx31 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx24) + reinterpret_cast<uint64_t>(rcx30 * 8));
                *reinterpret_cast<int32_t*>(&rdx32) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = 0;
                do {
                    rcx31[rdx32 * 8] = reinterpret_cast<void**>(0xffffffff);
                    ++rdx32;
                } while (rax28 != rdx32);
            }
            eax21 = r12d10;
        }
    }
    return eax21;
    addr_10207_8:
    r12d10 = v14;
    nfiles = r12d10;
    goto addr_1010c_9;
}

int64_t poll = 0x5506;

void** fun_5500(void** rdi, int64_t rsi, void** rdx) {
    goto poll;
}

int64_t __gmon_start__ = 0;

void fun_5003() {
    int64_t rax1;

    __asm__("cli ");
    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t __libc_start_main = 0;

void main(void** edi, void** rsi, void** rdx, void** rcx, void** r8, void** r9);

void fun_5733() {
    __asm__("cli ");
    __libc_start_main(main, __return_address(), reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __asm__("hlt ");
}

signed char __TMC_END__ = 0;

int64_t __dso_handle = 0x19398;

int64_t fun_57d3() {
    int1_t zf1;
    int64_t rax2;
    int1_t zf3;
    int64_t rdi4;
    int64_t rax5;

    __asm__("cli ");
    zf1 = __TMC_END__ == 0;
    if (!zf1) {
        return rax2;
    } else {
        zf3 = __cxa_finalize == 0;
        if (!zf3) {
            rdi4 = __dso_handle;
            fun_5720(rdi4);
        }
        rax5 = deregister_tm_clones(rdi4);
        __TMC_END__ = 1;
        return rax5;
    }
}

int64_t _ITM_registerTMCloneTable = 0;

int64_t fun_5813() {
    int64_t rax1;

    __asm__("cli ");
    rax1 = 0;
    if (1 || (rax1 = _ITM_registerTMCloneTable, rax1 == 0)) {
        return rax1;
    } else {
        goto rax1;
    }
}

void fun_11faf() {
    __asm__("cli ");
    return;
}

signed char debug = 0;

uint16_t port = 0;

void** dir = reinterpret_cast<void**>(0);

void** data_dir = reinterpret_cast<void**>(0);

signed char do_chroot = 0;

unsigned char no_log = 0;

unsigned char no_symlink_check = 0;

unsigned char do_vhost = 0;

unsigned char do_global_passwd = 0;

void** cgi_pattern = reinterpret_cast<void**>(0);

int32_t cgi_limit = 0;

void** url_pattern = reinterpret_cast<void**>(0);

unsigned char no_empty_referrers = 0;

void** local_pattern = reinterpret_cast<void**>(0);

void** throttlefile = reinterpret_cast<void**>(0);

void** hostname = reinterpret_cast<void**>(0);

void** logfile = reinterpret_cast<void**>(0);

void** pidfile = reinterpret_cast<void**>(0);

void** user = reinterpret_cast<void**>(0);

void** charset = reinterpret_cast<void**>(0);

void** p3p = reinterpret_cast<void**>(0);

int32_t max_age = 0;

int32_t numthrottles = 0;

void** maxthrottles = reinterpret_cast<void**>(0);

void*** stdout = reinterpret_cast<void***>(0);

void*** stdin = reinterpret_cast<void***>(0);

int32_t got_hup = 0;

int32_t got_usr1 = 0;

int32_t watchdog_flag = 0;

void handle_alrm();

void** JunkClientData = reinterpret_cast<void**>(0);

void idle();

void update_throttles();

void show_stats();

int32_t terminate = 0;

void main(void** edi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    void** rbp7;
    void** v8;
    void** rbx9;
    struct s4* rax10;
    void** rdi11;
    void** rsi12;
    void*** rsp13;
    void** rdx14;
    void** v15;
    void*** rax16;
    void** rdi17;
    void** rsi18;
    void* rsp19;
    int64_t rcx20;
    void** r14_21;
    void** rbx22;
    void* rsp23;
    void** rdi24;
    void** r13_25;
    void** rsi26;
    void** rax27;
    void* rsp28;
    void** rbp29;
    int64_t rdi30;
    void** rax31;
    void*** rax32;
    void** rbp33;
    void** r15_34;
    int64_t rdi35;
    void** rax36;
    void* rsp37;
    void** rbx38;
    void** v39;
    void** r12_40;
    void** rbx41;
    int32_t eax42;
    void* rsp43;
    int32_t eax44;
    void*** rsp45;
    void** eax46;
    int32_t eax47;
    void*** rsp48;
    int32_t eax49;
    int32_t eax50;
    int32_t eax51;
    void** rax52;
    void** v53;
    void** rbx54;
    void** rsi55;
    void** rax56;
    void* rsp57;
    void** rbp58;
    void** rbx59;
    void** rdx60;
    int64_t rax61;
    void* rsp62;
    void** v63;
    int32_t eax64;
    int32_t eax65;
    int32_t eax66;
    int32_t eax67;
    int32_t eax68;
    int32_t eax69;
    int32_t eax70;
    int32_t eax71;
    int32_t eax72;
    int32_t eax73;
    int32_t eax74;
    int32_t eax75;
    int32_t eax76;
    int32_t eax77;
    int32_t eax78;
    int32_t eax79;
    void*** rsp80;
    int32_t eax81;
    void** rax82;
    void** rax83;
    void* rax84;
    void* rsp85;
    void** rax86;
    void* rsp87;
    void** rbx88;
    uint64_t rax89;
    void** rax90;
    void* rsp91;
    int32_t eax92;
    void* rsp93;
    int32_t eax94;
    int32_t eax95;
    int32_t eax96;
    int32_t eax97;
    int32_t eax98;
    void* rsp99;
    int32_t eax100;
    int32_t eax101;
    int32_t eax102;
    int32_t eax103;
    int32_t eax104;
    int32_t eax105;
    int32_t eax106;
    int32_t eax107;
    void** rax108;
    int32_t eax109;
    void* rsp110;
    void** rax111;
    int32_t eax112;
    int32_t eax113;
    int32_t eax114;
    void* rsp115;
    void** rax116;
    int32_t eax117;
    int32_t eax118;
    int32_t eax119;
    void* rsp120;
    void** rax121;
    int32_t eax122;
    void* rsp123;
    void** rax124;
    int32_t eax125;
    void* rsp126;
    void** rax127;
    int32_t eax128;
    int32_t eax129;
    int32_t eax130;
    int32_t eax131;
    void** rax132;
    int32_t eax133;
    void** rax134;
    int32_t eax135;
    void** rax136;
    int32_t eax137;
    void** rax138;
    int32_t eax139;
    int32_t eax140;
    int32_t eax141;
    int32_t eax142;
    int32_t eax143;
    void** rax144;
    int32_t eax145;
    void** rax146;
    int32_t eax147;
    void** rax148;
    int32_t eax149;
    void** rax150;
    void** rax151;
    void* rax152;
    int64_t rax153;
    uint32_t* rsp154;
    uint32_t* rsp155;
    void** rdi156;
    int32_t eax157;
    int32_t eax158;
    int32_t eax159;
    void*** rax160;
    void** rsi161;
    void** rax162;
    void* rsp163;
    void** rdi164;
    void*** rax165;
    void** rdi166;
    int32_t eax167;
    void** rdi168;
    int32_t eax169;
    int32_t eax170;
    int64_t rdi171;
    int32_t eax172;
    void** rdi173;
    struct s0* rax174;
    void*** rax175;
    void** rdi176;
    void** rsi177;
    void** rax178;
    void* rsp179;
    void* rsp180;
    void** rdi181;
    int64_t rax182;
    void* rsp183;
    void** rbx184;
    void** v185;
    void** rax186;
    void** rax187;
    uint1_t zf188;
    int64_t rax189;
    void** rsi190;
    void** rdx191;
    int32_t eax192;
    void* rsp193;
    signed char v194;
    void** rbx195;
    void** rax196;
    int32_t eax197;
    void*** rax198;
    void** rdi199;
    void** rdx200;
    void** rsi201;
    void** rax202;
    void* rsp203;
    void** r15_204;
    void** r15_205;
    void** rax206;
    void** rdi207;
    void** rax208;
    int64_t rax209;
    void** rax210;
    void** rdi211;
    void*** rax212;
    void** rax213;
    void* rdx214;
    int64_t v215;
    int64_t rax216;
    uint64_t rax217;
    uint64_t rdx218;
    void*** rax219;
    void** rdi220;
    int32_t eax221;
    void*** rax222;
    void*** rax223;
    void** v224;
    uint32_t* rax225;
    void* rsp226;
    uint32_t* r14_227;
    uint32_t r15d228;
    int32_t eax229;
    void* rbx230;
    void** rax231;
    void** ecx232;
    void*** rax233;
    void*** rax234;
    void*** rax235;
    void** rdi236;
    void** rsi237;
    void** rsi238;
    void** rdi239;
    int64_t rax240;
    int1_t zf241;
    void** rdi242;
    int32_t eax243;
    int32_t eax244;
    uint32_t* rsp245;
    void** r14_246;
    int32_t eax247;
    void** r13_248;
    void** rax249;
    int32_t eax250;
    void* rsp251;
    void** rbx252;
    void** rax253;
    void*** rax254;
    void** rdi255;
    int32_t eax256;
    void** rdi257;
    void** rax258;
    void* rsp259;
    void** rax260;
    int1_t zf261;
    void*** rax262;
    void** rdi263;
    void* rsp264;
    void*** rax265;
    void** rdi266;
    void*** rax267;
    void** rdi268;
    int32_t eax269;
    void** rdi270;
    void** rax271;
    void* rsp272;
    void** eax273;
    void* rsp274;
    void** rdi275;
    void** rsi276;
    void** rdx277;
    void** rcx278;
    void** r8_279;
    int64_t r11_280;
    void** r10_281;
    int64_t rax282;
    int64_t rbx283;
    int64_t v284;
    void** v285;
    void** v286;
    int64_t v287;
    void** v288;
    void** v289;
    int64_t v290;
    void** v291;
    void** v292;
    void** v293;
    void** rax294;
    void* rsp295;
    void** rax296;
    void** rax297;
    int1_t less_or_equal298;
    void** rax299;
    void** rax300;
    void** rax301;
    int32_t eax302;
    int64_t rbx303;
    void*** rax304;
    void** rdi305;
    void** rax306;
    int32_t eax307;
    int64_t rdi308;
    int32_t eax309;
    void** rdi310;
    void** rsi311;
    int32_t eax312;
    void* rsp313;
    void*** rsi314;
    void** rcx315;
    void** rax316;
    void** edi317;
    void** edi318;
    int1_t zf319;
    int1_t less_or_equal320;
    int1_t zf321;
    int1_t zf322;
    int1_t zf323;
    void** rdi324;
    int32_t eax325;
    void** rdi326;
    void** rax327;
    void* rsp328;
    int32_t eax329;
    void** rdi330;
    void** rdi331;
    void** rax332;
    void** eax333;
    void* rsp334;
    uint32_t* rax335;
    void** rax336;
    void** rax337;
    uint32_t eax338;
    void** rax339;
    uint32_t* rax340;
    void** rax341;
    void** rax342;
    int64_t rdi343;
    void** rcx344;
    void** rax345;
    int1_t zf346;
    void** edi347;
    void* rsp348;
    void** v349;
    void** rdx350;
    void** rdi351;
    void** rax352;
    void** rbx353;
    int64_t rcx354;
    void* rcx355;
    int64_t rcx356;
    int64_t rcx357;
    void** rax358;
    void* v359;
    void** rax360;
    void** edi361;
    void** rcx362;
    void** rax363;
    int64_t rbx364;
    uint64_t rbx365;
    int64_t rax366;
    uint32_t* rax367;
    int64_t rax368;
    int64_t rdi369;
    void** rdx370;
    void** rsi371;
    void** rax372;
    void** rdi373;
    uint32_t* rax374;
    void** v375;
    int32_t eax376;
    int32_t eax377;
    int1_t less_or_equal378;
    int32_t eax379;
    void** rax380;
    uint32_t v381;
    void** edi382;
    void** rax383;
    void** rdi384;
    int64_t rbp385;
    void* rbp386;
    int64_t rbp387;
    int64_t rcx388;
    int64_t rbx389;
    void** rax390;
    void** rdi391;
    void** rsi392;
    int32_t eax393;
    int64_t rax394;
    void** rdx395;
    void* rax396;
    int64_t rsi397;
    uint64_t rsi398;
    void** rax399;
    void** rsi400;
    void** rdi401;
    void** rax402;
    void** rsi403;
    void** rdi404;
    void** rdx405;
    int1_t zf406;
    int1_t zf407;
    void** edi408;
    void** edi409;
    uint32_t eax410;
    void** rax411;
    int32_t eax412;
    void** rax413;
    uint32_t eax414;
    void** rax415;
    int32_t eax416;
    int1_t zf417;
    int1_t less_or_equal418;
    int64_t rdi419;
    int32_t eax420;
    int1_t zf421;

    rbp7 = edi;
    *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
    v8 = rsi;
    rbx9 = *reinterpret_cast<void***>(rsi);
    argv0 = rbx9;
    rax10 = fun_5250(rbx9, 47, rdx, rcx);
    rdi11 = reinterpret_cast<void**>(&rax10->f1);
    if (!rax10) {
        rdi11 = rbx9;
    }
    *reinterpret_cast<int32_t*>(&rsi12) = 9;
    *reinterpret_cast<int32_t*>(&rsi12 + 4) = 0;
    fun_55f0(rdi11, 9, 24);
    rsp13 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 0x3bd8 - 8 + 8 - 8 + 8);
    debug = 0;
    port = 80;
    dir = reinterpret_cast<void**>(0);
    data_dir = reinterpret_cast<void**>(0);
    do_chroot = 0;
    no_log = 0;
    no_symlink_check = 0;
    do_vhost = 0;
    do_global_passwd = 0;
    cgi_pattern = reinterpret_cast<void**>(0);
    cgi_limit = 0;
    url_pattern = reinterpret_cast<void**>(0);
    no_empty_referrers = 0;
    local_pattern = reinterpret_cast<void**>(0);
    throttlefile = reinterpret_cast<void**>(0);
    hostname = reinterpret_cast<void**>(0);
    logfile = reinterpret_cast<void**>(0);
    pidfile = reinterpret_cast<void**>(0);
    user = reinterpret_cast<void**>("nobody");
    charset = reinterpret_cast<void**>("UTF-8");
    p3p = reinterpret_cast<void**>(0x13553);
    max_age = -1;
    rdx14 = reinterpret_cast<void**>(1);
    *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
    v15 = rbp7;
    if (reinterpret_cast<signed char>(rbp7) < reinterpret_cast<signed char>(2)) {
        addr_64bc_4:
        if (rdx14 != v15) {
            rax16 = stderr;
            rdi17 = *rax16;
            rdx14 = argv0;
            rsi18 = reinterpret_cast<void**>("usage:  %s [-C configfile] [-p port] [-d dir] [-r|-nor] [-dd data_dir] [-s|-nos] [-v|-nov] [-g|-nog] [-u user] [-c cgipat] [-t throttles] [-h host] [-l logfile] [-i pidfile] [-T charset] [-P P3P] [-M maxage] [-V] [-D]\n");
        } else {
            fun_53e0(rdi11, rsi12);
            rsp19 = reinterpret_cast<void*>(rsp13 - 8 + 8);
            __asm__("pxor xmm0, xmm0");
            __asm__("movdqa [rsp+0x140], xmm0");
            __asm__("movdqa [rsp+0x150], xmm0");
            __asm__("movdqa [rsp+0x160], xmm0");
            *reinterpret_cast<uint32_t*>(&rcx20) = port;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&r14_21) = 0;
            rbx22 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp19) + 0x2850);
            fun_5230(rbx22, 10, "%d", rcx20);
            rsp23 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp19) - 8 + 8);
            rdi24 = hostname;
            r13_25 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp23) + 0x140);
            rcx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp23) + 32);
            rsi26 = rbx22;
            rdx14 = r13_25;
            rax27 = fun_5660(rdi24, rsi26, rdx14, rcx);
            rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp23) - 8 + 8);
            if (rax27) {
                rbp29 = hostname;
                *reinterpret_cast<void***>(&rdi30) = rax27;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = 0;
                rax31 = fun_5240(rdi30, rsi26, rdx14, rcx);
                fun_5480(2, "getaddrinfo %.80s - %.80s", 2, "getaddrinfo %.80s - %.80s");
                rax32 = stderr;
                rbp33 = *rax32;
                r14_21 = argv0;
                r15_34 = hostname;
                *reinterpret_cast<void***>(&rdi35) = rax27;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = 0;
                rax36 = fun_5240(rdi35, "getaddrinfo %.80s - %.80s", rbp29, rax31);
                rsi26 = reinterpret_cast<void**>("%s: getaddrinfo %s - %s\n");
                rdx14 = r14_21;
                rcx = r15_34;
                r8 = rax36;
                fun_53a0(rbp33, "%s: getaddrinfo %s - %s\n", rdx14, rcx, r8, r9, v8, v15);
                fun_5620();
                rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8);
                goto addr_7d5f_8;
            }
            rbx38 = v39;
            if (!rbx38) 
                goto addr_660b_10;
            rbp7 = reinterpret_cast<void**>(0);
            *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
            rcx = rbx38;
            rax27 = reinterpret_cast<void**>(0);
            *reinterpret_cast<int32_t*>(&rax27 + 4) = 0;
            do {
                rdx14 = *reinterpret_cast<void***>(rcx + 4);
                *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
                if (rdx14 == 2) {
                    if (!rbp7) {
                        rbp7 = rcx;
                    }
                } else {
                    if (reinterpret_cast<int1_t>(rdx14 == 10)) {
                        if (!rax27) {
                            rax27 = rcx;
                        }
                    }
                }
                rcx = *reinterpret_cast<void***>(rcx + 40);
            } while (rcx);
            *reinterpret_cast<uint32_t*>(&r14_21) = 0;
            if (!rax27) 
                goto addr_6606_21; else 
                goto addr_659e_22;
        }
    } else {
        rbp7 = reinterpret_cast<void**>(1);
        *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
        r13_25 = reinterpret_cast<void**>(" \t\n\r");
        r15_34 = reinterpret_cast<void**>("debug");
        r12_40 = reinterpret_cast<void**>(0x100002600);
        do {
            rcx = v8;
            rbx41 = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rbp7) * 8);
            if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(rbx41) == 45)) 
                goto addr_64ba_25;
            eax42 = fun_5370(rbx41, "-V");
            rsp43 = reinterpret_cast<void*>(rsp13 - 8 + 8);
            if (!eax42) 
                goto addr_7c82_27;
            eax44 = fun_5370(rbx41, "-C");
            rsp45 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp43) - 8 + 8);
            if (eax44 || (eax46 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), reinterpret_cast<signed char>(eax46) >= reinterpret_cast<signed char>(v15))) {
                eax47 = fun_5370(rbx41, "-p");
                rsp48 = rsp45 - 8 + 8;
                if (eax47 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                    rdi11 = rbx41;
                    rsi12 = reinterpret_cast<void**>("-d");
                    eax49 = fun_5370(rdi11, "-d");
                    rsp13 = rsp48 - 8 + 8;
                    if (eax49 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                        rdi11 = rbx41;
                        rsi12 = reinterpret_cast<void**>("-r");
                        eax50 = fun_5370(rdi11, "-r");
                        rsp13 = rsp13 - 8 + 8;
                        if (!eax50) {
                            do_chroot = 1;
                            goto addr_6207_33;
                        }
                        rdi11 = rbx41;
                        rsi12 = reinterpret_cast<void**>("-nor");
                        eax51 = fun_5370(rdi11, "-nor");
                        rsp13 = rsp13 - 8 + 8;
                        if (eax51) 
                            goto addr_61ca_35;
                    } else {
                        rcx = v8;
                        dir = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                        continue;
                    }
                } else {
                    rcx = v8;
                    rdi11 = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                    *reinterpret_cast<int32_t*>(&rsi12) = 0;
                    *reinterpret_cast<int32_t*>(&rsi12 + 4) = 0;
                    rax52 = fun_53c0(rdi11);
                    rsp13 = rsp48 - 8 + 8;
                    rdx14 = rdx14;
                    port = *reinterpret_cast<uint16_t*>(&rax52);
                    continue;
                }
            } else {
                (&v53)[4] = eax46;
                rcx = v8;
                rbx54 = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(eax46) * 8);
                rsi55 = reinterpret_cast<void**>("r");
                rax56 = fun_5590(rbx54, "r");
                rsp57 = reinterpret_cast<void*>(rsp45 - 8 + 8);
                if (!rax56) 
                    goto addr_7de6_39;
                rbp58 = rax56;
                rbx59 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp57) + 0x140);
                *reinterpret_cast<int32_t*>(&rsi12) = 0x2710;
                *reinterpret_cast<int32_t*>(&rsi12 + 4) = 0;
                rdx60 = rax56;
                rax61 = fun_5350(rbx59, 0x2710, rdx60);
                rsp62 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp57) - 8 + 8);
                v63 = rbp58;
                if (rax61) 
                    goto addr_5a62_41; else 
                    goto addr_5a2d_42;
            }
            do_chroot = 0;
            goto addr_597b_44;
            addr_61ca_35:
            rdi11 = rbx41;
            rsi12 = reinterpret_cast<void**>("-dd");
            eax64 = fun_5370(rdi11, "-dd");
            rsp13 = rsp13 - 8 + 8;
            if (eax64 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                rdi11 = rbx41;
                rsi12 = reinterpret_cast<void**>("-s");
                eax65 = fun_5370(rdi11, "-s");
                rsp13 = rsp13 - 8 + 8;
                if (!eax65) {
                    addr_597b_44:
                    no_symlink_check = 0;
                } else {
                    rdi11 = rbx41;
                    rsi12 = reinterpret_cast<void**>("-nos");
                    eax66 = fun_5370(rdi11, "-nos");
                    rsp13 = rsp13 - 8 + 8;
                    if (!eax66) {
                        addr_6207_33:
                        no_symlink_check = 1;
                    } else {
                        rdi11 = rbx41;
                        rsi12 = reinterpret_cast<void**>("-u");
                        eax67 = fun_5370(rdi11, "-u");
                        rsp13 = rsp13 - 8 + 8;
                        if (eax67 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                            rdi11 = rbx41;
                            rsi12 = reinterpret_cast<void**>("-c");
                            eax68 = fun_5370(rdi11, "-c");
                            rsp13 = rsp13 - 8 + 8;
                            if (eax68 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                                rdi11 = rbx41;
                                rsi12 = reinterpret_cast<void**>("-t");
                                eax69 = fun_5370(rdi11, "-t");
                                rsp13 = rsp13 - 8 + 8;
                                if (eax69 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                                    rdi11 = rbx41;
                                    rsi12 = reinterpret_cast<void**>("-h");
                                    eax70 = fun_5370(rdi11, "-h");
                                    rsp13 = rsp13 - 8 + 8;
                                    if (eax70 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                                        rdi11 = rbx41;
                                        rsi12 = reinterpret_cast<void**>("-l");
                                        eax71 = fun_5370(rdi11, "-l");
                                        rsp13 = rsp13 - 8 + 8;
                                        if (eax71 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                                            rdi11 = rbx41;
                                            rsi12 = reinterpret_cast<void**>("-v");
                                            eax72 = fun_5370(rdi11, "-v");
                                            rsp13 = rsp13 - 8 + 8;
                                            if (!eax72) {
                                                do_vhost = 1;
                                            } else {
                                                rdi11 = rbx41;
                                                rsi12 = reinterpret_cast<void**>("-nov");
                                                eax73 = fun_5370(rdi11, "-nov");
                                                rsp13 = rsp13 - 8 + 8;
                                                if (!eax73) {
                                                    do_vhost = 0;
                                                } else {
                                                    rdi11 = rbx41;
                                                    rsi12 = reinterpret_cast<void**>("-g");
                                                    eax74 = fun_5370(rdi11, "-g");
                                                    rsp13 = rsp13 - 8 + 8;
                                                    if (!eax74) {
                                                        do_global_passwd = 1;
                                                    } else {
                                                        rdi11 = rbx41;
                                                        rsi12 = reinterpret_cast<void**>("-nog");
                                                        eax75 = fun_5370(rdi11, "-nog");
                                                        rsp13 = rsp13 - 8 + 8;
                                                        if (!eax75) {
                                                            do_global_passwd = 0;
                                                        } else {
                                                            rdi11 = rbx41;
                                                            rsi12 = reinterpret_cast<void**>("-i");
                                                            eax76 = fun_5370(rdi11, "-i");
                                                            rsp13 = rsp13 - 8 + 8;
                                                            if (eax76 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                                                                rdi11 = rbx41;
                                                                rsi12 = reinterpret_cast<void**>("-T");
                                                                eax77 = fun_5370(rdi11, "-T");
                                                                rsp13 = rsp13 - 8 + 8;
                                                                if (eax77 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                                                                    rdi11 = rbx41;
                                                                    rsi12 = reinterpret_cast<void**>("-P");
                                                                    eax78 = fun_5370(rdi11, "-P");
                                                                    rsp13 = rsp13 - 8 + 8;
                                                                    if (eax78 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                                                                        eax79 = fun_5370(rbx41, "-M");
                                                                        rsp80 = rsp13 - 8 + 8;
                                                                        if (eax79 || (rdx14 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<uint64_t>(rbp7 + 1))), *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, reinterpret_cast<signed char>(rdx14) >= reinterpret_cast<signed char>(v15))) {
                                                                            rdi11 = rbx41;
                                                                            rsi12 = reinterpret_cast<void**>("-D");
                                                                            eax81 = fun_5370(rdi11, "-D");
                                                                            rsp13 = rsp80 - 8 + 8;
                                                                            if (eax81) 
                                                                                goto addr_7e6c_65;
                                                                            debug = 1;
                                                                        } else {
                                                                            rcx = v8;
                                                                            rdi11 = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                                                                            *reinterpret_cast<int32_t*>(&rsi12) = 0;
                                                                            *reinterpret_cast<int32_t*>(&rsi12 + 4) = 0;
                                                                            rax82 = fun_53c0(rdi11);
                                                                            rsp13 = rsp80 - 8 + 8;
                                                                            rdx14 = rdx14;
                                                                            max_age = *reinterpret_cast<int32_t*>(&rax82);
                                                                            continue;
                                                                        }
                                                                    } else {
                                                                        rcx = v8;
                                                                        p3p = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                                                                        continue;
                                                                    }
                                                                } else {
                                                                    rcx = v8;
                                                                    charset = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                                                                    continue;
                                                                }
                                                            } else {
                                                                rcx = v8;
                                                                pidfile = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                                                                continue;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            rcx = v8;
                                            logfile = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                                            continue;
                                        }
                                    } else {
                                        rcx = v8;
                                        hostname = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                                        continue;
                                    }
                                } else {
                                    rcx = v8;
                                    throttlefile = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                                    continue;
                                }
                            } else {
                                rcx = v8;
                                cgi_pattern = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                                continue;
                            }
                        } else {
                            rcx = v8;
                            user = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                            continue;
                        }
                    }
                }
            } else {
                rcx = v8;
                data_dir = *reinterpret_cast<void***>(rcx + reinterpret_cast<int32_t>(rdx14) * 8);
                continue;
            }
            rdx14 = rbp7;
            continue;
            do {
                addr_5a62_41:
                rax83 = fun_5220(rbx59, 35, rdx60);
                if (rax83) {
                    *reinterpret_cast<void***>(rax83) = reinterpret_cast<void**>(0);
                }
                rax84 = fun_52f0(rbx59, " \t\n\r", rdx60);
                rsp85 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp62) - 8 + 8 - 8 + 8);
                if (*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp85) + reinterpret_cast<uint64_t>(rax84) + 0x140)) {
                    rbp7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp85) + reinterpret_cast<uint64_t>(rax84) + 0x140);
                    do {
                        rax86 = fun_5310(rbp7, " \t\n\r", rdx60);
                        rsp87 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp85) - 8 + 8);
                        rbx88 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax86) + reinterpret_cast<unsigned char>(rbp7));
                        while ((*reinterpret_cast<uint32_t*>(&rax89) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx88)), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax89) + 4) = 0, rax89 <= 32) && static_cast<int1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(0x100002600) >> rax89))) {
                            *reinterpret_cast<void***>(rbx88) = reinterpret_cast<void**>(0);
                            ++rbx88;
                        }
                        rax90 = fun_5220(rbp7, 61, rdx60);
                        rsp91 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp87) - 8 + 8);
                        if (!rax90) {
                            eax92 = fun_5050(rbp7, "debug", rdx60);
                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp91) - 8 + 8);
                            if (!eax92) {
                                debug = 1;
                                continue;
                            } else {
                                eax94 = fun_5050(rbp7, "port", rdx60);
                                rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                if (!eax94) 
                                    goto addr_6fe8_88;
                                eax95 = fun_5050(rbp7, "dir", rdx60);
                                rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                if (!eax95) 
                                    goto addr_6fe8_88;
                                eax96 = fun_5050(rbp7, "chroot", rdx60);
                                rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                if (eax96) 
                                    goto addr_5ca8_91;
                            }
                        } else {
                            r14_21 = rax90;
                            *reinterpret_cast<void***>(rax90) = reinterpret_cast<void**>(0);
                            eax97 = fun_5050(rbp7, "debug", rdx60);
                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp91) - 8 + 8);
                            if (!eax97) 
                                goto addr_6f6b_93;
                            ++r14_21;
                            eax98 = fun_5050(rbp7, "port", rdx60);
                            rsp99 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                            if (!eax98) 
                                goto addr_5aa0_95; else 
                                goto addr_5b4a_96;
                        }
                        do_chroot = 1;
                        no_symlink_check = 1;
                        continue;
                        addr_5ca8_91:
                        eax100 = fun_5050(rbp7, "nochroot", rdx60);
                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                        if (!eax100) {
                            do_chroot = 0;
                            goto addr_5f45_99;
                        }
                        eax101 = fun_5050(rbp7, "data_dir", rdx60);
                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                        if (!eax101) 
                            goto addr_6fe8_88;
                        eax102 = fun_5050(rbp7, "nosymlinkcheck", rdx60);
                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                        if (eax102) 
                            goto addr_5ced_102;
                        no_symlink_check = 1;
                        continue;
                        addr_5ced_102:
                        eax103 = fun_5050(rbp7, "symlinkcheck", rdx60);
                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                        if (!eax103) {
                            addr_5f45_99:
                            no_symlink_check = 0;
                            continue;
                        } else {
                            eax104 = fun_5050(rbp7, "user", rdx60);
                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                            if (!eax104) 
                                goto addr_6fe8_88;
                            eax105 = fun_5050(rbp7, "cgipat", rdx60);
                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                            if (!eax105) 
                                goto addr_6fe8_88;
                            eax106 = fun_5050(rbp7, "cgilimit", rdx60);
                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                            if (!eax106) 
                                goto addr_6fe8_88;
                            eax107 = fun_5050(rbp7, "urlpat", rdx60);
                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                            if (!eax107) 
                                goto addr_6fe8_88;
                            *reinterpret_cast<uint32_t*>(&r14_21) = 0;
                            *reinterpret_cast<int32_t*>(&r14_21 + 4) = 0;
                            goto addr_5d63_109;
                        }
                        addr_5aa0_95:
                        *reinterpret_cast<int32_t*>(&rdx60) = 10;
                        *reinterpret_cast<int32_t*>(&rdx60 + 4) = 0;
                        rax108 = fun_53c0(r14_21);
                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp99) - 8 + 8);
                        port = *reinterpret_cast<uint16_t*>(&rax108);
                        continue;
                        addr_5b4a_96:
                        eax109 = fun_5050(rbp7, "dir", rdx60);
                        rsp110 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp99) - 8 + 8);
                        if (!eax109) {
                            rax111 = fun_5670(r14_21, "dir", rdx60, rcx, r8, r9);
                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp110) - 8 + 8);
                            if (!rax111) 
                                goto addr_706f_111;
                            dir = rax111;
                            continue;
                        } else {
                            eax112 = fun_5050(rbp7, "chroot", rdx60);
                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp110) - 8 + 8);
                            if (!eax112) 
                                goto addr_6f6b_93;
                            eax113 = fun_5050(rbp7, "nochroot", rdx60);
                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                            if (!eax113) 
                                goto addr_6f6b_93;
                            eax114 = fun_5050(rbp7, "data_dir", rdx60);
                            rsp115 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                            if (eax114) 
                                goto addr_5ba6_116;
                        }
                        rax116 = fun_5670(r14_21, "data_dir", rdx60, rcx, r8, r9);
                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp115) - 8 + 8);
                        if (!rax116) 
                            goto addr_706f_111;
                        data_dir = rax116;
                        continue;
                        addr_5ba6_116:
                        eax117 = fun_5050(rbp7, "nosymlinkcheck", rdx60);
                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp115) - 8 + 8);
                        if (!eax117) 
                            goto addr_6f6b_93;
                        eax118 = fun_5050(rbp7, "symlinkcheck", rdx60);
                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                        if (!eax118) 
                            goto addr_6f6b_93;
                        eax119 = fun_5050(rbp7, "user", rdx60);
                        rsp120 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                        if (eax119) 
                            goto addr_5beb_121;
                        rax121 = fun_5670(r14_21, "user", rdx60, rcx, r8, r9);
                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp120) - 8 + 8);
                        if (!rax121) 
                            goto addr_706f_111;
                        user = rax121;
                        continue;
                        addr_5beb_121:
                        eax122 = fun_5050(rbp7, "cgipat", rdx60);
                        rsp123 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp120) - 8 + 8);
                        if (!eax122) {
                            rax124 = fun_5670(r14_21, "cgipat", rdx60, rcx, r8, r9);
                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp123) - 8 + 8);
                            if (!rax124) 
                                goto addr_706f_111;
                            cgi_pattern = rax124;
                        } else {
                            eax125 = fun_5050(rbp7, "cgilimit", rdx60);
                            rsp126 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp123) - 8 + 8);
                            if (!eax125) {
                                *reinterpret_cast<int32_t*>(&rdx60) = 10;
                                *reinterpret_cast<int32_t*>(&rdx60 + 4) = 0;
                                rax127 = fun_53c0(r14_21);
                                rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp126) - 8 + 8);
                                cgi_limit = *reinterpret_cast<int32_t*>(&rax127);
                            } else {
                                eax128 = fun_5050(rbp7, "urlpat", rdx60);
                                rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp126) - 8 + 8);
                                if (eax128) {
                                    addr_5d63_109:
                                    eax129 = fun_5050(rbp7, "noemptyreferers", rdx60);
                                    rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                    if (!eax129 || (eax130 = fun_5050(rbp7, "noemptyreferrers", rdx60), rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8), eax130 == 0)) {
                                        if (r14_21) 
                                            goto addr_6f6b_93;
                                        no_empty_referrers = 1;
                                    } else {
                                        eax131 = fun_5050(rbp7, "localpat", rdx60);
                                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                        if (!eax131) {
                                            if (!r14_21) 
                                                goto addr_6fe8_88;
                                            rax132 = fun_5670(r14_21, "localpat", rdx60, rcx, r8, r9);
                                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                            if (!rax132) 
                                                goto addr_706f_111;
                                            local_pattern = rax132;
                                        } else {
                                            eax133 = fun_5050(rbp7, "throttles", rdx60);
                                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                            if (!eax133) {
                                                if (!r14_21) 
                                                    goto addr_6fe8_88;
                                                rax134 = fun_5670(r14_21, "throttles", rdx60, rcx, r8, r9);
                                                rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                if (!rax134) 
                                                    goto addr_706f_111;
                                                throttlefile = rax134;
                                            } else {
                                                eax135 = fun_5050(rbp7, "host", rdx60);
                                                rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                if (!eax135) {
                                                    if (!r14_21) 
                                                        goto addr_6fe8_88;
                                                    rax136 = fun_5670(r14_21, "host", rdx60, rcx, r8, r9);
                                                    rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                    if (!rax136) 
                                                        goto addr_706f_111;
                                                    hostname = rax136;
                                                } else {
                                                    eax137 = fun_5050(rbp7, "logfile", rdx60);
                                                    rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                    if (!eax137) {
                                                        if (!r14_21) 
                                                            goto addr_6fe8_88;
                                                        rax138 = fun_5670(r14_21, "logfile", rdx60, rcx, r8, r9);
                                                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                        if (!rax138) 
                                                            goto addr_706f_111;
                                                        logfile = rax138;
                                                    } else {
                                                        eax139 = fun_5050(rbp7, "vhost", rdx60);
                                                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                        if (!eax139) {
                                                            if (r14_21) 
                                                                goto addr_6f6b_93;
                                                            do_vhost = 1;
                                                        } else {
                                                            eax140 = fun_5050(rbp7, "novhost", rdx60);
                                                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                            if (!eax140) {
                                                                if (r14_21) 
                                                                    goto addr_6f6b_93;
                                                                do_vhost = 0;
                                                            } else {
                                                                eax141 = fun_5050(rbp7, "globalpasswd", rdx60);
                                                                rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                                if (!eax141) {
                                                                    if (r14_21) 
                                                                        goto addr_6f6b_93;
                                                                    do_global_passwd = 1;
                                                                } else {
                                                                    eax142 = fun_5050(rbp7, "noglobalpasswd", rdx60);
                                                                    rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                                    if (!eax142) {
                                                                        if (r14_21) 
                                                                            goto addr_6f6b_93;
                                                                        do_global_passwd = 0;
                                                                    } else {
                                                                        eax143 = fun_5050(rbp7, "pidfile", rdx60);
                                                                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                                        if (!eax143) {
                                                                            if (!r14_21) 
                                                                                goto addr_6fe8_88;
                                                                            rax144 = fun_5670(r14_21, "pidfile", rdx60, rcx, r8, r9);
                                                                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                                            if (!rax144) 
                                                                                goto addr_706f_111;
                                                                            pidfile = rax144;
                                                                        } else {
                                                                            eax145 = fun_5050(rbp7, "charset", rdx60);
                                                                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                                            if (!eax145) {
                                                                                if (!r14_21) 
                                                                                    goto addr_6fe8_88;
                                                                                rax146 = fun_5670(r14_21, "charset", rdx60, rcx, r8, r9);
                                                                                rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                                                if (!rax146) 
                                                                                    goto addr_706f_111;
                                                                                charset = rax146;
                                                                            } else {
                                                                                eax147 = fun_5050(rbp7, "p3p", rdx60);
                                                                                rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                                                if (!eax147) {
                                                                                    if (!r14_21) 
                                                                                        goto addr_6fe8_88;
                                                                                    rax148 = fun_5670(r14_21, "p3p", rdx60, rcx, r8, r9);
                                                                                    rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                                                    if (!rax148) 
                                                                                        goto addr_706f_111;
                                                                                    p3p = rax148;
                                                                                } else {
                                                                                    eax149 = fun_5050(rbp7, "max_age", rdx60);
                                                                                    rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                                                    if (eax149) 
                                                                                        goto addr_7e2c_172;
                                                                                    if (!r14_21) 
                                                                                        goto addr_6fe8_88;
                                                                                    *reinterpret_cast<int32_t*>(&rdx60) = 10;
                                                                                    *reinterpret_cast<int32_t*>(&rdx60 + 4) = 0;
                                                                                    rax150 = fun_53c0(r14_21);
                                                                                    rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                                                                    max_age = *reinterpret_cast<int32_t*>(&rax150);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    rax151 = fun_5670(r14_21, "urlpat", rdx60, rcx, r8, r9);
                                    rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                    if (!rax151) 
                                        goto addr_706f_111;
                                    url_pattern = rax151;
                                }
                            }
                        }
                        rax152 = fun_52f0(rbx88, " \t\n\r", rdx60);
                        rsp85 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                        rbp7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx88) + reinterpret_cast<uint64_t>(rax152));
                    } while (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rbx88) + reinterpret_cast<uint64_t>(rax152)));
                }
                rbx59 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp85) + 0x140);
                *reinterpret_cast<int32_t*>(&rsi12) = 0x2710;
                *reinterpret_cast<int32_t*>(&rsi12 + 4) = 0;
                rbp58 = v63;
                rdx60 = rbp58;
                rax153 = fun_5350(rbx59, 0x2710, rdx60);
                rsp62 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp85) - 8 + 8);
            } while (rax153);
            addr_5a2d_42:
            rdi11 = rbp58;
            fun_5190(rdi11, 0x2710, rdx60);
            rsp13 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp62) - 8 + 8);
            rdx14 = (&v53)[4];
            ++rdx14;
            *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
            rbp7 = rdx14;
            *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
        } while (reinterpret_cast<signed char>(rdx14) < reinterpret_cast<signed char>(v15));
        goto addr_64bc_4;
    }
    addr_709a_180:
    fun_53a0(rdi17, rsi18, rdx14, rcx, r8, r9, v8, v15);
    fun_5620();
    rsp154 = reinterpret_cast<uint32_t*>(rsp13 - 8 + 8 - 8 + 8);
    goto addr_70ab_181;
    addr_6606_21:
    if (rbp7) {
        r8 = *reinterpret_cast<void***>(rbp7 + 16);
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        if (reinterpret_cast<unsigned char>(r8) < reinterpret_cast<unsigned char>(0x81)) {
            __asm__("pxor xmm0, xmm0");
            __asm__("movdqa [rsp+0x130], xmm0");
            __asm__("movdqa [rsp+0x120], xmm0");
            __asm__("movdqa [rsp+0x110], xmm0");
            __asm__("movdqa [rsp+0x100], xmm0");
            __asm__("movdqa [rsp+0xf0], xmm0");
            __asm__("movdqa [rsp+0xe0], xmm0");
            __asm__("movdqa [rsp+0xd0], xmm0");
            __asm__("movdqa [rsp+0xc0], xmm0");
            rsi26 = *reinterpret_cast<void***>(rbp7 + 24);
            rdx14 = *reinterpret_cast<void***>(rbp7 + 16);
            *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
            fun_5540(reinterpret_cast<int64_t>(rsp28) + 0xc0, rsi26, rdx14);
            fun_5700(rbx38, rsi26, rdx14, rcx);
            rsp155 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8 - 8 + 8);
            (&v53)[4] = reinterpret_cast<void**>(0);
            goto addr_66d3_184;
        }
    } else {
        addr_660b_10:
        fun_5700(rbx38, rsi26, rdx14, rcx);
        rsp155 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
        *reinterpret_cast<signed char*>(&rax27) = 1;
        (&v53)[4] = rax27;
        if (*reinterpret_cast<uint32_t*>(&r14_21)) {
            addr_66d3_184:
            numthrottles = 0;
            maxthrottles = reinterpret_cast<void**>(0);
            throttles = reinterpret_cast<void**>(0);
            rdi156 = throttlefile;
            if (!rdi156) {
                addr_675d_185:
                eax157 = fun_51f0();
                rsp37 = reinterpret_cast<void*>(rsp155 - 2 + 2);
                r12_40 = reinterpret_cast<void**>(0x7fff);
                *reinterpret_cast<int32_t*>(&r15_34) = 0x7fff;
                if (eax157) {
                    addr_678f_186:
                    rbp7 = logfile;
                    if (!rbp7) {
                        addr_7d5f_8:
                        rbp7 = reinterpret_cast<void**>(0);
                        *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
                    } else {
                        rsi26 = reinterpret_cast<void**>("/dev/null");
                        eax158 = fun_5370(rbp7, "/dev/null", rbp7, "/dev/null");
                        rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8);
                        if (!eax158) {
                            no_log = 1;
                            rbp7 = reinterpret_cast<void**>(0);
                            *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
                        } else {
                            rsi26 = reinterpret_cast<void**>("-");
                            eax159 = fun_5370(rbp7, "-", rbp7, "-");
                            rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8);
                            if (!eax159) {
                                rax160 = stdout;
                                rbp7 = *rax160;
                            } else {
                                rsi161 = reinterpret_cast<void**>("a");
                                rax162 = fun_5590(rbp7, "a", rbp7, "a");
                                rsp163 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8);
                                rdx14 = logfile;
                                if (!rax162) {
                                    rsi55 = reinterpret_cast<void**>("%.80s - %m");
                                    fun_5480(2, "%.80s - %m", 2, "%.80s - %m");
                                    rsp57 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp163) - 8 + 8);
                                    rdi164 = logfile;
                                    goto addr_68b1_193;
                                } else {
                                    rbp7 = rax162;
                                    if (*reinterpret_cast<void***>(rdx14) != 47) {
                                        fun_5480(4, "logfile is not an absolute path, you may not be able to re-open it", 4, "logfile is not an absolute path, you may not be able to re-open it");
                                        rax165 = stderr;
                                        rdi166 = *rax165;
                                        rdx14 = argv0;
                                        rsi161 = reinterpret_cast<void**>("%s: logfile is not an absolute path, you may not be able to re-open it\n");
                                        fun_53a0(rdi166, "%s: logfile is not an absolute path, you may not be able to re-open it\n", rdx14, rcx, r8, r9, v8, v15);
                                        rsp163 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp163) - 8 + 8 - 8 + 8);
                                    }
                                    eax167 = fun_5410(rbp7, rsi161, rdx14, rcx, r8, r9);
                                    *reinterpret_cast<int32_t*>(&rdi168) = eax167;
                                    *reinterpret_cast<int32_t*>(&rdi168 + 4) = 0;
                                    *reinterpret_cast<int32_t*>(&rsi26) = 2;
                                    *reinterpret_cast<int32_t*>(&rsi26 + 4) = 0;
                                    rdx14 = reinterpret_cast<void**>(1);
                                    *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
                                    fun_5160(rdi168, 2, rdi168, 2);
                                    eax169 = fun_51f0();
                                    rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp163) - 8 + 8 - 8 + 8 - 8 + 8);
                                    if (!eax169 && (eax170 = fun_5410(rbp7, 2, 1, rcx, r8, r9), *reinterpret_cast<int32_t*>(&rdi171) = eax170, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi171) + 4) = 0, *reinterpret_cast<int32_t*>(&rsi26) = *reinterpret_cast<int32_t*>(&r15_34), *reinterpret_cast<int32_t*>(&rsi26 + 4) = 0, rdx14 = r12_40, *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0, eax172 = fun_5580(rdi171, rsi26, rdx14, rcx, r8), rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8 - 8 + 8), eax172 < 0)) {
                                        rsi26 = reinterpret_cast<void**>("fchown logfile - %m");
                                        fun_5480(4, "fchown logfile - %m", 4, "fchown logfile - %m");
                                        fun_55a0("fchown logfile", "fchown logfile - %m", rdx14, rcx, r8, r9);
                                        rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8 - 8 + 8);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    rdi173 = user;
                    rax174 = fun_5390(rdi173, rsi26, rdx14, rcx, r8);
                    rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8);
                    if (!rax174) {
                        fun_5480(2, "unknown user - '%.80s'", 2, "unknown user - '%.80s'");
                        rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8);
                        rax175 = stderr;
                        rdi176 = *rax175;
                        rdx14 = argv0;
                        rcx = user;
                        rsi177 = reinterpret_cast<void**>("%s: unknown user - '%s'\n");
                        goto addr_7003_200;
                    } else {
                        *reinterpret_cast<int32_t*>(&r15_34) = rax174->f10;
                        r12_40 = rax174->f14;
                        goto addr_678f_186;
                    }
                }
            } else {
                *reinterpret_cast<uint32_t*>(&v8) = *reinterpret_cast<uint32_t*>(&r14_21);
                v15 = rdi156;
                rax178 = fun_5590(rdi156, "r", rdi156, "r");
                rsp179 = reinterpret_cast<void*>(rsp155 - 2 + 2);
                if (!rax178) {
                    addr_7dcb_203:
                    rsi55 = reinterpret_cast<void**>("%.80s - %m");
                    rbx54 = v15;
                    rdx14 = rbx54;
                    fun_5480(2, "%.80s - %m", 2, "%.80s - %m");
                    rsp57 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp179) - 8 + 8);
                    goto addr_7de6_39;
                } else {
                    r15_34 = rax178;
                    fun_5260(reinterpret_cast<int64_t>(rsp179) + 32);
                    rsp180 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp179) - 8 + 8);
                    rdi181 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp180) + 0x140);
                    *reinterpret_cast<int32_t*>(&rsi26) = 0x1388;
                    *reinterpret_cast<int32_t*>(&rsi26 + 4) = 0;
                    rdx14 = r15_34;
                    rax182 = fun_5350(rdi181, 0x1388, rdx14, rdi181, 0x1388, rdx14);
                    rsp183 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp180) - 8 + 8);
                    if (rax182) {
                        rbx184 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp183) + 0x140);
                        rbp7 = reinterpret_cast<void**>(0x100002600);
                        r14_21 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp183) + 0x2850);
                        r13_25 = reinterpret_cast<void**>("|/");
                        v185 = r15_34;
                        while (1) {
                            rax186 = fun_5220(rbx184, 35, rdx14, rbx184, 35, rdx14);
                            if (rax186) {
                                *reinterpret_cast<void***>(rax186) = reinterpret_cast<void**>(0);
                            }
                            rax187 = fun_51d0(rbx184, 35, rbx184, 35);
                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp183) - 8 + 8 - 8 + 8);
                            zf188 = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax187) == 0);
                            if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax187) < 0) | zf188) {
                                if (zf188) {
                                    addr_6a10_210:
                                    *reinterpret_cast<int32_t*>(&rsi26) = 0x1388;
                                    *reinterpret_cast<int32_t*>(&rsi26 + 4) = 0;
                                    rdx14 = r15_34;
                                    rax189 = fun_5350(rbx184, 0x1388, rdx14, rbx184, 0x1388, rdx14);
                                    rsp183 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                    if (!rax189) 
                                        goto addr_6749_211; else 
                                        continue;
                                } else {
                                    addr_6a82_212:
                                    rsi190 = reinterpret_cast<void**>(" %4900[^ \t] %ld-%ld");
                                    rdx191 = r14_21;
                                    rcx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp93) + 48);
                                    r8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp93) + 56);
                                    eax192 = fun_5470(rbx184, " %4900[^ \t] %ld-%ld", rdx191, rcx, r8, r9, v8, v15, v53, v185);
                                    rsp193 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
                                    if (eax192 == 3) {
                                        addr_6ad0_213:
                                        if (v194 == 47) {
                                            rbx195 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp193) + 0x2851);
                                            rax196 = fun_51d0(rbx195, rsi190, rbx195, rsi190);
                                            rdx191 = rax196 + 1;
                                            fun_5540(r14_21, rbx195, rdx191, r14_21, rbx195, rdx191);
                                            rsp193 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp193) - 8 + 8 - 8 + 8);
                                        }
                                    } else {
                                        rsi190 = reinterpret_cast<void**>(" %4900[^ \t] %ld");
                                        rdx191 = r14_21;
                                        rcx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp193) + 56);
                                        eax197 = fun_5470(rbx184, " %4900[^ \t] %ld", rdx191, rcx, r8, r9, v8, v15, v53, v185);
                                        rsp193 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp193) - 8 + 8);
                                        if (eax197 != 2) {
                                            fun_5480(2, "unparsable line in %.80s - %.80s", 2, "unparsable line in %.80s - %.80s");
                                            rax198 = stderr;
                                            rdi199 = *rax198;
                                            rdx200 = argv0;
                                            rcx = v15;
                                            r8 = rbx184;
                                            fun_53a0(rdi199, "%s: unparsable line in %.80s - %.80s\n", rdx200, rcx, r8, r9, v8, v15);
                                            rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp193) - 8 + 8 - 8 + 8);
                                            goto addr_6a10_210;
                                        } else {
                                            goto addr_6ad0_213;
                                        }
                                    }
                                }
                                rsi201 = reinterpret_cast<void**>("|/");
                                rax202 = fun_56c0(r14_21, "|/", rdx191, r14_21, "|/", rdx191);
                                rsp203 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp193) - 8 + 8);
                                if (rax202) {
                                    r15_204 = rax202;
                                    do {
                                        r15_205 = r15_204 + 2;
                                        rax206 = fun_51d0(r15_205, "|/", r15_205, "|/");
                                        rdx191 = rax206 + 1;
                                        rdi207 = r15_204 + 1;
                                        fun_5540(rdi207, r15_205, rdx191, rdi207, r15_205, rdx191);
                                        rsi201 = reinterpret_cast<void**>("|/");
                                        rax208 = fun_56c0(r14_21, "|/", rdx191, r14_21, "|/", rdx191);
                                        rsp203 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp203) - 8 + 8 - 8 + 8 - 8 + 8);
                                        r15_204 = rax208;
                                    } while (rax208);
                                }
                                r12_40 = reinterpret_cast<void**>(static_cast<int64_t>(numthrottles));
                                rax209 = reinterpret_cast<int32_t>(maxthrottles);
                                r15_34 = v185;
                                rbx184 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp203) + 0x140);
                                if (reinterpret_cast<signed char>(r12_40) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax209))) {
                                    if (!*reinterpret_cast<void***>(&rax209)) {
                                        maxthrottles = reinterpret_cast<void**>(100);
                                        rax210 = fun_5430("libcrypt.so.1", "libcrypt.so.1");
                                        rsp203 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp203) - 8 + 8);
                                    } else {
                                        rcx = reinterpret_cast<void**>(static_cast<uint32_t>(rax209 + rax209));
                                        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                                        maxthrottles = rcx;
                                        rdi211 = throttles;
                                        rax212 = reinterpret_cast<void***>(rax209 << 5);
                                        rsi201 = reinterpret_cast<void**>(rax212 + reinterpret_cast<int64_t>(rax212) * 2);
                                        rax210 = fun_54d0(rdi211, rsi201, rdx191);
                                        rsp203 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp203) - 8 + 8);
                                    }
                                    throttles = rax210;
                                    if (!rax210) 
                                        goto addr_7ca6_226;
                                }
                                rax213 = fun_5670(r14_21, rsi201, rdx191, rcx, r8, r9);
                                rsp93 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp203) - 8 + 8);
                                if (!rax213) 
                                    goto addr_706f_111;
                                rcx = throttles;
                                rdx214 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r12_40 + reinterpret_cast<unsigned char>(r12_40) * 2) << 4);
                                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(rdx214)) = rax213;
                                *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(rdx214) + 8) = v215;
                                *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(rdx214) + 16) = 0;
                                __asm__("pxor xmm0, xmm0");
                                __asm__("movdqu [rcx+rdx+0x18], xmm0");
                                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<uint64_t>(rdx214) + 40) = 0;
                                numthrottles = static_cast<int32_t>(reinterpret_cast<uint64_t>(r12_40 + 1));
                                goto addr_6a10_210;
                            } else {
                                *reinterpret_cast<int32_t*>(&rax216) = *reinterpret_cast<int32_t*>(&rax187);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax216) + 4) = 0;
                                rax217 = reinterpret_cast<uint64_t>(rax216 + 1);
                                do {
                                    rcx = reinterpret_cast<void**>(static_cast<uint32_t>(rax217 - 2));
                                    *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                                    *reinterpret_cast<uint32_t*>(&rdx218) = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp93) + reinterpret_cast<unsigned char>(rcx) + 0x140);
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx218) + 4) = 0;
                                    if (rdx218 > 32) 
                                        goto addr_6a82_212;
                                    if (!static_cast<int1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(0x100002600) >> rdx218))) 
                                        goto addr_6a82_212;
                                    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp93) + reinterpret_cast<unsigned char>(rcx) + 0x140) = 0;
                                    --rax217;
                                } while (rax217 > 1);
                                goto addr_6a10_210;
                            }
                        }
                    } else {
                        addr_6749_211:
                        fun_5190(r15_34, 0x1388, rdx14, r15_34, 0x1388, rdx14);
                        rsp155 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp183) - 8 + 8);
                        r13_25 = reinterpret_cast<void**>(rsp155 + 80);
                        *reinterpret_cast<uint32_t*>(&r14_21) = *reinterpret_cast<uint32_t*>(&v8);
                        goto addr_675d_185;
                    }
                }
            }
        } else {
            fun_5480(3, "can't find any valid address", 3, "can't find any valid address");
            rsp13 = reinterpret_cast<void***>(rsp155 - 2 + 2);
            rax219 = stderr;
            rdi17 = *rax219;
            rdx14 = argv0;
            rsi18 = reinterpret_cast<void**>("%s: can't find any valid address\n");
            goto addr_709a_180;
        }
    }
    rdi220 = dir;
    if (!rdi220) 
        goto addr_68c0_236;
    eax221 = fun_51e0(rdi220, rsi26, rdx14, rcx, r8, r9);
    rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8);
    if (eax221 >= 0) 
        goto addr_68c0_236;
    rsi55 = reinterpret_cast<void**>("chdir - %m");
    fun_5480(2, "chdir - %m", 2, "chdir - %m");
    rsp57 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8);
    rdi164 = reinterpret_cast<void**>("chdir");
    goto addr_68b1_193;
    addr_7003_200:
    fun_53a0(rdi176, rsi177, rdx14, rcx, r8, r9, v8, v15);
    fun_5620();
    rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp93) - 8 + 8 - 8 + 8);
    goto addr_7014_239;
    addr_7de6_39:
    rdi164 = rbx54;
    goto addr_68b1_193;
    addr_706f_111:
    fun_5480(2, "out of memory copying a string", 2, "out of memory copying a string");
    rsp13 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp93) - 8 + 8);
    rax222 = stderr;
    rdi17 = *rax222;
    rdx14 = argv0;
    rsi18 = reinterpret_cast<void**>("%s: out of memory copying a string\n");
    goto addr_709a_180;
    addr_7ca6_226:
    fun_5480(2, "out of memory allocating a throttletab", 2, "out of memory allocating a throttletab");
    rsp13 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rsp203) - 8 + 8);
    rax223 = stderr;
    rdi17 = *rax223;
    rdx14 = argv0;
    rsi18 = reinterpret_cast<void**>("%s: out of memory allocating a throttletab\n");
    goto addr_709a_180;
    addr_659e_22:
    r8 = *reinterpret_cast<void***>(rax27 + 16);
    *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
    if (reinterpret_cast<unsigned char>(r8) >= reinterpret_cast<unsigned char>(0x81)) {
        rcx = reinterpret_cast<void**>(0x80);
        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
        fun_5480(2, "%.80s - sockaddr too small (%lu < %lu)", 2, "%.80s - sockaddr too small (%lu < %lu)");
        fun_5620();
        rsp179 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8 - 8 + 8);
        goto addr_7dcb_203;
    } else {
        __asm__("pxor xmm0, xmm0");
        __asm__("movdqa [rsp+0xb0], xmm0");
        __asm__("movdqa [rsp+0xa0], xmm0");
        __asm__("movdqa [rsp+0x90], xmm0");
        __asm__("movdqa [rsp+0x80], xmm0");
        __asm__("movdqa [rsp+0x70], xmm0");
        __asm__("movdqa [rsp+0x60], xmm0");
        __asm__("movdqa [rsp+0x50], xmm0");
        __asm__("movdqa [rsp+0x40], xmm0");
        rsi26 = *reinterpret_cast<void***>(rax27 + 24);
        rdx14 = *reinterpret_cast<void***>(rax27 + 16);
        *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
        fun_5540(reinterpret_cast<int64_t>(rsp28) + 64, rsi26, rdx14);
        rsp28 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp28) - 8 + 8);
        *reinterpret_cast<uint32_t*>(&r14_21) = 1;
        goto addr_6606_21;
    }
    addr_64ba_25:
    rdx14 = rbp7;
    goto addr_64bc_4;
    addr_7c82_27:
    fun_5100("thttpd/2.29 23May2018", "-V");
    fun_5620();
    rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp43) - 8 + 8 - 8 + 8);
    goto addr_7c95_242;
    addr_7e6c_65:
    usage();
    v224 = rbx41;
    shut_down(rdi11, "-D", rdx14, rcx, r8, r9);
    fun_5480(5, "exiting due to signal %d", 5, "exiting due to signal %d");
    fun_5060(5, "exiting due to signal %d", 5, "exiting due to signal %d");
    fun_5620();
    rax225 = fun_5090();
    rsp226 = reinterpret_cast<void*>(rsp13 - 8 + 8 - 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 + 8);
    r14_227 = rax225;
    r15d228 = *rax225;
    eax229 = fun_5560(0xffffffff, reinterpret_cast<int64_t>(rsp226) + 4, 1);
    if (!eax229) {
        addr_7f55_243:
        *r14_227 = r15d228;
        goto v224;
    } else {
        rbx230 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp226) - 8 + 8 + 4);
        do {
            if (eax229 < 0) {
                if (*r14_227 == 4) 
                    continue;
                if (*r14_227 != 11) 
                    break;
            } else {
                rax231 = hs;
                if (rax231) {
                    ecx232 = *reinterpret_cast<void***>(rax231 + 36);
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ecx232) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ecx232 == 0)) {
                        ecx232 = reinterpret_cast<void**>(1);
                    }
                    *reinterpret_cast<void***>(rax231 + 36) = ecx232 + 0xffffffff;
                }
            }
            eax229 = fun_5560(0xffffffff, rbx230, 1);
        } while (eax229);
        goto addr_7f55_243;
    }
    if (*r14_227 != 10) {
        fun_5480(3, "child wait - %m", 3, "child wait - %m");
        goto addr_7f55_243;
    }
    addr_6fe8_88:
    rax233 = stderr;
    rdi176 = *rax233;
    rdx14 = argv0;
    rsi177 = reinterpret_cast<void**>("%s: value required for %s option\n");
    addr_7000_255:
    rcx = rbp7;
    goto addr_7003_200;
    addr_6f6b_93:
    rax234 = stderr;
    rdi176 = *rax234;
    rdx14 = argv0;
    rsi177 = reinterpret_cast<void**>("%s: no value required for %s option\n");
    goto addr_7000_255;
    addr_7e2c_172:
    rax235 = stderr;
    rdi176 = *rax235;
    rdx14 = argv0;
    rsi177 = reinterpret_cast<void**>("%s: unknown config option '%s'\n");
    goto addr_7000_255;
    addr_77f9_256:
    goto *reinterpret_cast<int32_t*>(0x12030 + reinterpret_cast<unsigned char>(rcx) * 4) + 0x12030;
    while (1) {
        addr_7c52_257:
        shut_down(rdi236, rsi237, rdx14, rcx, r8, r9);
        fun_5480(5, "exiting", 5, "exiting");
        fun_5060(5, "exiting", 5, "exiting");
        fun_5620();
        rsp154 = rsp154 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2;
        while (1) {
            rsi238 = reinterpret_cast<void**>("tmr_create(wakeup_connection) failed");
            while (1) {
                while (1) {
                    *reinterpret_cast<int32_t*>(&rdi239) = 2;
                    *reinterpret_cast<int32_t*>(&rdi239 + 4) = 0;
                    while (1) {
                        fun_5480(rdi239, rsi238, rdi239, rsi238);
                        rax240 = fun_5620();
                        rsp154 = rsp154 - 2 + 2 - 2 + 2;
                        do {
                            max_connects = *reinterpret_cast<void***>(&rax240) + 0xfffffff6;
                            zf241 = do_chroot == 1;
                            if (!zf241) {
                                addr_6d5c_262:
                                rdi242 = data_dir;
                                if (!rdi242) 
                                    break;
                                eax243 = fun_51e0(rdi242, rsi238, rdx14, rcx, r8, r9);
                                rsp154 = rsp154 - 2 + 2;
                                if (eax243 >= 0) 
                                    break;
                            } else {
                                eax244 = fun_50e0(rsp154 + 80, rsi238, rdx14, rcx, r8, r9);
                                rsp245 = rsp154 - 2 + 2;
                                if (eax244 >= 0) {
                                    *reinterpret_cast<uint32_t*>(&v8) = *reinterpret_cast<uint32_t*>(&r14_21);
                                    r14_246 = logfile;
                                    if (r14_246 && (rsi238 = reinterpret_cast<void**>("-"), eax247 = fun_5370(r14_246, "-", r14_246, "-"), rsp245 = rsp245 - 2 + 2, !!eax247)) {
                                        r13_248 = reinterpret_cast<void**>(rsp245 + 80);
                                        rax249 = fun_51d0(r13_248, "-", r13_248, "-");
                                        eax250 = fun_50b0(r14_246, r13_248, rax249, r14_246, r13_248, rax249);
                                        rsp251 = reinterpret_cast<void*>(rsp245 - 2 + 2 - 2 + 2);
                                        if (!eax250) {
                                            rbx252 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rax249) + reinterpret_cast<unsigned char>(r14_246) + 0xffffffffffffffff);
                                            rax253 = fun_51d0(rbx252, r13_248, rbx252, r13_248);
                                            rdx14 = rax253 + 1;
                                            rsi238 = rbx252;
                                            fun_5540(r14_246, rsi238, rdx14, r14_246, rsi238, rdx14);
                                            rsp245 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp251) - 8 + 8 - 8 + 8);
                                        } else {
                                            fun_5480(4, "logfile is not within the chroot tree, you will not be able to re-open it", 4, "logfile is not within the chroot tree, you will not be able to re-open it");
                                            rax254 = stderr;
                                            rdi255 = *rax254;
                                            rdx14 = argv0;
                                            rsi238 = reinterpret_cast<void**>("%s: logfile is not within the chroot tree, you will not be able to re-open it\n");
                                            fun_53a0(rdi255, "%s: logfile is not within the chroot tree, you will not be able to re-open it\n", rdx14, rcx, r8, r9, v8, v15);
                                            rsp245 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp251) - 8 + 8 - 8 + 8);
                                        }
                                        r13_25 = reinterpret_cast<void**>(rsp245 + 80);
                                    }
                                    eax256 = fun_51e0(rsp245 + 80, rsi238, rdx14, rcx, r8, r9);
                                    rsp154 = rsp245 - 2 + 2;
                                    *reinterpret_cast<uint32_t*>(&r14_21) = *reinterpret_cast<uint32_t*>(&v8);
                                    if (eax256 >= 0) 
                                        goto addr_6d5c_262; else 
                                        goto addr_6d3d_271;
                                } else {
                                    rsi55 = reinterpret_cast<void**>("chroot - %m");
                                    fun_5480(2, "chroot - %m", 2, "chroot - %m");
                                    rsp57 = reinterpret_cast<void*>(rsp245 - 2 + 2);
                                    rdi164 = reinterpret_cast<void**>("chroot");
                                    goto addr_68b1_193;
                                }
                            }
                            rsi55 = reinterpret_cast<void**>("data_dir chdir - %m");
                            fun_5480(2, "data_dir chdir - %m", 2, "data_dir chdir - %m");
                            rsp57 = reinterpret_cast<void*>(rsp154 - 2 + 2);
                            rdi164 = reinterpret_cast<void**>("data_dir chdir");
                            addr_68b1_193:
                            fun_55a0(rdi164, rsi55, rdx14, rcx, r8, r9);
                            fun_5620();
                            rsp37 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp57) - 8 + 8 - 8 + 8);
                            addr_68c0_236:
                            *reinterpret_cast<int32_t*>(&rsi238) = reinterpret_cast<int32_t>("me");
                            *reinterpret_cast<int32_t*>(&rsi238 + 4) = 0;
                            fun_5280(r13_25, "me", rdx14, rcx, r8, r9);
                            rdi257 = r13_25;
                            rax258 = fun_51d0(rdi257, "me", rdi257, "me");
                            rsp259 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp37) - 8 + 8 - 8 + 8);
                            if (*reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax258) + reinterpret_cast<unsigned char>(r13_25) + 0xffffffffffffffff) != 47) {
                                rdi257 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp259) + 0x140);
                                rax260 = fun_51d0(rdi257, "me", rdi257, "me");
                                rsp259 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp259) - 8 + 8);
                                *reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rsp259) + reinterpret_cast<unsigned char>(rax260) + 0x140) = 47;
                            }
                            zf261 = debug == 0;
                            if (zf261) {
                                rax262 = stdin;
                                rdi263 = *rax262;
                                fun_5190(rdi263, "me", rdx14, rdi263, "me", rdx14);
                                rsp264 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp259) - 8 + 8);
                                rax265 = stdout;
                                rdi266 = *rax265;
                                if (rbp7 != rdi266) {
                                    fun_5190(rdi266, "me", rdx14, rdi266, "me", rdx14);
                                    rsp264 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp264) - 8 + 8);
                                }
                                rax267 = stderr;
                                rdi268 = *rax267;
                                fun_5190(rdi268, "me", rdx14, rdi268, "me", rdx14);
                                *reinterpret_cast<int32_t*>(&rsi238) = 1;
                                *reinterpret_cast<int32_t*>(&rsi238 + 4) = 0;
                                eax269 = fun_54a0(1, 1, rdx14, rcx, r8, r9);
                                rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp264) - 8 + 8 - 8 + 8);
                                if (eax269 < 0) 
                                    goto addr_6949_279;
                            } else {
                                fun_52e0(rdi257, "me", rdx14, rcx, r8, r9);
                                rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp259) - 8 + 8);
                            }
                            rdi270 = pidfile;
                            if (rdi270) {
                                rax271 = fun_5590(rdi270, "w", rdi270, "w");
                                rsp272 = reinterpret_cast<void*>(rsp154 - 2 + 2);
                                if (!rax271) 
                                    goto addr_697a_283;
                                eax273 = fun_5180();
                                rsi238 = reinterpret_cast<void**>("%d\n");
                                rdx14 = eax273;
                                *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
                                fun_53a0(rax271, "%d\n", rdx14, rcx, r8, r9, v8, v15);
                                rdi270 = rax271;
                                fun_5190(rdi270, "%d\n", rdx14, rdi270, "%d\n", rdx14);
                                rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp272) - 8 + 8 - 8 + 8 - 8 + 8);
                                continue;
                            }
                            addr_6d3d_271:
                            rsi55 = reinterpret_cast<void**>("chroot chdir - %m");
                            fun_5480(2, "chroot chdir - %m", 2, "chroot chdir - %m");
                            rsp57 = reinterpret_cast<void*>(rsp154 - 2 + 2);
                            rdi164 = reinterpret_cast<void**>("chroot chdir");
                            goto addr_68b1_193;
                            *reinterpret_cast<void***>(&rax240) = fdwatch_get_nfiles(rdi270, rsi238, rdx14, rcx, r8, r9);
                            rsp154 = rsp154 - 2 + 2;
                            max_connects = *reinterpret_cast<void***>(&rax240);
                        } while (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax240)) >= reinterpret_cast<signed char>(0));
                        goto addr_6c35_286;
                        fun_5520(15, 15);
                        fun_5520(2, 2);
                        fun_5520(17, 17);
                        fun_5520(13, 13);
                        fun_5520(1, 1);
                        fun_5520(10, 10);
                        fun_5520(12, 12);
                        fun_5520(14, 14);
                        got_hup = 0;
                        got_usr1 = 0;
                        watchdog_flag = 0;
                        fun_5290(0x168, handle_alrm, rdx14, rcx, r8, r9);
                        tmr_init(0x168, handle_alrm, rdx14, rcx, r8, r9);
                        rsp274 = reinterpret_cast<void*>(rsp154 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2 - 2 + 2);
                        rdi275 = hostname;
                        rsi276 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp274) + 0xc0);
                        if (*reinterpret_cast<signed char*>(&v53 + 4)) {
                            rsi276 = reinterpret_cast<void**>(0);
                        }
                        rdx277 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp274) + 64);
                        if (!*reinterpret_cast<uint32_t*>(&r14_21)) {
                            rdx277 = reinterpret_cast<void**>(0);
                        }
                        *reinterpret_cast<uint32_t*>(&rcx278) = port;
                        *reinterpret_cast<int32_t*>(&rcx278 + 4) = 0;
                        r8_279 = cgi_pattern;
                        *reinterpret_cast<int32_t*>(&r9) = cgi_limit;
                        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&r11_280) = no_log;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_280) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&r14_21) = no_symlink_check;
                        *reinterpret_cast<int32_t*>(&r14_21 + 4) = 0;
                        r10_281 = r13_25;
                        *reinterpret_cast<uint32_t*>(&r13_25) = do_vhost;
                        *reinterpret_cast<int32_t*>(&r13_25 + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rax282) = do_global_passwd;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax282) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&rbx283) = no_empty_referrers;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx283) + 4) = 0;
                        v284 = rbx283;
                        v285 = local_pattern;
                        v286 = url_pattern;
                        v287 = rax282;
                        v288 = r13_25;
                        v289 = r14_21;
                        v290 = r11_280;
                        v291 = v53;
                        v292 = p3p;
                        v293 = charset;
                        rax294 = httpd_initialize(rdi275, rsi276, rdx277, rcx278, r8_279, r9, v293, v292, v291, r10_281, *reinterpret_cast<uint32_t*>(&v290), rbp7, v289, v288, *reinterpret_cast<void***>(&v287), v286, v285, *reinterpret_cast<void***>(&v284));
                        rsp295 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp274) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 + 8 + 96);
                        hs = rax294;
                        if (rax294) {
                            addr_6f0a_292:
                            rdx14 = JunkClientData;
                            rcx = reinterpret_cast<void**>(0x1d4c0);
                            *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                            r8 = reinterpret_cast<void**>(1);
                            *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                            rax296 = tmr_create(0, 0x8030, rdx14, 0x1d4c0, 1, r9);
                            rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp295) - 8 + 8);
                            if (!rax296) 
                                goto addr_6f32_293;
                        } else {
                            addr_6f00_294:
                            fun_5620();
                            rsp295 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp295) - 8 + 8);
                            goto addr_6f0a_292;
                        }
                        rdx14 = JunkClientData;
                        rcx = reinterpret_cast<void**>(0x1388);
                        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                        r8 = reinterpret_cast<void**>(1);
                        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                        rax297 = tmr_create(0, idle, rdx14, 0x1388, 1, r9);
                        rsp154 = rsp154 - 2 + 2;
                        if (!rax297) 
                            goto addr_6f5f_296;
                        less_or_equal298 = numthrottles <= 0;
                        if (less_or_equal298) 
                            goto addr_6fbb_298;
                        rdx14 = JunkClientData;
                        rcx = reinterpret_cast<void**>(0x7d0);
                        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                        r8 = reinterpret_cast<void**>(1);
                        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                        rax299 = tmr_create(0, update_throttles, rdx14, 0x7d0, 1, r9);
                        rsp154 = rsp154 - 2 + 2;
                        if (!rax299) 
                            goto addr_6faf_300;
                        addr_6fbb_298:
                        rdx14 = JunkClientData;
                        rcx = reinterpret_cast<void**>(0x36ee80);
                        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                        r8 = reinterpret_cast<void**>(1);
                        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                        rax300 = tmr_create(0, show_stats, rdx14, 0x36ee80, 1, r9);
                        rsp154 = rsp154 - 2 + 2;
                        if (!rax300) 
                            goto addr_6fdc_301;
                        addr_7014_239:
                        rax301 = fun_5400();
                        stats_time = rax301;
                        start_time = rax301;
                        stats_connections = reinterpret_cast<void*>(0);
                        stats_bytes = 0;
                        stats_simultaneous = reinterpret_cast<void**>(0);
                        eax302 = fun_51f0();
                        rsp154 = rsp154 - 2 + 2 - 2 + 2;
                        if (eax302) {
                            addr_711d_302:
                            rbp7 = max_connects;
                            *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
                            rbx303 = reinterpret_cast<int32_t>(rbp7);
                            rax304 = reinterpret_cast<void***>(rbx303 << 4);
                            rdi305 = reinterpret_cast<void**>(rax304 + reinterpret_cast<int64_t>(rax304) * 8);
                            rax306 = fun_5430(rdi305, rdi305);
                            rsp154 = rsp154 - 2 + 2;
                            connects = rax306;
                            if (!rax306) 
                                goto addr_7142_303;
                        } else {
                            *reinterpret_cast<int32_t*>(&rsi18) = 0;
                            *reinterpret_cast<int32_t*>(&rsi18 + 4) = 0;
                            eax307 = fun_52b0();
                            rsp154 = rsp154 - 2 + 2;
                            if (eax307 < 0) 
                                goto addr_7063_305;
                            addr_70ab_181:
                            *reinterpret_cast<void***>(&rdi308) = r12_40;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi308) + 4) = 0;
                            eax309 = fun_5550(rdi308, rsi18, rdx14, rcx, r8, r9);
                            rsp154 = rsp154 - 2 + 2;
                            if (eax309 < 0) 
                                goto addr_70b7_306;
                            rdi310 = user;
                            rsi311 = r12_40;
                            *reinterpret_cast<int32_t*>(&rsi311 + 4) = 0;
                            eax312 = fun_5680(rdi310, rsi311, rdx14, rcx, r8, r9);
                            rsp313 = reinterpret_cast<void*>(rsp154 - 2 + 2);
                            if (eax312 >= 0) 
                                goto addr_70e9_308; else 
                                goto addr_70d6_309;
                        }
                        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rbp7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rbp7 == 0))) {
                            if (!reinterpret_cast<int1_t>(rbp7 == 1)) {
                                rdx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbp7) & 0xfffffffe);
                                *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
                                rsi314 = reinterpret_cast<void***>(rax306 + 0x98);
                                *reinterpret_cast<int32_t*>(&rcx315) = 0;
                                *reinterpret_cast<int32_t*>(&rcx315 + 4) = 0;
                                do {
                                    *reinterpret_cast<int32_t*>(rsi314 - 0x98) = 0;
                                    *reinterpret_cast<int32_t*>(rsi314 - 0x94) = static_cast<int32_t>(reinterpret_cast<uint64_t>(rcx315 + 1));
                                    *reinterpret_cast<int64_t*>(rsi314 - 0x90) = 0;
                                    *reinterpret_cast<int32_t*>(rsi314 - 8) = 0;
                                    rcx315 = rcx315 + 2;
                                    *reinterpret_cast<int32_t*>(rsi314 - 4) = *reinterpret_cast<int32_t*>(&rcx315);
                                    *rsi314 = reinterpret_cast<void**>(0);
                                    rsi314 = rsi314 + 0x120;
                                } while (rdx14 != rcx315);
                            } else {
                                *reinterpret_cast<int32_t*>(&rcx315) = 0;
                                *reinterpret_cast<int32_t*>(&rcx315 + 4) = 0;
                            }
                            if (*reinterpret_cast<unsigned char*>(&rbp7) & 1) {
                                rdx14 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rcx315 + reinterpret_cast<unsigned char>(rcx315) * 8) << 4);
                                *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax306) + reinterpret_cast<unsigned char>(rdx14)) = reinterpret_cast<void**>(0);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rax306) + reinterpret_cast<unsigned char>(rdx14) + 4) = *reinterpret_cast<int32_t*>(&rcx315) + 1;
                                *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rax306) + reinterpret_cast<unsigned char>(rdx14) + 8) = 0;
                            }
                        }
                        rcx = reinterpret_cast<void**>(rbx303 + rbx303 * 8 << 4);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rax306) + 0xffffffffffffff74) = -1;
                        first_free_connect = reinterpret_cast<void**>(0);
                        num_connects = reinterpret_cast<void**>(0);
                        httpd_conn_count = 0;
                        rax316 = hs;
                        if (rax316) {
                            edi317 = *reinterpret_cast<void***>(rax316 + 72);
                            if (edi317 != 0xffffffff) {
                                rdx14 = reinterpret_cast<void**>(0);
                                *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
                                fdwatch_add_fd(edi317, 0, 0, rcx, r8, r9, v8);
                                rsp154 = rsp154 - 2 + 2;
                                rax316 = hs;
                            }
                            edi318 = *reinterpret_cast<void***>(rax316 + 76);
                            if (edi318 != 0xffffffff) {
                                rdx14 = reinterpret_cast<void**>(0);
                                *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
                                fdwatch_add_fd(edi318, 0, 0, rcx, r8, r9, v8);
                                rsp154 = rsp154 - 2 + 2;
                            }
                        }
                        rdi236 = reinterpret_cast<void**>(rsp154 + 8);
                        rsi237 = reinterpret_cast<void**>(0);
                        *reinterpret_cast<int32_t*>(&rsi237 + 4) = 0;
                        fun_5260(rdi236, rdi236);
                        rsp154 = rsp154 - 2 + 2;
                        zf319 = terminate == 0;
                        if (zf319) 
                            goto addr_725c_323;
                        less_or_equal320 = reinterpret_cast<signed char>(num_connects) <= reinterpret_cast<signed char>(0);
                        if (less_or_equal320) 
                            goto addr_7c52_257;
                        addr_725c_323:
                        r13_25 = reinterpret_cast<void**>(rsp154 + 8);
                        r15_34 = reinterpret_cast<void**>(rsp154 + 0xa14);
                        while (1) {
                            zf321 = got_hup == 0;
                            if (!zf321) {
                                zf322 = no_log == 0;
                                if (zf322 && ((zf323 = hs == 0, !zf323) && ((rdi324 = logfile, !!rdi324) && (rsi237 = reinterpret_cast<void**>("-"), eax325 = fun_5370(rdi324, "-", rdi324, "-"), rsp154 = rsp154 - 2 + 2, !!eax325)))) {
                                    fun_5480(5, "re-opening logfile", 5, "re-opening logfile");
                                    rdi326 = logfile;
                                    rax327 = fun_5590(rdi326, "a", rdi326, "a");
                                    rsp328 = reinterpret_cast<void*>(rsp154 - 2 + 2 - 2 + 2);
                                    if (!rax327) {
                                        rdx14 = logfile;
                                        rsi237 = reinterpret_cast<void**>("re-opening %.80s - %m");
                                        fun_5480(2, "re-opening %.80s - %m", 2, "re-opening %.80s - %m");
                                        rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp328) - 8 + 8);
                                    } else {
                                        rbp7 = rax327;
                                        eax329 = fun_5410(rax327, "a", rdx14, rcx, r8, r9);
                                        *reinterpret_cast<int32_t*>(&rdi330) = eax329;
                                        *reinterpret_cast<int32_t*>(&rdi330 + 4) = 0;
                                        rdx14 = reinterpret_cast<void**>(1);
                                        *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
                                        fun_5160(rdi330, 2, rdi330, 2);
                                        rdi331 = hs;
                                        rsi237 = rbp7;
                                        httpd_set_logfp(rdi331, rsi237, 1, rcx, r8, r9);
                                        rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp328) - 8 + 8 - 8 + 8 - 8 + 8);
                                    }
                                }
                                got_hup = 0;
                            }
                            rax332 = tmr_mstimeout(r13_25, rsi237, rdx14, rcx, r8, r9);
                            rdi236 = rax332;
                            eax333 = fdwatch(rdi236, rsi237, rdx14, rcx, r8, r9);
                            rsp334 = reinterpret_cast<void*>(rsp154 - 2 + 2 - 2 + 2);
                            if (reinterpret_cast<signed char>(eax333) < reinterpret_cast<signed char>(0)) {
                                rax335 = fun_5090();
                                rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp334) - 8 + 8);
                                if (*rax335 == 11) 
                                    goto addr_7c38_333;
                                if (*rax335 == 4) 
                                    goto addr_7c38_333; else 
                                    break;
                            }
                            rbp7 = eax333;
                            *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
                            rdi236 = r13_25;
                            rsi237 = reinterpret_cast<void**>(0);
                            *reinterpret_cast<int32_t*>(&rsi237 + 4) = 0;
                            fun_5260(rdi236, rdi236);
                            rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp334) - 8 + 8);
                            if (!rbp7) {
                                rdi236 = r13_25;
                                tmr_run(rdi236);
                                rsp154 = rsp154 - 2 + 2;
                                goto addr_7c38_333;
                            }
                            rax336 = hs;
                            if (rax336) 
                                goto addr_7376_338;
                            while (1) {
                                addr_7419_339:
                                rax337 = fdwatch_get_next_client_data(rdi236, rsi237, rdx14, rcx, r8, r9);
                                rsp154 = rsp154 - 2 + 2;
                                if (!rax337) 
                                    continue;
                                r14_21 = rax337;
                                if (rax337 == 0xffffffffffffffff) 
                                    break;
                                rdi236 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r14_21 + 8) + 0x2c0);
                                *reinterpret_cast<int32_t*>(&rdi236 + 4) = 0;
                                eax338 = fdwatch_check_fd(rdi236, rdi236);
                                rsp154 = rsp154 - 2 + 2;
                                if (!eax338) {
                                    addr_740e_342:
                                    rdi236 = r14_21;
                                    rsi237 = r13_25;
                                    clear_connection(rdi236, rsi237, rdx14, rcx, r8, r9, v8);
                                    rsp154 = rsp154 - 2 + 2;
                                    continue;
                                } else {
                                    if (*reinterpret_cast<void***>(r14_21) == 4) {
                                        rdi236 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r14_21 + 8) + 0x2c0);
                                        *reinterpret_cast<int32_t*>(&rdi236 + 4) = 0;
                                        rdx14 = reinterpret_cast<void**>("me");
                                        *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
                                        rsi237 = r15_34;
                                        rax339 = fun_5330(rdi236, rsi237, "me", rcx, r8, r9);
                                        rsp154 = rsp154 - 2 + 2;
                                        if (*reinterpret_cast<int32_t*>(&rax339) < 0) {
                                            rax340 = fun_5090();
                                            rsp154 = rsp154 - 2 + 2;
                                            if (*rax340 == 4) 
                                                continue;
                                            if (*rax340 == 11) 
                                                continue;
                                        } else {
                                            if (*reinterpret_cast<int32_t*>(&rax339)) 
                                                continue;
                                        }
                                        rdi236 = r14_21;
                                        rsi237 = r13_25;
                                        really_clear_connection(rdi236, rsi237, "me", rcx, r8, r9);
                                        rsp154 = rsp154 - 2 + 2;
                                        continue;
                                    }
                                    if (*reinterpret_cast<void***>(r14_21) != 2) 
                                        goto addr_7458_351;
                                }
                                if (*reinterpret_cast<void***>(r14_21 + 64) == 0xffffffffffffffff) {
                                    *reinterpret_cast<int32_t*>(&rax341) = 0x3b9aca00;
                                    *reinterpret_cast<int32_t*>(&rax341 + 4) = 0;
                                } else {
                                    rax342 = *reinterpret_cast<void***>(r14_21 + 64) + 3;
                                    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r14_21 + 64)) >= reinterpret_cast<signed char>(0)) {
                                        rax342 = *reinterpret_cast<void***>(r14_21 + 64);
                                    }
                                    rax341 = reinterpret_cast<void**>(reinterpret_cast<signed char>(rax342) >> 2);
                                }
                                r12_40 = *reinterpret_cast<void***>(r14_21 + 8);
                                if (*reinterpret_cast<void***>(r12_40 + 0x1d8)) 
                                    goto addr_76f8_358;
                                *reinterpret_cast<void***>(&rdi343) = *reinterpret_cast<void***>(r12_40 + 0x2c0);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi343) + 4) = 0;
                                rcx344 = *reinterpret_cast<void***>(r14_21 + 0x88);
                                rsi237 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_40 + 0x2c8)) + reinterpret_cast<unsigned char>(rcx344));
                                rdx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_21 + 0x80)) - reinterpret_cast<unsigned char>(rcx344));
                                if (reinterpret_cast<unsigned char>(rdx14) >= reinterpret_cast<unsigned char>(rax341)) {
                                    rdx14 = rax341;
                                }
                                rax345 = fun_5170(rdi343, rsi237, rdx14, rcx344, r8, r9);
                                rsp154 = rsp154 - 2 + 2;
                                zf346 = *reinterpret_cast<uint32_t*>(&rax345) == 0;
                                if (*reinterpret_cast<int32_t*>(&rax345) < reinterpret_cast<int32_t>(0)) 
                                    goto addr_77e6_362;
                                addr_7760_363:
                                if (zf346) {
                                    *reinterpret_cast<void***>(r14_21 + 0x70) = *reinterpret_cast<void***>(r14_21 + 0x70) + 100;
                                    *reinterpret_cast<void***>(r14_21) = reinterpret_cast<void**>(3);
                                    edi347 = *reinterpret_cast<void***>(r12_40 + 0x2c0);
                                    fdwatch_del_fd(edi347, rsi237, rdx14, rcx344, edi347, rsi237, rdx14, rcx344);
                                    rsp348 = reinterpret_cast<void*>(rsp154 - 2 + 2);
                                    if (*reinterpret_cast<void***>(r14_21 + 96)) {
                                        fun_5480(3, "replacing non-null wakeup_timer!", 3, "replacing non-null wakeup_timer!");
                                        rsp348 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp348) - 8 + 8);
                                    }
                                    rcx = *reinterpret_cast<void***>(r14_21 + 0x70);
                                } else {
                                    *reinterpret_cast<void***>(r14_21 + 88) = v349;
                                    rcx = *reinterpret_cast<void***>(r12_40 + 0x1d8);
                                    if (rcx) {
                                        rsi237 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax345)));
                                        rdx350 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi237) - reinterpret_cast<unsigned char>(rcx));
                                        if (reinterpret_cast<unsigned char>(rsi237) >= reinterpret_cast<unsigned char>(rcx)) {
                                            rbp7 = reinterpret_cast<void**>(0);
                                            *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
                                        } else {
                                            rcx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx) - *reinterpret_cast<uint32_t*>(&rax345));
                                            *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                                            rdi351 = *reinterpret_cast<void***>(r12_40 + 0x170);
                                            rsi237 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi237) + reinterpret_cast<unsigned char>(rdi351));
                                            rbp7 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(rcx)));
                                            fun_5540(rdi351, rsi237, rbp7, rdi351, rsi237, rbp7);
                                            rsp154 = rsp154 - 2 + 2;
                                            *reinterpret_cast<int32_t*>(&rdx350) = 0;
                                            *reinterpret_cast<int32_t*>(&rdx350 + 4) = 0;
                                        }
                                        *reinterpret_cast<void***>(r12_40 + 0x1d8) = rbp7;
                                        rax345 = rdx350;
                                    }
                                    rdx14 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax345)));
                                    r9 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_21 + 0x88)) + reinterpret_cast<unsigned char>(rdx14));
                                    *reinterpret_cast<void***>(r14_21 + 0x88) = r9;
                                    rdi236 = *reinterpret_cast<void***>(r14_21 + 8);
                                    rax352 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi236 + 0xc8)) + reinterpret_cast<unsigned char>(rdx14));
                                    *reinterpret_cast<void***>(rdi236 + 0xc8) = rax352;
                                    r8 = *reinterpret_cast<void***>(r14_21 + 56);
                                    *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8 == 0))) {
                                        rbp7 = throttles;
                                        if (!reinterpret_cast<int1_t>(r8 == 1)) {
                                            *reinterpret_cast<uint32_t*>(&rbx353) = reinterpret_cast<unsigned char>(r8) & 0xfffffffe;
                                            *reinterpret_cast<int32_t*>(&rbx353 + 4) = 0;
                                            rsi237 = reinterpret_cast<void**>(0);
                                            *reinterpret_cast<int32_t*>(&rsi237 + 4) = 0;
                                            do {
                                                rcx354 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r14_21 + reinterpret_cast<unsigned char>(rsi237) * 4) + 16);
                                                rcx355 = reinterpret_cast<void*>(rcx354 + rcx354 * 2 << 4);
                                                *reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(rbp7) + reinterpret_cast<uint64_t>(rcx355) + 32) = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbp7) + reinterpret_cast<uint64_t>(rcx355) + 32) + reinterpret_cast<unsigned char>(rdx14));
                                                rcx356 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r14_21 + reinterpret_cast<unsigned char>(rsi237) * 4) + 20);
                                                rcx = reinterpret_cast<void**>(rcx356 + rcx356 * 2 << 4);
                                                *reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(rbp7) + reinterpret_cast<unsigned char>(rcx) + 32) = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbp7) + reinterpret_cast<unsigned char>(rcx) + 32) + reinterpret_cast<unsigned char>(rdx14));
                                                rsi237 = rsi237 + 2;
                                            } while (rbx353 != rsi237);
                                        } else {
                                            rsi237 = reinterpret_cast<void**>(0);
                                            *reinterpret_cast<int32_t*>(&rsi237 + 4) = 0;
                                        }
                                        if (*reinterpret_cast<unsigned char*>(&r8) & 1) {
                                            rcx357 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r14_21 + reinterpret_cast<unsigned char>(rsi237) * 4) + 16);
                                            rcx = reinterpret_cast<void**>(rcx357 + rcx357 * 2 << 4);
                                            *reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(rbp7) + reinterpret_cast<unsigned char>(rcx) + 32) = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rbp7) + reinterpret_cast<unsigned char>(rcx) + 32) + reinterpret_cast<unsigned char>(rdx14));
                                        }
                                    }
                                    if (reinterpret_cast<signed char>(r9) >= reinterpret_cast<signed char>(*reinterpret_cast<void***>(r14_21 + 0x80))) 
                                        goto addr_7409_380; else 
                                        goto addr_7962_381;
                                }
                                addr_7840_382:
                                rdi236 = r13_25;
                                rsi237 = reinterpret_cast<void**>(0x88d0);
                                rdx14 = r14_21;
                                r8 = reinterpret_cast<void**>(0);
                                *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
                                rax358 = tmr_create(rdi236, 0x88d0, rdx14, rcx, 0, r9);
                                rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp348) - 8 + 8);
                                *reinterpret_cast<void***>(r14_21 + 96) = rax358;
                                if (rax358) 
                                    continue; else 
                                    goto addr_7862_383;
                                addr_7409_380:
                                httpd_write_response(rdi236, rsi237, rdx14, rcx, r8, r9, v8);
                                rsp154 = rsp154 - 2 + 2;
                                goto addr_740e_342;
                                addr_7962_381:
                                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r14_21 + 0x70)) >= reinterpret_cast<signed char>(0x65)) {
                                    *reinterpret_cast<void***>(r14_21 + 0x70) = *reinterpret_cast<void***>(r14_21 + 0x70) + 0xffffffffffffff9c;
                                }
                                rcx = *reinterpret_cast<void***>(r14_21 + 64);
                                if (rcx == 0xffffffffffffffff) 
                                    continue;
                                rbp7 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(v359) - *reinterpret_cast<uint32_t*>(r14_21 + 80));
                                if (!rbp7) {
                                    rbp7 = reinterpret_cast<void**>(1);
                                }
                                if (!(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rax352) | reinterpret_cast<unsigned char>(rbp7)) >> 32)) {
                                    rdx14 = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(&rax352) % reinterpret_cast<unsigned char>(rbp7));
                                    *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
                                    *reinterpret_cast<uint32_t*>(&rax360) = *reinterpret_cast<uint32_t*>(&rax352) / reinterpret_cast<unsigned char>(rbp7);
                                    *reinterpret_cast<int32_t*>(&rax360 + 4) = 0;
                                    if (reinterpret_cast<signed char>(rax360) <= reinterpret_cast<signed char>(rcx)) 
                                        continue;
                                } else {
                                    rdx14 = reinterpret_cast<void**>(reinterpret_cast<signed char>(rax352) % reinterpret_cast<signed char>(rbp7));
                                    if (reinterpret_cast<signed char>(reinterpret_cast<signed char>(rax352) / reinterpret_cast<signed char>(rbp7)) <= reinterpret_cast<signed char>(rcx)) 
                                        continue;
                                }
                                *reinterpret_cast<void***>(r14_21) = reinterpret_cast<void**>(3);
                                edi361 = *reinterpret_cast<void***>(r12_40 + 0x2c0);
                                fdwatch_del_fd(edi361, rsi237, rdx14, rcx);
                                rsp348 = reinterpret_cast<void*>(rsp154 - 2 + 2);
                                rcx362 = *reinterpret_cast<void***>(r14_21 + 64);
                                rax363 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r14_21 + 8) + 0xc8);
                                if (!(reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rax363) | reinterpret_cast<unsigned char>(rcx362)) >> 32)) {
                                    *reinterpret_cast<uint32_t*>(&rbx364) = *reinterpret_cast<uint32_t*>(&rax363) / *reinterpret_cast<uint32_t*>(&rcx362);
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx364) + 4) = 0;
                                } else {
                                    rbx364 = reinterpret_cast<signed char>(rax363) / reinterpret_cast<signed char>(rcx362);
                                }
                                rbx365 = reinterpret_cast<uint64_t>(rbx364 - reinterpret_cast<unsigned char>(rbp7));
                                if (*reinterpret_cast<void***>(r14_21 + 96)) {
                                    fun_5480(3, "replacing non-null wakeup_timer!", 3, "replacing non-null wakeup_timer!");
                                    rsp348 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp348) - 8 + 8);
                                }
                                rax366 = *reinterpret_cast<int32_t*>(&rbx365);
                                rcx = reinterpret_cast<void**>(rax366 * 0x3e8);
                                if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax366) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax366) == 0)) {
                                    rcx = reinterpret_cast<void**>(0x1f4);
                                }
                                goto addr_7840_382;
                                addr_77e6_362:
                                rax367 = fun_5090();
                                rsp154 = rsp154 - 2 + 2;
                                *reinterpret_cast<uint32_t*>(&rax368) = *rax367;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax368) + 4) = 0;
                                rcx = reinterpret_cast<void**>(static_cast<uint32_t>(rax368 - 4));
                                *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                                if (reinterpret_cast<unsigned char>(rcx) <= reinterpret_cast<unsigned char>(28)) 
                                    goto addr_77f9_256;
                                if (*reinterpret_cast<uint32_t*>(&rax368) != 0x68) {
                                    rdx14 = *reinterpret_cast<void***>(r12_40 + 0xd0);
                                    fun_5480(3, "write - %m sending %.80s", 3, "write - %m sending %.80s");
                                    rsp154 = rsp154 - 2 + 2;
                                    goto addr_740e_342;
                                }
                                addr_76f8_358:
                                rcx344 = *reinterpret_cast<void***>(r14_21 + 0x88);
                                if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_21 + 0x80)) - reinterpret_cast<unsigned char>(rcx344)) >= reinterpret_cast<unsigned char>(rax341)) {
                                }
                                *reinterpret_cast<void***>(&rdi369) = *reinterpret_cast<void***>(r12_40 + 0x2c0);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi369) + 4) = 0;
                                rsi237 = r15_34;
                                rdx14 = reinterpret_cast<void**>(2);
                                *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
                                *reinterpret_cast<uint32_t*>(&rax345) = fun_50f0(rdi369, rsi237, 2);
                                rsp154 = rsp154 - 2 + 2;
                                zf346 = *reinterpret_cast<uint32_t*>(&rax345) == 0;
                                if (*reinterpret_cast<int32_t*>(&rax345) < reinterpret_cast<int32_t>(0)) 
                                    goto addr_77e6_362; else 
                                    goto addr_7760_363;
                                addr_7458_351:
                                if (!reinterpret_cast<int1_t>(*reinterpret_cast<void***>(r14_21) == 1)) 
                                    continue;
                                r12_40 = *reinterpret_cast<void***>(r14_21 + 8);
                                rdx370 = *reinterpret_cast<void***>(r12_40 + 0x98);
                                rsi371 = *reinterpret_cast<void***>(r12_40 + 0xa0);
                                if (reinterpret_cast<unsigned char>(rsi371) >= reinterpret_cast<unsigned char>(rdx370)) 
                                    goto addr_7476_405;
                                addr_74af_406:
                                rdi236 = *reinterpret_cast<void***>(r12_40 + 0x2c0);
                                *reinterpret_cast<int32_t*>(&rdi236 + 4) = 0;
                                rdx14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx370) - reinterpret_cast<unsigned char>(rsi371));
                                rsi237 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi371) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_40 + 0x90)));
                                rax372 = fun_5330(rdi236, rsi237, rdx14, rcx, r8, r9);
                                rsp154 = rsp154 - 2 + 2;
                                if (!*reinterpret_cast<int32_t*>(&rax372)) {
                                    addr_73da_407:
                                    rdx14 = httpd_err400title;
                                    r8 = httpd_err400form;
                                    rdi373 = r12_40;
                                    rsi237 = reinterpret_cast<void**>(0x190);
                                    *reinterpret_cast<int32_t*>(&rsi237 + 4) = 0;
                                    rcx = reinterpret_cast<void**>(0x13553);
                                    r9 = reinterpret_cast<void**>(0x13553);
                                } else {
                                    if (*reinterpret_cast<int32_t*>(&rax372) < 0) {
                                        rax374 = fun_5090();
                                        rsp154 = rsp154 - 2 + 2;
                                        if (*rax374 == 4) 
                                            continue;
                                        if (*rax374 == 11) 
                                            continue;
                                        goto addr_73da_407;
                                    } else {
                                        *reinterpret_cast<void***>(r12_40 + 0xa0) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_40 + 0xa0)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&rax372))));
                                        *reinterpret_cast<void***>(r14_21 + 88) = v375;
                                        rdi236 = r12_40;
                                        eax376 = httpd_got_request(rdi236);
                                        rsp154 = rsp154 - 2 + 2;
                                        if (!eax376) 
                                            continue;
                                        if (eax376 == 2) 
                                            goto addr_73da_407; else 
                                            goto addr_7501_414;
                                    }
                                }
                                addr_7400_415:
                                httpd_send_err(rdi373, rsi237, rdx14, 0x13553, r8, r9, rdi373, rsi237, rdx14, 0x13553, r8, r9);
                                rsp154 = rsp154 - 2 + 2;
                                goto addr_7405_416;
                                addr_7501_414:
                                eax377 = httpd_parse_request(r12_40);
                                rsp154 = rsp154 - 2 + 2;
                                if (eax377 < 0) 
                                    goto addr_7405_416;
                                *reinterpret_cast<void***>(r14_21 + 56) = reinterpret_cast<void**>(0);
                                __asm__("pcmpeqd xmm0, xmm0");
                                __asm__("movdqu [r14+0x40], xmm0");
                                less_or_equal378 = numthrottles <= 0;
                                if (less_or_equal378) {
                                    addr_7657_418:
                                    rsi237 = r13_25;
                                    eax379 = httpd_start_request(r12_40, rsi237, rdx14, rcx, r8, r9);
                                    rsp154 = rsp154 - 2 + 2;
                                    if (eax379 < 0) {
                                        addr_7405_416:
                                        rdi236 = *reinterpret_cast<void***>(r14_21 + 8);
                                        goto addr_7409_380;
                                    } else {
                                        if (*reinterpret_cast<int32_t*>(r12_40 + 0x210)) {
                                            *reinterpret_cast<void***>(r14_21 + 0x88) = *reinterpret_cast<void***>(r12_40 + 0x218);
                                            rax380 = *reinterpret_cast<void***>(r12_40 + 0x220) + 1;
                                            goto addr_7a99_421;
                                        }
                                        rax380 = *reinterpret_cast<void***>(r12_40 + 0xc0);
                                        if (reinterpret_cast<signed char>(rax380) < reinterpret_cast<signed char>(0)) {
                                            *reinterpret_cast<void***>(r14_21 + 0x80) = reinterpret_cast<void**>(0);
                                            *reinterpret_cast<int32_t*>(&rax380) = 0;
                                            *reinterpret_cast<int32_t*>(&rax380 + 4) = 0;
                                            if (*reinterpret_cast<void***>(r12_40 + 0x2c8)) {
                                                addr_7aab_424:
                                                if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r14_21 + 0x88)) < reinterpret_cast<signed char>(rax380)) {
                                                    *reinterpret_cast<void***>(r14_21) = reinterpret_cast<void**>(2);
                                                    *reinterpret_cast<uint32_t*>(r14_21 + 80) = v381;
                                                    *reinterpret_cast<void***>(r14_21 + 0x70) = reinterpret_cast<void**>(0);
                                                    edi382 = *reinterpret_cast<void***>(r12_40 + 0x2c0);
                                                    fdwatch_del_fd(edi382, rsi237, rdx14, rcx, edi382, rsi237, rdx14, rcx);
                                                    rdi236 = *reinterpret_cast<void***>(r12_40 + 0x2c0);
                                                    *reinterpret_cast<int32_t*>(&rdi236 + 4) = 0;
                                                    rsi237 = r14_21;
                                                    rdx14 = reinterpret_cast<void**>(1);
                                                    *reinterpret_cast<int32_t*>(&rdx14 + 4) = 0;
                                                    fdwatch_add_fd(rdi236, rsi237, 1, rcx, r8, r9, v8);
                                                    rsp154 = rsp154 - 2 + 2 - 2 + 2;
                                                    continue;
                                                }
                                            } else {
                                                addr_7b0f_426:
                                                rcx = *reinterpret_cast<void***>(r14_21 + 56);
                                                *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                                                rax383 = *reinterpret_cast<void***>(r12_40 + 0xc8);
                                                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rcx) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rcx == 0))) {
                                                    rdx14 = throttles;
                                                    if (!reinterpret_cast<int1_t>(rcx == 1)) {
                                                        *reinterpret_cast<uint32_t*>(&rdi384) = reinterpret_cast<unsigned char>(rcx) & 0xfffffffe;
                                                        *reinterpret_cast<int32_t*>(&rdi384 + 4) = 0;
                                                        rsi237 = reinterpret_cast<void**>(0);
                                                        *reinterpret_cast<int32_t*>(&rsi237 + 4) = 0;
                                                        do {
                                                            rbp385 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r14_21 + reinterpret_cast<unsigned char>(rsi237) * 4) + 16);
                                                            rbp386 = reinterpret_cast<void*>(rbp385 + rbp385 * 2 << 4);
                                                            *reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(rdx14) + reinterpret_cast<uint64_t>(rbp386) + 32) = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rdx14) + reinterpret_cast<uint64_t>(rbp386) + 32) + reinterpret_cast<unsigned char>(rax383));
                                                            rbp387 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r14_21 + reinterpret_cast<unsigned char>(rsi237) * 4) + 20);
                                                            rbp7 = reinterpret_cast<void**>(rbp387 + rbp387 * 2 << 4);
                                                            *reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(rdx14) + reinterpret_cast<unsigned char>(rbp7) + 32) = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rdx14) + reinterpret_cast<unsigned char>(rbp7) + 32) + reinterpret_cast<unsigned char>(rax383));
                                                            rsi237 = rsi237 + 2;
                                                        } while (rdi384 != rsi237);
                                                    } else {
                                                        rsi237 = reinterpret_cast<void**>(0);
                                                        *reinterpret_cast<int32_t*>(&rsi237 + 4) = 0;
                                                    }
                                                    if (*reinterpret_cast<unsigned char*>(&rcx) & 1) {
                                                        rcx388 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r14_21 + reinterpret_cast<unsigned char>(rsi237) * 4) + 16);
                                                        rcx = reinterpret_cast<void**>(rcx388 + rcx388 * 2 << 4);
                                                        *reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(rdx14) + reinterpret_cast<unsigned char>(rcx) + 32) = reinterpret_cast<uint64_t>(*reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rdx14) + reinterpret_cast<unsigned char>(rcx) + 32) + reinterpret_cast<unsigned char>(rax383));
                                                    }
                                                }
                                            }
                                        } else {
                                            addr_7a99_421:
                                            *reinterpret_cast<void***>(r14_21 + 0x80) = rax380;
                                            if (!*reinterpret_cast<void***>(r12_40 + 0x2c8)) 
                                                goto addr_7b0f_426; else 
                                                goto addr_7aab_424;
                                        }
                                    }
                                } else {
                                    *reinterpret_cast<int32_t*>(&rbx389) = 1;
                                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx389) + 4) = 0;
                                    rbp7 = reinterpret_cast<void**>(0);
                                    *reinterpret_cast<int32_t*>(&rbp7 + 4) = 0;
                                    while (1) {
                                        rax390 = throttles;
                                        rdi391 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rax390) + reinterpret_cast<unsigned char>(rbp7));
                                        rsi392 = *reinterpret_cast<void***>(*reinterpret_cast<void***>(r14_21 + 8) + 0xf0);
                                        eax393 = match(rdi391, rsi392, rdx14, rcx, r8, r9);
                                        rsp154 = rsp154 - 2 + 2;
                                        if (!eax393) {
                                            addr_7638_435:
                                            rax394 = numthrottles;
                                            if (rbx389 >= rax394) 
                                                goto addr_7657_418;
                                            rbp7 = rbp7 + 48;
                                            ++rbx389;
                                            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r14_21 + 56)) < reinterpret_cast<signed char>(10)) 
                                                continue; else 
                                                goto addr_7657_418;
                                        } else {
                                            rdx395 = throttles;
                                            rax396 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx395) + reinterpret_cast<unsigned char>(rbp7) + 8);
                                            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx395) + reinterpret_cast<unsigned char>(rbp7) + 24)) > reinterpret_cast<signed char>(reinterpret_cast<uint64_t>(rax396) + reinterpret_cast<uint64_t>(rax396))) 
                                                goto addr_7a5c_438;
                                            rcx = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx395) + reinterpret_cast<unsigned char>(rbp7) + 16);
                                            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx395) + reinterpret_cast<unsigned char>(rbp7) + 24)) < reinterpret_cast<signed char>(rcx)) 
                                                goto addr_7a5c_438;
                                            if (*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdx395) + reinterpret_cast<unsigned char>(rbp7) + 40) < 0) 
                                                goto addr_7596_441;
                                        }
                                        addr_75c2_442:
                                        rsi397 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r14_21 + 56));
                                        *reinterpret_cast<void***>(r14_21 + 56) = reinterpret_cast<void**>(static_cast<uint32_t>(rsi397 + 1));
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r14_21 + rsi397 * 4) + 16) = static_cast<int32_t>(rbx389 - 1);
                                        rsi398 = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdx395) + reinterpret_cast<unsigned char>(rbp7) + 40) + 1;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdx395) + reinterpret_cast<unsigned char>(rbp7) + 40) = *reinterpret_cast<int32_t*>(&rsi398);
                                        if (!((reinterpret_cast<uint64_t>(rax396) | rsi398) >> 32)) {
                                            *reinterpret_cast<uint32_t*>(&rax399) = *reinterpret_cast<uint32_t*>(&rax396) / *reinterpret_cast<uint32_t*>(&rsi398);
                                            *reinterpret_cast<int32_t*>(&rax399 + 4) = 0;
                                        } else {
                                            rax399 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rax396) / reinterpret_cast<int64_t>(rsi398));
                                        }
                                        rdx14 = *reinterpret_cast<void***>(r14_21 + 64);
                                        rsi400 = rax399;
                                        if (reinterpret_cast<signed char>(rdx14) < reinterpret_cast<signed char>(rax399)) {
                                            rsi400 = rdx14;
                                        }
                                        rdi401 = *reinterpret_cast<void***>(r14_21 + 72);
                                        if (rdx14 == 0xffffffffffffffff) {
                                            rsi400 = rax399;
                                        }
                                        *reinterpret_cast<void***>(r14_21 + 64) = rsi400;
                                        rax402 = rcx;
                                        if (reinterpret_cast<signed char>(rdi401) > reinterpret_cast<signed char>(rcx)) {
                                            rax402 = rdi401;
                                        }
                                        if (rdi401 == 0xffffffffffffffff) {
                                            rax402 = rcx;
                                        }
                                        *reinterpret_cast<void***>(r14_21 + 72) = rax402;
                                        goto addr_7638_435;
                                        addr_7596_441:
                                        fun_5480(3, "throttle sending count was negative - shouldn't happen!", 3, "throttle sending count was negative - shouldn't happen!");
                                        rsp154 = rsp154 - 2 + 2;
                                        rdx395 = throttles;
                                        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdx395) + reinterpret_cast<unsigned char>(rbp7) + 40) = 0;
                                        rax396 = *reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx395) + reinterpret_cast<unsigned char>(rbp7) + 8);
                                        rcx = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx395) + reinterpret_cast<unsigned char>(rbp7) + 16);
                                        goto addr_75c2_442;
                                    }
                                }
                                *reinterpret_cast<void***>(r14_21 + 0x88) = rax383;
                                goto addr_7405_416;
                                addr_7a5c_438:
                                rdx14 = httpd_err503title;
                                r8 = httpd_err503form;
                                r9 = *reinterpret_cast<void***>(r12_40 + 0xd0);
                                rdi373 = r12_40;
                                rsi237 = reinterpret_cast<void**>(0x1f7);
                                *reinterpret_cast<int32_t*>(&rsi237 + 4) = 0;
                                rcx = reinterpret_cast<void**>(0x13553);
                                goto addr_7400_415;
                                addr_7476_405:
                                if (reinterpret_cast<unsigned char>(rdx370) >= reinterpret_cast<unsigned char>(0x1389)) 
                                    goto addr_73da_407;
                                rsi403 = r12_40 + 0x98;
                                rdi404 = r12_40 + 0x90;
                                rdx405 = rdx370 + 0x3e8;
                                httpd_realloc_str(rdi404, rsi403, rdx405, rcx, r8, r9, rdi404, rsi403, rdx405, rcx, r8, r9);
                                rsp154 = rsp154 - 2 + 2;
                                rdx370 = *reinterpret_cast<void***>(r12_40 + 0x98);
                                rsi371 = *reinterpret_cast<void***>(r12_40 + 0xa0);
                                goto addr_74af_406;
                            }
                            rdi236 = r13_25;
                            tmr_run(rdi236, rdi236);
                            rsp154 = rsp154 - 2 + 2;
                            zf406 = got_usr1 == 0;
                            if (!zf406 && ((zf407 = terminate == 0, zf407) && (terminate = 1, rdi236 = hs, !!rdi236))) {
                                if (*reinterpret_cast<void***>(rdi236 + 72) != 0xffffffff) {
                                    edi408 = *reinterpret_cast<void***>(rdi236 + 72);
                                    fdwatch_del_fd(edi408, rsi237, rdx14, rcx, edi408, rsi237, rdx14, rcx);
                                    rsp154 = rsp154 - 2 + 2;
                                    rdi236 = hs;
                                }
                                if (*reinterpret_cast<void***>(rdi236 + 76) != 0xffffffff) {
                                    edi409 = *reinterpret_cast<void***>(rdi236 + 76);
                                    fdwatch_del_fd(edi409, rsi237, rdx14, rcx, edi409, rsi237, rdx14, rcx);
                                    rsp154 = rsp154 - 2 + 2;
                                    rdi236 = hs;
                                }
                                httpd_unlisten(rdi236, rsi237, rdx14, rcx, r8, r9);
                                rsp154 = rsp154 - 2 + 2;
                                goto addr_7c38_333;
                            }
                            addr_7376_338:
                            rdi236 = *reinterpret_cast<void***>(rax336 + 76);
                            *reinterpret_cast<int32_t*>(&rdi236 + 4) = 0;
                            if (rdi236 == 0xffffffff) 
                                goto addr_73a1_462;
                            eax410 = fdwatch_check_fd(rdi236);
                            rsp154 = rsp154 - 2 + 2;
                            if (!eax410) 
                                goto addr_73a1_462;
                            rax411 = hs;
                            rsi237 = *reinterpret_cast<void***>(rax411 + 76);
                            *reinterpret_cast<int32_t*>(&rsi237 + 4) = 0;
                            rdi236 = r13_25;
                            eax412 = handle_newconnect(rdi236, rsi237, rdx14, rcx, r8, r9);
                            rsp154 = rsp154 - 2 + 2;
                            if (eax412) 
                                goto addr_7c38_333;
                            addr_73a1_462:
                            rax413 = hs;
                            if (!rax413) 
                                goto addr_7419_339;
                            rdi236 = *reinterpret_cast<void***>(rax413 + 72);
                            *reinterpret_cast<int32_t*>(&rdi236 + 4) = 0;
                            if (rdi236 == 0xffffffff) 
                                goto addr_7419_339;
                            eax414 = fdwatch_check_fd(rdi236, rdi236);
                            rsp154 = rsp154 - 2 + 2;
                            if (!eax414) 
                                goto addr_7419_339;
                            rax415 = hs;
                            rsi237 = *reinterpret_cast<void***>(rax415 + 72);
                            *reinterpret_cast<int32_t*>(&rsi237 + 4) = 0;
                            rdi236 = r13_25;
                            eax416 = handle_newconnect(rdi236, rsi237, rdx14, rcx, r8, r9);
                            rsp154 = rsp154 - 2 + 2;
                            if (eax416) {
                                addr_7c38_333:
                                zf417 = terminate == 0;
                                if (zf417) 
                                    continue;
                                less_or_equal418 = reinterpret_cast<signed char>(num_connects) <= reinterpret_cast<signed char>(0);
                                if (less_or_equal418) 
                                    goto addr_7c52_257;
                            } else {
                                goto addr_7419_339;
                            }
                        }
                        addr_7c95_242:
                        rsi238 = reinterpret_cast<void**>("fdwatch - %m");
                        *reinterpret_cast<int32_t*>(&rdi239) = 3;
                        *reinterpret_cast<int32_t*>(&rdi239 + 4) = 0;
                        continue;
                        addr_70e9_308:
                        *reinterpret_cast<int32_t*>(&rdi419) = *reinterpret_cast<int32_t*>(&r15_34);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi419) + 4) = 0;
                        eax420 = fun_5650(rdi419, rsi311, rdx14, rcx, r8, r9);
                        rsp154 = reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rsp313) - 8 + 8);
                        if (eax420 < 0) 
                            goto addr_70f5_471;
                        zf421 = do_chroot == 0;
                        if (zf421) {
                            fun_5480(4, "started as root without requesting chroot(), warning only", 4, "started as root without requesting chroot(), warning only");
                            rsp154 = rsp154 - 2 + 2;
                            goto addr_711d_302;
                        }
                        addr_70d6_309:
                        rsi311 = reinterpret_cast<void**>("initgroups - %m");
                        fun_5480(4, "initgroups - %m", 4, "initgroups - %m");
                        rsp313 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp313) - 8 + 8);
                        goto addr_70e9_308;
                        addr_697a_283:
                        fun_5480(2, "%.80s - %m", 2, "%.80s - %m");
                        rsp295 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp272) - 8 + 8);
                        goto addr_6f00_294;
                    }
                    addr_6949_279:
                    rsi238 = reinterpret_cast<void**>("daemon - %m");
                    continue;
                    addr_6c35_286:
                    rsi238 = reinterpret_cast<void**>("fdwatch initialization failure");
                    continue;
                    addr_6f32_293:
                    rsi238 = reinterpret_cast<void**>("tmr_create(occasional) failed");
                    continue;
                    addr_6f5f_296:
                    rsi238 = reinterpret_cast<void**>("tmr_create(idle) failed");
                    continue;
                    addr_6faf_300:
                    rsi238 = reinterpret_cast<void**>("tmr_create(update_throttles) failed");
                    continue;
                    addr_6fdc_301:
                    rsi238 = reinterpret_cast<void**>("tmr_create(show_stats) failed");
                    continue;
                    addr_7063_305:
                    rsi238 = reinterpret_cast<void**>("setgroups - %m");
                }
                addr_7142_303:
                rsi238 = reinterpret_cast<void**>("out of memory allocating a connecttab");
                continue;
                addr_70b7_306:
                rsi238 = reinterpret_cast<void**>("setgid - %m");
                continue;
                addr_70f5_471:
                rsi238 = reinterpret_cast<void**>("setuid - %m");
            }
            addr_7862_383:
        }
    }
}

struct s8 {
    signed char[16] pad16;
    void** f10;
};

void** httpd_err408title = reinterpret_cast<void**>(0xe6);

void** httpd_err408form = reinterpret_cast<void**>(0xf6);

struct s9 {
    signed char[16] pad16;
    void** f10;
};

void fun_8079() {
    void** v1;
    void** rsi2;
    void** r13_3;
    void** rbx4;
    void** rdx5;
    void** rcx6;
    void** r8_7;
    void** r9_8;
    int64_t rbp9;
    int64_t rax10;
    void* r15_11;
    void* tmp64_12;
    void** r14_13;
    int64_t rax14;
    int64_t* r13_15;
    int64_t* r13_16;
    void** rdi17;
    void** rdi18;
    void** r12_19;
    void** r12_20;
    void** rdi21;
    void** rdi22;
    void** rax23;
    int64_t v24;

    v1 = reinterpret_cast<void**>(__return_address());
    while (1) {
        rsi2 = r13_3;
        clear_connection(rbx4, rsi2, rdx5, rcx6, r8_7, r9_8, v1);
        while (++rbp9, rax10 = reinterpret_cast<int32_t>(max_connects), r15_11 = tmp64_12, rbp9 < rax10) {
            r14_13 = connects;
            rbx4 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14_13) + reinterpret_cast<uint64_t>(r15_11));
            *reinterpret_cast<int32_t*>(&rax14) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r14_13) + reinterpret_cast<uint64_t>(r15_11));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rcx6) = static_cast<uint32_t>(rax14 - 2);
            *reinterpret_cast<int32_t*>(&rcx6 + 4) = 0;
            if (*reinterpret_cast<uint32_t*>(&rcx6) >= 2) {
                if (*reinterpret_cast<int32_t*>(&rax14) != 1) 
                    continue;
                if (*r13_15 - *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r14_13) + reinterpret_cast<uint64_t>(r15_11) + 88) >= 60) 
                    goto addr_8118_7;
            } else {
                if (*r13_16 - *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r14_13) + reinterpret_cast<uint64_t>(r15_11) + 88) >= 0x12c) 
                    goto addr_80ce_9;
            }
        }
        break;
        addr_8118_7:
        rdi17 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s8**>(reinterpret_cast<unsigned char>(r14_13) + reinterpret_cast<uint64_t>(r15_11) + 8))->f10);
        httpd_ntoa(rdi17, rsi2, rdx5, rdi17, rsi2, rdx5);
        fun_5480(6, "%.80s connection timed out reading", 6, "%.80s connection timed out reading");
        rdi18 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r14_13) + reinterpret_cast<uint64_t>(r15_11) + 8);
        rdx5 = httpd_err408title;
        r8_7 = httpd_err408form;
        rcx6 = r12_19;
        r9_8 = r12_20;
        httpd_send_err(rdi18, 0x198, rdx5, rcx6, r8_7, r9_8, rdi18, 0x198, rdx5, rcx6, r8_7, r9_8);
        rdi21 = *reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r14_13) + reinterpret_cast<uint64_t>(r15_11) + 8);
        httpd_write_response(rdi21, 0x198, rdx5, rcx6, r8_7, r9_8, v1);
        continue;
        addr_80ce_9:
        rdi22 = reinterpret_cast<void**>(&(*reinterpret_cast<struct s9**>(reinterpret_cast<unsigned char>(r14_13) + reinterpret_cast<uint64_t>(r15_11) + 8))->f10);
        rax23 = httpd_ntoa(rdi22, rsi2, rdx5, rdi22, rsi2, rdx5);
        rdx5 = rax23;
        fun_5480(6, "%.80s connection timed out sending", 6, "%.80s connection timed out sending");
    }
    goto v24;
}

void fun_81d8() {
    int64_t r13_1;
    int64_t tmp64_2;
    int64_t rax3;
    void* rbx4;
    void* tmp64_5;
    uint64_t r9_6;
    void** rcx7;
    uint64_t r8_8;
    void** rdi9;
    void** rsi10;
    void** r15_11;
    void** r14_12;
    void** r12_13;
    int64_t r8_14;
    void** r10_15;
    void** rdi16;
    void*** rbp17;
    int64_t r11_18;
    void* rax19;
    int64_t r14_20;
    int64_t* r9_21;
    int64_t rsi22;
    int64_t rbx23;
    int64_t rax24;
    void* rcx25;
    uint64_t rax26;
    uint64_t rcx27;
    int64_t rax28;
    int64_t rcx29;
    int1_t zf30;
    int64_t v31;

    while (r13_1 = tmp64_2, rax3 = numthrottles, rbx4 = tmp64_5, r13_1 < rax3) {
        r9_6 = *reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<uint64_t>(rbx4) - 32);
        r8_8 = (__intrinsic() >> 63) + __intrinsic();
        *reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<uint64_t>(rbx4) - 16) = r8_8;
        *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<uint64_t>(rbx4) - 8) = 0;
        if (reinterpret_cast<int64_t>(r8_8) > reinterpret_cast<int64_t>(r9_6) && *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<uint64_t>(rbx4))) {
            if (reinterpret_cast<int64_t>(r8_8) <= reinterpret_cast<int64_t>(r9_6 + r9_6)) {
                *reinterpret_cast<int32_t*>(&rdi9) = 6;
                *reinterpret_cast<int32_t*>(&rdi9 + 4) = 0;
                rsi10 = r15_11;
            } else {
                *reinterpret_cast<int32_t*>(&rdi9) = 5;
                *reinterpret_cast<int32_t*>(&rdi9 + 4) = 0;
                rsi10 = r14_12;
            }
            fun_5480(rdi9, rsi10, rdi9, rsi10);
        }
        rcx7 = throttles;
        if (*reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<uint64_t>(rbx4) - 16) >= *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<uint64_t>(rbx4) - 24)) 
            continue;
        if (!*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<uint64_t>(rbx4))) 
            continue;
        fun_5480(5, r12_13, 5, r12_13);
        rcx7 = throttles;
    }
    *reinterpret_cast<void***>(&r8_14) = max_connects;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_14) + 4) = 0;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r8_14)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r8_14) == 0))) {
        r10_15 = connects;
        rdi16 = throttles;
        rbp17 = reinterpret_cast<void***>(r10_15 + 16);
        *reinterpret_cast<int32_t*>(&r11_18) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = 0;
        do {
            rax19 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r11_18 + r11_18 * 8) << 4);
            if ((reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(reinterpret_cast<unsigned char>(r10_15) + reinterpret_cast<uint64_t>(rax19))) & 0xfffffffe) == 2 && (*reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r10_15) + reinterpret_cast<uint64_t>(rax19) + 64) = -1, *reinterpret_cast<int32_t*>(&r14_20) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r10_15) + reinterpret_cast<uint64_t>(rax19) + 56), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_20) + 4) = 0, !(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r14_20) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r14_20) == 0)))) {
                r9_21 = reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(r10_15) + reinterpret_cast<uint64_t>(rax19) + 64);
                rsi22 = -1;
                *reinterpret_cast<int32_t*>(&rbx23) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx23) + 4) = 0;
                do {
                    rax24 = reinterpret_cast<int32_t>(rbp17[rbx23 * 4]);
                    rcx25 = reinterpret_cast<void*>(rax24 + rax24 * 2 << 4);
                    rax26 = *reinterpret_cast<uint64_t*>(reinterpret_cast<unsigned char>(rdi16) + reinterpret_cast<uint64_t>(rcx25) + 8);
                    rcx27 = reinterpret_cast<uint64_t>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdi16) + reinterpret_cast<uint64_t>(rcx25) + 40)));
                    if ((rax26 | rcx27) >> 32) {
                        rax28 = reinterpret_cast<int64_t>(rax26) / reinterpret_cast<int64_t>(rcx27);
                    } else {
                        *reinterpret_cast<uint32_t*>(&rax28) = *reinterpret_cast<uint32_t*>(&rax26) / *reinterpret_cast<uint32_t*>(&rcx27);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax28) + 4) = 0;
                    }
                    rcx29 = rax28;
                    if (rsi22 < rax28) {
                        rcx29 = rsi22;
                    }
                    zf30 = rsi22 == -1;
                    rsi22 = rcx29;
                    if (zf30) {
                        rsi22 = rax28;
                    }
                    ++rbx23;
                } while (r14_20 != rbx23);
                *r9_21 = rsi22;
            }
            ++r11_18;
            rbp17 = rbp17 + 0x90;
        } while (r11_18 != r8_14);
    }
    goto v31;
}

void linger_clear_connection(struct s7* rdi) {
    rdi->f68 = 0;
    goto really_clear_connection;
}

void httpd_clear_ndelay(void** rdi) {
    void** rax2;

    rax2 = fun_5160(rdi, 3);
    if (*reinterpret_cast<uint32_t*>(&rax2) == 0xffffffff || (*reinterpret_cast<uint32_t*>(&rax2) & 0xfffff7ff) == *reinterpret_cast<uint32_t*>(&rax2)) {
        return;
    } else {
        goto fun_5160;
    }
}

void fun_948c() {
    void** rsi1;
    void** rdx2;
    void** rcx3;
    void** r8_4;
    void* rax5;
    int32_t ebp6;
    void* r12_7;
    void* r14_8;
    void* r12_9;
    int64_t rdi10;
    int32_t r15d11;
    void** rcx12;
    void** r8_13;
    void** r9_14;
    void** rax15;
    void** rbx16;
    uint32_t* rax17;
    int64_t v18;

    do {
        fun_56a0(1, rsi1, rdx2, rcx3, r8_4);
        do {
            rax5 = reinterpret_cast<void*>(static_cast<int64_t>(ebp6));
            if (reinterpret_cast<uint64_t>(rax5) >= reinterpret_cast<uint64_t>(r12_7)) 
                goto addr_94e7_4;
            rsi1 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r14_8) + reinterpret_cast<uint64_t>(rax5));
            rdx2 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_9) - reinterpret_cast<uint64_t>(rax5));
            *reinterpret_cast<int32_t*>(&rdi10) = r15d11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0;
            rax15 = fun_5170(rdi10, rsi1, rdx2, rcx12, r8_13, r9_14);
            rbx16 = rax15;
            if (*reinterpret_cast<int32_t*>(&rbx16) < 0) 
                break;
            ebp6 = ebp6 + *reinterpret_cast<int32_t*>(&rbx16);
        } while (*reinterpret_cast<int32_t*>(&rbx16));
        goto addr_94c1_7;
        rax17 = fun_5090();
    } while (*rax17 == 11 || *rax17 == 4);
    goto addr_94e1_9;
    addr_94e7_4:
    goto v18;
    addr_94c1_7:
    goto addr_94e7_4;
    addr_94e1_9:
    goto addr_94e7_4;
}

int64_t httpd_method_str(int32_t edi) {
    uint32_t edi2;

    edi2 = edi + 0xffffffff;
    if (edi2 > 5) {
        return "UNKNOWN";
    } else {
        return *reinterpret_cast<int64_t*>(0x18da0 + reinterpret_cast<int32_t>(edi2) * 8);
    }
}

void fun_a2c0() {
    int64_t rsi1;
    int32_t esi2;
    int32_t* r9_3;
    int64_t r9_4;

    *reinterpret_cast<uint32_t*>(&rsi1) = reinterpret_cast<uint32_t>(esi2 - 9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi1) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rsi1) > 23) 
        goto 0xa288;
    goto r9_3[rsi1] + r9_4;
}

struct s10 {
    signed char[176] pad176;
    int32_t fb0;
};

void fun_a2d8(struct s10* rdi, int32_t esi) {
    int64_t rsi3;
    int32_t* r10_4;
    int64_t r10_5;

    *reinterpret_cast<uint32_t*>(&rsi3) = reinterpret_cast<uint32_t>(esi - 9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rsi3) > 23) {
        rdi->fb0 = 2;
    } else {
        goto r10_4[rsi3] + r10_5;
    }
}

void fun_a2f3() {
    int64_t rsi1;
    int32_t esi2;
    int32_t* r11_3;
    int64_t r11_4;

    *reinterpret_cast<uint32_t*>(&rsi1) = reinterpret_cast<uint32_t>(esi2 - 9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi1) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rsi1) > 23) 
        goto 0xa288;
    goto r11_3[rsi1] + r11_4;
}

void fun_a313() {
    int64_t rsi1;
    int32_t esi2;
    int32_t* r14_3;
    int64_t r14_4;

    *reinterpret_cast<uint32_t*>(&rsi1) = reinterpret_cast<uint32_t>(esi2 - 9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi1) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rsi1) > 23) 
        goto 0xa280;
    goto r14_3[rsi1] + r14_4;
}

void fun_a332() {
    int64_t rsi1;
    int32_t esi2;
    int32_t* r15_3;
    int64_t r15_4;

    *reinterpret_cast<uint32_t*>(&rsi1) = reinterpret_cast<uint32_t>(esi2 - 9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi1) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rsi1) > 23) 
        goto 0xa288;
    goto r15_3[rsi1] + r15_4;
}

struct s11 {
    signed char[176] pad176;
    int32_t fb0;
};

void fun_a351(struct s11* rdi, int32_t esi) {
    int64_t rsi3;
    int32_t* r12_4;
    int64_t r12_5;

    *reinterpret_cast<uint32_t*>(&rsi3) = reinterpret_cast<uint32_t>(esi - 9);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi3) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rsi3) > 23) {
        rdi->fb0 = 11;
        goto 0xa3ee;
    } else {
        goto r12_4[rsi3] + r12_5;
    }
}

void fun_a370() {
    int32_t esi1;
    int32_t esi2;

    if (esi1 != 10) {
        if (esi2 != 13) 
            goto 0xa288;
        goto 0xa280;
    }
}

void fun_a391() {
    int32_t esi1;
    int32_t esi2;

    if (esi1 != 13) {
        if (esi2 == 10) {
            goto 0xa3ee;
        } else {
            goto 0xa280;
        }
    } else {
        goto 0xa280;
    }
}

void fun_a3a0() {
    int32_t esi1;
    int32_t esi2;

    if (esi1 == 10) 
        goto 0xa280;
    if (esi2 != 13) 
        goto 0xa3c8;
    goto 0xa405;
}

void fun_a3b5() {
    int32_t esi1;

    if (esi1 == 13) 
        goto 0xa280; else 
        goto "???";
}

void fun_a3d2() {
    int32_t esi1;
    int32_t esi2;

    if (esi1 == 10) 
        goto 0xa3ee;
    if (esi2 != 13) 
        goto 0xa280;
    goto 0xa3ee;
}

void fun_e6b2() {
    goto 0xe734;
}

void fun_e72f() {
}

void fun_e86c() {
    void** rsi1;
    void** rdx2;
    void** rcx3;
    void** r8_4;
    void* rax5;
    int32_t ebp6;
    void* r12_7;
    void* r14_8;
    void* r12_9;
    void** rdi10;
    int32_t r15d11;
    void** rcx12;
    void** r8_13;
    void** r9_14;
    void** rax15;
    void** rbx16;
    uint32_t* rax17;
    int64_t v18;

    do {
        fun_56a0(1, rsi1, rdx2, rcx3, r8_4);
        do {
            rax5 = reinterpret_cast<void*>(static_cast<int64_t>(ebp6));
            if (reinterpret_cast<uint64_t>(rax5) >= reinterpret_cast<uint64_t>(r12_7)) 
                goto addr_e8c7_4;
            rsi1 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r14_8) + reinterpret_cast<uint64_t>(rax5));
            rdx2 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_9) - reinterpret_cast<uint64_t>(rax5));
            *reinterpret_cast<int32_t*>(&rdi10) = r15d11;
            *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
            rax15 = fun_5330(rdi10, rsi1, rdx2, rcx12, r8_13, r9_14);
            rbx16 = rax15;
            if (*reinterpret_cast<int32_t*>(&rbx16) < 0) 
                break;
            ebp6 = ebp6 + *reinterpret_cast<int32_t*>(&rbx16);
        } while (*reinterpret_cast<int32_t*>(&rbx16));
        goto addr_e8a1_7;
        rax17 = fun_5090();
    } while (*rax17 == 11 || *rax17 == 4);
    goto addr_e8c1_9;
    addr_e8c7_4:
    goto v18;
    addr_e8a1_7:
    goto addr_e8c7_4;
    addr_e8c1_9:
    goto addr_e8c7_4;
}

void ext_compare(int64_t rdi, int64_t rsi) {
    goto fun_5370;
}

void fun_f2bf() {
    goto 0xf292;
}

void fun_f2e0(uint32_t edi) {
    int32_t ecx2;
    uint32_t eax3;
    uint32_t ebp4;
    int32_t ecx5;

    if (ecx2 > 0x1f2) 
        goto 0xf292;
    eax3 = edi >> 2 & 15 | ebp4 << 4;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + ecx5 + 0xa0) = *reinterpret_cast<signed char*>(&eax3);
    goto 0xf292;
}

void name_compare(int64_t rdi, int64_t rsi) {
    goto fun_5370;
}

void fun_fccd() {
    goto 0xfdd1;
}

void fun_fd5b() {
    goto 0xfdd1;
}

struct s12 {
    signed char[16] pad16;
    int64_t f10;
};

struct s13 {
    signed char[32] pad32;
    uint64_t f20;
};

struct s14 {
    signed char[32] pad32;
    uint64_t f20;
};

struct s15 {
    signed char[40] pad40;
    uint64_t f28;
};

struct s16 {
    signed char[40] pad40;
    uint64_t f28;
};

struct s17 {
    signed char[32] pad32;
    uint64_t f20;
};

struct s18 {
    signed char[40] pad40;
    uint64_t f28;
};

void tmr_reset() {
    int64_t rdi1;
    struct s12* rsi2;
    uint64_t rcx3;
    uint64_t rcx4;
    struct s13* rsi5;
    struct s14* rsi6;
    uint64_t rdi7;
    struct s15* rsi8;
    struct s16* rsi9;
    uint64_t rdx10;
    struct s17* rsi11;
    struct s18* rsi12;

    __asm__("movups xmm0, [rdi]");
    __asm__("movups [rsi+0x20], xmm0");
    rdi1 = rsi2->f10;
    rcx3 = (reinterpret_cast<int64_t>(__intrinsic()) >> 7) + (__intrinsic() >> 63);
    rcx4 = rcx3 + rsi5->f20;
    rsi6->f20 = rcx4;
    rdi7 = (rdi1 - rcx3 * 0x3e8) * 0x3e8 + rsi8->f28;
    rsi9->f28 = rdi7;
    if (reinterpret_cast<int64_t>(rdi7) >= reinterpret_cast<int64_t>(0xf4240)) {
        rdx10 = __intrinsic() >> 18;
        rsi11->f20 = rcx4 + rdx10;
        rsi12->f28 = rdi7 - rdx10 * 0xf4240;
    }
    goto l_resort;
}

int64_t g19010 = 0;

void fun_55f6() {
    goto g19010;
}

void fun_5376() {
    goto 0x5020;
}

void fun_5596() {
    goto 0x5020;
}

void fun_5356() {
    goto 0x5020;
}

void fun_5196() {
    goto 0x5020;
}

void fun_5226() {
    goto 0x5020;
}

void fun_5316() {
    goto 0x5020;
}

void fun_5056() {
    goto 0x5020;
}

void fun_5676() {
    goto 0x5020;
}

void fun_53c6() {
    goto 0x5020;
}

void fun_53e6() {
    goto 0x5020;
}

void fun_5236() {
    goto 0x5020;
}

void fun_5666() {
    goto 0x5020;
}

void fun_5546() {
    goto 0x5020;
}

void fun_5706() {
    goto 0x5020;
}

void fun_5486() {
    goto 0x5020;
}

void fun_5266() {
    goto 0x5020;
}

void fun_51f6() {
    goto 0x5020;
}

void fun_5396() {
    goto 0x5020;
}

void fun_53a6() {
    goto 0x5020;
}

void fun_5416() {
    goto 0x5020;
}

void fun_5586() {
    goto 0x5020;
}

void fun_55a6() {
    goto 0x5020;
}

void fun_51e6() {
    goto 0x5020;
}

void fun_5626() {
    goto 0x5020;
}

void fun_51d6() {
    goto 0x5020;
}

void fun_52e6() {
    goto 0x5020;
}

void fun_54a6() {
    goto 0x5020;
}

void fun_5476() {
    goto 0x5020;
}

void fun_56c6() {
    goto 0x5020;
}

void fun_54d6() {
    goto 0x5020;
}

void fun_50e6() {
    goto 0x5020;
}

void fun_50b6() {
    goto 0x5020;
}

void fun_52b6() {
    goto 0x5020;
}

void fun_5656() {
    goto 0x5020;
}

void fun_5436() {
    goto 0x5020;
}

void fun_5166() {
    goto 0x5020;
}

void fun_50f6() {
    goto 0x5020;
}

void fun_5176() {
    goto 0x5020;
}

void fun_5096() {
    goto 0x5020;
}

void fun_5066() {
    goto 0x5020;
}

void handle_hup() {
    got_hup = 1;
    return;
}

void handle_alrm() {
    uint32_t* rax1;
    uint32_t ebp2;
    int1_t zf3;
    void** rsi4;
    void** rdx5;
    void** rcx6;
    void** r8_7;
    void** r9_8;
    void*** rsi9;
    void** rsi10;
    void** rdx11;
    int64_t rax12;
    int64_t rsi13;
    void** rdx14;
    void** rcx15;
    void** r8_16;
    void** r9_17;

    rax1 = fun_5090();
    ebp2 = *rax1;
    zf3 = watchdog_flag == 0;
    if (zf3) {
        fun_51e0("/tmp", rsi4, rdx5, rcx6, r8_7, r9_8);
        fun_5080("/tmp");
        mmc_cleanup(rsi9);
        tmr_cleanup(rsi9, rsi10, rdx11);
        watchdog_flag = 1;
        goto rax12;
    } else {
        watchdog_flag = 0;
        fun_5290(0x168, rsi13, rdx14, rcx15, r8_16, r9_17);
        *rax1 = ebp2;
        return;
    }
}

void fun_5296() {
    goto 0x5020;
}

void idle() {
    int1_t less_or_equal1;

    less_or_equal1 = reinterpret_cast<signed char>(max_connects) <= reinterpret_cast<signed char>(0);
    if (less_or_equal1) 
        goto 0x8174;
    goto 0x80a6;
}

void update_throttles() {
    int1_t less_or_equal1;

    less_or_equal1 = numthrottles <= 0;
    if (less_or_equal1) 
        goto 0x82ba;
    goto 0x81f8;
}

void show_stats() {
    goto logstats;
}

void fun_5046() {
    goto 0x5020;
}

void fun_5116() {
    goto 0x5020;
}

void fun_52d6() {
    goto 0x5020;
}

void fun_5716() {
    goto 0x5020;
}

void fun_5146() {
    goto 0x5020;
}

void fun_5516() {
    goto 0x5020;
}

void fun_5496() {
    goto 0x5020;
}

void fun_52a6() {
    goto 0x5020;
}

void httpd_write_fully(int32_t edi, int64_t rsi, int64_t rdx) {
    if (rdx) {
        goto 0x94a2;
    }
}

void fun_5136() {
    goto 0x5020;
}

void fun_5126() {
    goto 0x5020;
}

void fun_53d6() {
    goto 0x5020;
}

void fun_55c6() {
    goto 0x5020;
}

void fun_5276() {
    goto 0x5020;
}

void fun_52f6() {
    goto 0x5020;
}

void fun_54b6() {
    goto 0x5020;
}

void fun_50d6() {
    goto 0x5020;
}

void fun_56f6() {
    goto 0x5020;
}

void fun_5446() {
    goto 0x5020;
}

void fun_5386() {
    goto 0x5020;
}

void fun_56e6() {
    goto 0x5020;
}

void fun_55e6() {
    goto 0x5020;
}

void fun_53b6() {
    goto 0x5020;
}

void fun_5156() {
    goto 0x5020;
}

void fun_51a6() {
    goto 0x5020;
}

void fun_5306() {
    goto 0x5020;
}

void fun_5256() {
    goto 0x5020;
}

void fun_5216() {
    goto 0x5020;
}

void fun_5036() {
    goto 0x5020;
}

void fun_52c6() {
    goto 0x5020;
}

void fun_56b6() {
    goto 0x5020;
}

void fun_5636() {
    goto 0x5020;
}

void httpd_read_fully(int32_t edi, int64_t rsi, int64_t rdx) {
    if (rdx) {
        goto 0xe882;
    }
}

void fun_e6cf() {
    goto 0xe734;
}

void fun_5326() {
    goto 0x5020;
}

void fun_5346() {
    goto 0x5020;
}

void fun_e6dd() {
    goto 0xe734;
}

void fun_5406() {
    goto 0x5020;
}

void fun_51b6() {
    goto 0x5020;
}

void fun_5336() {
    goto 0x5020;
}

void fun_55b6() {
    goto 0x5020;
}

void fun_5536() {
    goto 0x5020;
}

void fun_f2c6(int32_t edi) {
    int32_t ecx2;

    if (ecx2 > 0x1f2) 
        goto 0xf292;
    goto 0xf2fa;
}

void fun_f309(uint32_t edi) {
    int32_t ecx2;
    uint32_t ebp3;
    uint32_t ebp4;
    int32_t ecx5;

    if (ecx2 > 0x1f2) 
        goto 0xf292;
    ebp3 = ebp4 << 6 | edi;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + ecx5 + 0xa0) = *reinterpret_cast<signed char*>(&ebp3);
    goto 0xf292;
}

void fun_5696() {
    goto 0x5020;
}

void cgi_kill(void** rdi, void** rsi) {
    int32_t eax3;
    void** r9_4;
    void** rax5;
    int32_t eax6;
    int64_t rax7;

    eax3 = fun_53f0();
    if (eax3 || (fun_5480(4, "killed CGI process %d", 4, "killed CGI process %d"), rax5 = tmr_create(rsi, 0xf830, rdi, 0x1388, 0, r9_4), !!rax5)) {
        return;
    } else {
        fun_5480(2, "tmr_create(cgi_kill2) failed", 2, "tmr_create(cgi_kill2) failed");
        fun_5620();
        eax6 = fun_53f0();
        if (!eax6) {
            goto fun_5480;
        } else {
            goto rax7;
        }
    }
}

void fun_56a6() {
    goto 0x5020;
}

void fun_fd67() {
    goto 0xfdd1;
}

void fun_51c6() {
    goto 0x5020;
}

void fun_5576() {
    goto 0x5020;
}

void fun_5206() {
    goto 0x5020;
}

void fun_54f6() {
    goto 0x5020;
}

struct s19 {
    signed char[32] pad32;
    int64_t f20;
};

/* tmr_timeout.timeout */
uint64_t tmr_timeout_timeout = 0;

uint64_t g1b768 = 0;

uint64_t tmr_timeout(int64_t* rdi) {
    int64_t rsi2;
    uint64_t r11_3;
    uint32_t r10d4;
    uint64_t rdx5;
    uint64_t rax6;
    uint64_t rdx7;

    *reinterpret_cast<int32_t*>(&rsi2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r11_3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_3) + 4) = 0;
    r10d4 = 0;
    do {
        if (*reinterpret_cast<struct s19**>(rsi2 + 0x1b530)) {
            rdx5 = (reinterpret_cast<int64_t>(__intrinsic()) >> 7) + (__intrinsic() >> 63) + ((*reinterpret_cast<struct s19**>(rsi2 + 0x1b530))->f20 - *rdi) * 0x3e8;
            if (r10d4) {
                if (reinterpret_cast<int64_t>(rdx5) < reinterpret_cast<int64_t>(r11_3)) {
                    r11_3 = rdx5;
                }
                r10d4 = 1;
            } else {
                r10d4 = 1;
                r11_3 = rdx5;
            }
        }
        rsi2 = rsi2 + 8;
    } while (rsi2 != 0x218);
    *reinterpret_cast<int32_t*>(&rax6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    if (reinterpret_cast<int64_t>(r11_3) < reinterpret_cast<int64_t>(0)) {
        r11_3 = 0;
    }
    if (r10d4) {
        rdx7 = (reinterpret_cast<int64_t>(__intrinsic()) >> 7) + (__intrinsic() >> 63);
        tmr_timeout_timeout = rdx7;
        rax6 = 0x1b760;
        g1b768 = ((reinterpret_cast<uint64_t>(rdi) - (reinterpret_cast<uint64_t>(rdi) + reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi) < reinterpret_cast<uint64_t>(rdi) + reinterpret_cast<uint1_t>(r10d4 < 1))) | r11_3) - rdx7 * 0x3e8) * 0x3e8;
    }
    return rax6;
}

void strlong_compare(int64_t rdi, int64_t rsi) {
    goto fun_5370;
}

void fun_5106() {
    goto 0x5020;
}

void fun_5246() {
    goto 0x5020;
}

void fun_5286() {
    goto 0x5020;
}

void fun_5186() {
    goto 0x5020;
}

void fun_5526() {
    goto 0x5020;
}

void fun_5556() {
    goto 0x5020;
}

void fun_5686() {
    goto 0x5020;
}

void fun_5566() {
    goto 0x5020;
}

int64_t handle_usr1(void** rdi, void** rsi, void** rdx, void** rcx, void** r8, void** r9) {
    int1_t zf7;
    uint32_t* rax8;
    uint32_t ebp9;
    int64_t rax10;

    zf7 = num_connects == 0;
    if (zf7) {
        shut_down(rdi, rsi, rdx, rcx, r8, r9);
        fun_5480(5, "exiting");
        fun_5060(5, "exiting");
        fun_5620();
        rax8 = fun_5090();
        ebp9 = *rax8;
        logstats(0, 0);
        *rax8 = ebp9;
        goto rax10;
    } else {
        got_usr1 = 1;
        return rax10;
    }
}

void fun_5086() {
    goto 0x5020;
}

void fun_5606() {
    goto 0x5020;
}

void fun_55d6() {
    goto 0x5020;
}

void fun_50a6() {
    goto 0x5020;
}

void fun_5076() {
    goto 0x5020;
}

void fun_5456() {
    goto 0x5020;
}

void fun_5466() {
    goto 0x5020;
}

void fun_5366() {
    goto 0x5020;
}

void fun_50c6() {
    goto 0x5020;
}

void fun_5426() {
    goto 0x5020;
}

void fun_54e6() {
    goto 0x5020;
}

void fun_5616() {
    goto 0x5020;
}

void fun_e6e4() {
    goto 0xe734;
}

void fun_53f6() {
    goto 0x5020;
}

void fun_fd73() {
    goto 0xfdd1;
}

void fun_56d6() {
    goto 0x5020;
}

void fun_5646() {
    goto 0x5020;
}

void fun_54c6() {
    goto 0x5020;
}

void fun_5506() {
    goto 0x5020;
}

void fun_e6eb() {
    goto 0xe734;
}

void fun_fd7f() {
    goto 0xfdd1;
}

void fun_e6f2() {
    void** rdi1;
    void** rcx2;
    void** rax3;

    rdi1 = ls_name;
    rax3 = fun_5150(rdi1, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x1b0, "me", rcx2);
    if (*reinterpret_cast<int32_t*>(&rax3) == -1) 
        goto 0xe73b;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + *reinterpret_cast<int32_t*>(&rax3) + 0x1b0) = 0;
    goto 0xe73b;
}

void fun_fd8b() {
    goto 0xfdd1;
}

