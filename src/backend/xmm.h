// XMM opcodes

enum
{
    XMM_ADDSS = 0xF30F58,
    XMM_ADDSD = 0xF20F58,
    XMM_ADDPS = 0x000F58,
    XMM_ADDPD = 0x660F58,
    XMM_PADDB = 0x660FFC,
    XMM_PADDW = 0x660FFD,
    XMM_PADDD = 0x660FFE,
    XMM_PADDQ = 0x660FD4,

    XMM_SUBSS = 0xF30F5C,
    XMM_SUBSD = 0xF20F5C,
    XMM_SUBPS = 0x000F5C,
    XMM_SUBPD = 0x660F5C,
    XMM_PSUBB = 0x660FF8,
    XMM_PSUBW = 0x660FF9,
    XMM_PSUBD = 0x660FFA,
    XMM_PSUBQ = 0x660FDB,

    XMM_MULSS = 0xF30F59,
    XMM_MULSD = 0xF20F59,
    XMM_MULPS = 0x000F59,
    XMM_MULPD = 0x660F59,
    XMM_PMULW = 0x660FD5,

    XMM_DIVSS = 0xF30F5E,
    XMM_DIVSD = 0xF20F5E,
    XMM_DIVPS = 0x000F5E,
    XMM_DIVPD = 0x660F5E,

    XMM_PAND  = 0x660FDB,
    XMM_POR   = 0x660FEB,

    XMM_UCOMISS = 0x000F2E,
    XMM_UCOMISD = 0x660F2E,

    XMM_XORPS = 0x000F57,
    XMM_XORPD = 0x660F57,

    // Use STO and LOD instead of MOV to distinguish the direction
    XMM_STOSS  = 0xF30F11,      // MOVSS
    XMM_STOSD  = 0xF20F11,
    XMM_STOAPS = 0x000F29,
    XMM_STOAPD = 0x660F29,
    XMM_STODQA = 0x000F29,
    XMM_STOD   = 0x660F7E,

    XMM_LODSS  = 0xF30F10,      // MOVSS
    XMM_LODSD  = 0xF20F10,
    XMM_LODAPS = 0x000F28,
    XMM_LODAPD = 0x660F28,
    XMM_LODDQA = 0x660F6F,
    XMM_LODD   = 0x660F6E,
};
