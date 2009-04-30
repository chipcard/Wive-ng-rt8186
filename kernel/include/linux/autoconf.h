/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED
#define CONFIG_MIPS 1
#define CONFIG_MIPS32 1

/*
 * Code maturity level options
 */
#undef  CONFIG_EXPERIMENTAL

/*
 * RTL8186 Software Package
 */
#define CONFIG_RTL8186_AP 1
#define CONFIG_NINO 1

/*
 * RTL Enchanched mode for NAT/VPN/BRIDGE/IPSEC
 */
#define DELAY_RX 1
#define CONFIG_DRIVER_SPEEDUP 1
#define BR_SHORTCUT 1
#define CONFIG_UCLINUX 1
#define FIXED_BOGOMIPS 1
#undef  CONFIG_RTL_IPSEC

/*
 * Wive-NG Tiny selection
 */
#undef  CONFIG_NO_PRINTK
#define CONFIG_ELF_CORE_OFF 1
#undef  CONFIG_PANIC_OFF
#undef  CONFIG_RTK_MTD_ROOT
#define CONFIG_RTK_MTD_PARTITION 1
#define CONFIG_RO_FS_MOUNT 1
#define CONFIG_RO_MOUNT_POINT "/mnt/sqsh_fs"
#undef  CONFIG_INIT_SINGLE
#define CONFIG_PROC_BOGOMIPS 1
#define CONFIG_PREEMPT_SOFTIRQS 1
#define CONFIG_HZ (100)
#define CONFIG_USERSPACE_WATCHDOG 1
#define CONFIG_PROC_LEDS 1

/*
 * Machine selection
 */
#define CONFIG_FPU_EMU 1
#define CONFIG_BOARD_SCACHE 1
#undef  CONFIG_RTL8181_WTDOG
#define CONFIG_RTL8181_GPIO 1
#undef  CONFIG_PCI
#undef  CONFIG_NEW_PCI
#define CONFIG_RWSEM_GENERIC_SPINLOCK 1
#undef  CONFIG_MCA
#undef  CONFIG_SBUS
#define CONFIG_NEW_IRQ 1
#define CONFIG_NEW_TIME_C 1
#define CONFIG_NONCOHERENT_IO 1
#undef  CONFIG_ISA
#undef  CONFIG_EISA

/*
 * CPU selection
 */
#define CONFIG_CPU_R3000 1
#undef  CONFIG_CPU_TX39XX
#undef  CONFIG_CPU_R6000
#undef  CONFIG_CPU_VR41XX
#undef  CONFIG_CPU_R4300
#undef  CONFIG_CPU_R4X00
#undef  CONFIG_CPU_TX49XX
#undef  CONFIG_CPU_R5000
#undef  CONFIG_CPU_R5432
#undef  CONFIG_CPU_RM7000
#undef  CONFIG_CPU_NEVADA
#undef  CONFIG_CPU_R10000
#undef  CONFIG_CPU_SB1
#undef  CONFIG_CPU_MIPS32
#undef  CONFIG_CPU_MIPS64
#undef  CONFIG_CPU_ADVANCED
#undef  CONFIG_CPU_HAS_LLSC
#undef  CONFIG_CPU_HAS_LLDSCD
#undef  CONFIG_CPU_HAS_WB

/*
 * Loadable module support
 */
#define CONFIG_MODULES 1
#undef  CONFIG_MODVERSIONS
#undef  CONFIG_KMOD

/*
 * General setup
 */
#undef  CONFIG_CPU_LITTLE_ENDIAN
#define CONFIG_KCORE_ELF 1
#define CONFIG_ELF_KERNEL 1
#undef  CONFIG_BINFMT_IRIX
#undef  CONFIG_FORWARD_KEYBOARD
#undef  CONFIG_BINFMT_AOUT
#define CONFIG_BINFMT_ELF 1
#undef  CONFIG_BINFMT_MISC
#undef  CONFIG_SYSVIPC
#undef  CONFIG_BSD_PROCESS_ACCT
#define CONFIG_SYSCTL 1
#define CONFIG_NET 1

/*
 * Networking options
 */
#define CONFIG_PACKET 1
#define CONFIG_PACKET_MMAP 1
#undef  CONFIG_NETLINK_DEV
#undef  CONFIG_NET_HW_FLOWCONTROL
#define CONFIG_NETFILTER 1
#undef  CONFIG_NETFILTER_DEBUG
#define CONFIG_FILTER 1
#define CONFIG_UNIX 1
#define CONFIG_INET 1
#define CONFIG_IP_MULTICAST 1
#define CONFIG_IP_ADVANCED_ROUTER 1
#define CONFIG_IP_MULTIPLE_TABLES 1
#define CONFIG_IP_ROUTE_FWMARK 1
#undef  CONFIG_IP_ROUTE_NAT
#undef  CONFIG_IP_ROUTE_MULTIPATH
#define CONFIG_IP_ROUTE_TOS 1
#undef  CONFIG_IP_ROUTE_VERBOSE
#define CONFIG_IP_ROUTE_LARGE_TABLES 1
#undef  CONFIG_IP_PNP
#undef  CONFIG_NET_IPIP
#undef  CONFIG_NET_IPGRE
#define CONFIG_IP_MROUTE 1
#define CONFIG_IP_PIMSM_V1 1
#define CONFIG_IP_PIMSM_V2 1
#define CONFIG_IP_IGMPV3 1
#define CONFIG_INET_ECN 1
#define CONFIG_SYN_COOKIES 1
#define CONFIG_TCP_WESTWOOD 1
#undef  CONFIG_TCP_WESTWOOD_STATS
#undef  CONFIG_TCP_WESTWOOD_DEBUG
#define CONFIG_IP_NMAP_FREAK_PATCH 1
#define CONFIG_IP_STEALTH 1

/*
 *   IP: Netfilter Configuration
 */
#define CONFIG_IP_NF_CONNTRACK 1
#define CONFIG_IP_NF_FTP 1
#undef  CONFIG_IP_NF_H323
#undef  CONFIG_IP_NF_AMANDA
#undef  CONFIG_IP_NF_TFTP
#define CONFIG_IP_NF_IRC 1
#undef  CONFIG_IP_NF_PPTP
#define CONFIG_IP_NF_PPTP_MODULE 1
#undef  CONFIG_IP_NF_PPTP_DEBUG
#define CONFIG_IP_NF_CT_PROTO_GRE 1
#define CONFIG_IP_NF_L2TP 1
#define CONFIG_IP_NF_IPSEC 1
#define CONFIG_IP_NF_SIP 1
#define CONFIG_IP_NF_LOOSEUDP 1
#undef  CONFIG_IP_NF_NAT_PPTP
#define CONFIG_IP_NF_NAT_PPTP_MODULE 1
#define CONFIG_IP_NF_NAT_PROTO_GRE 1
#define CONFIG_IP_NF_IPTABLES 1
#define CONFIG_IP_NF_MATCH_LIMIT 1
#define CONFIG_IP_NF_MATCH_IPRANGE 1
#define CONFIG_IP_NF_MATCH_MAC 1
#undef  CONFIG_IP_NF_MATCH_PKTTYPE
#define CONFIG_IP_NF_MATCH_MARK 1
#define CONFIG_IP_NF_MATCH_MULTIPORT 1
#define CONFIG_IP_NF_MATCH_TOS 1
#define CONFIG_IP_NF_MATCH_TIME 1
#undef  CONFIG_IP_NF_MATCH_RECENT
#undef  CONFIG_IP_NF_MATCH_ECN
#undef  CONFIG_IP_NF_MATCH_IPP2P
#undef  CONFIG_IP_NF_MATCH_DSCP
#undef  CONFIG_IP_NF_MATCH_AH_ESP
#undef  CONFIG_IP_NF_MATCH_LENGTH
#define CONFIG_IP_NF_MATCH_TTL 1
#define CONFIG_IP_NF_MATCH_TCPMSS 1
#undef  CONFIG_IP_NF_MATCH_HELPER
#define CONFIG_IP_NF_MATCH_STATE 1
#undef  CONFIG_IP_NF_MATCH_CONNTRACK
#define CONFIG_IP_NF_RAW 1
#define CONFIG_IP_NF_FILTER 1
#define CONFIG_IP_NF_TARGET_REJECT 1
#undef  CONFIG_IP_NF_TARGET_MIRROR
#define CONFIG_IP_NF_NAT 1
#define CONFIG_IP_NF_NAT_NEEDED 1
#define CONFIG_IP_NF_TARGET_MASQUERADE 1
#define CONFIG_IP_NF_TARGET_REDIRECT 1
#define CONFIG_IP_NF_NAT_L2TP 1
#define CONFIG_IP_NF_NAT_IPSEC 1
#define CONFIG_IP_NF_NAT_SIP 1
#define CONFIG_IP_NF_NAT_IRC 1
#define CONFIG_IP_NF_NAT_FTP 1
#define CONFIG_IP_NF_MANGLE 1
#define CONFIG_IP_NF_TARGET_NOTRACK 1
#define CONFIG_IP_NF_TARGET_TTL 1
#define CONFIG_IP_NF_TARGET_TOS 1
#define CONFIG_IP_NF_TARGET_ECN 1
#undef  CONFIG_IP_NF_TARGET_DSCP
#define CONFIG_IP_NF_TARGET_MARK 1
#define CONFIG_IP_NF_TARGET_LOG 1
#undef  CONFIG_IP_NF_TARGET_ULOG
#define CONFIG_IP_NF_TARGET_TCPMSS 1
#undef  CONFIG_IP_NF_TARGET_TRIGGER
#undef  CONFIG_IP_NF_ARPTABLES
#undef  CONFIG_IP_CONNTRACK_GARBAGE_NEW

/*
 * Network options 
 */
#undef  CONFIG_VLAN_8021Q
#define CONFIG_VLAN_8021Q_MODULE 1
#undef  CONFIG_BRIDGE
#define CONFIG_BRIDGE_MODULE 1
#define MULTICAST_FILTER 1
#define MULTICAST_BWCTRL 1
#define RTL_BRIDGE_MAC_CLONE 1
#define MCAST_TO_UNICAST 1
#define IGMP_SNOOPING 1
#undef  CONFIG_IGMP_PROXY_DBG

/*
 * QoS and/or fair queueing
 */
#define CONFIG_NET_SCHED 1
#define CONFIG_NET_SCH_CBQ 1
#define CONFIG_NET_SCH_HTB 1
#undef  CONFIG_NET_SCH_CSZ
#define CONFIG_NET_SCH_CSZ_MODULE 1
#undef  CONFIG_NET_SCH_HFSC
#define CONFIG_NET_SCH_PRIO 1
#undef  CONFIG_NET_SCH_RED
#define CONFIG_NET_SCH_RED_MODULE 1
#define CONFIG_NET_SCH_SFQ 1
#undef  CONFIG_NET_SCH_TEQL
#undef  CONFIG_NET_SCH_TBF
#define CONFIG_NET_SCH_GRED 1
#undef  CONFIG_NET_SCH_DELAY
#undef  CONFIG_NET_SCH_DSMARK
#define CONFIG_NET_SCH_INGRESS 1
#define CONFIG_NET_QOS 1
#define CONFIG_NET_ESTIMATOR 1
#define CONFIG_NET_CLS 1
#define CONFIG_NET_CLS_TCINDEX 1
#define CONFIG_NET_CLS_ROUTE4 1
#define CONFIG_NET_CLS_ROUTE 1
#define CONFIG_NET_CLS_FW 1
#define CONFIG_NET_CLS_U32 1
#define CONFIG_NET_CLS_RSVP 1
#undef  CONFIG_NET_CLS_RSVP6
#define CONFIG_NET_CLS_POLICE 1

/*
 * File systems
 */
#define CONFIG_DEVFS_FS 1
#undef  CONFIG_DEVFS_MOUNT
#undef  CONFIG_DEVFS_DEBUG
#undef  CONFIG_QUOTA
#define CONFIG_AUTOFS_FS 1
#undef  CONFIG_AUTOFS4_FS
#undef  CONFIG_REISERFS_FS
#undef  CONFIG_REISERFS_CHECK
#undef  CONFIG_REISERFS_PROC_INFO
#undef  CONFIG_ADFS_FS
#undef  CONFIG_ADFS_FS_RW
#undef  CONFIG_AFFS_FS
#undef  CONFIG_HFS_FS
#undef  CONFIG_BFS_FS
#define CONFIG_EXT2_FS 1
#undef  CONFIG_EXT3_FS
#undef  CONFIG_JBD
#undef  CONFIG_JBD_DEBUG
#undef  CONFIG_FAT_FS
#undef  CONFIG_MSDOS_FS
#undef  CONFIG_UMSDOS_FS
#undef  CONFIG_VFAT_FS
#undef  CONFIG_EFS_FS
#undef  CONFIG_JFFS_FS
#undef  CONFIG_JFFS2_FS
#undef  CONFIG_CRAMFS
#define CONFIG_SQUASHFS 1
#undef  CONFIG_TMPFS
#define CONFIG_RAMFS 1
#undef  CONFIG_ISO9660_FS
#undef  CONFIG_JOLIET
#undef  CONFIG_ZISOFS
#undef  CONFIG_MINIX_FS
#undef  CONFIG_VXFS_FS
#undef  CONFIG_NTFS_FS
#undef  CONFIG_NTFS_RW
#undef  CONFIG_HPFS_FS
#define CONFIG_PROC_FS 1
#define CONFIG_DEVPTS_FS 1
#undef  CONFIG_QNX4FS_FS
#undef  CONFIG_QNX4FS_RW
#undef  CONFIG_ROMFS_FS
#undef  CONFIG_SYSV_FS
#undef  CONFIG_UDF_FS
#undef  CONFIG_UDF_RW
#undef  CONFIG_UFS_FS
#undef  CONFIG_UFS_FS_WRITE

/*
 * Network File Systems
 */
#undef  CONFIG_CODA_FS
#undef  CONFIG_INTERMEZZO_FS
#undef  CONFIG_NFS_FS
#undef  CONFIG_NFS_V3
#undef  CONFIG_NFS_DIRECTIO
#undef  CONFIG_ROOT_NFS
#undef  CONFIG_NFSD
#undef  CONFIG_NFSD_V3
#undef  CONFIG_NFSD_TCP
#undef  CONFIG_SUNRPC
#undef  CONFIG_LOCKD
#undef  CONFIG_CIFS
#define CONFIG_CIFS_MODULE 1
#undef  CONFIG_SMB_FS
#undef  CONFIG_NCP_FS
#undef  CONFIG_NCPFS_PACKET_SIGNING
#undef  CONFIG_NCPFS_IOCTL_LOCKING
#undef  CONFIG_NCPFS_STRONG
#undef  CONFIG_NCPFS_NFS_NS
#undef  CONFIG_NCPFS_OS2_NS
#undef  CONFIG_NCPFS_SMALLDOS
#undef  CONFIG_NCPFS_NLS
#undef  CONFIG_NCPFS_EXTRAS
#undef  CONFIG_ZISOFS_FS
#define CONFIG_ZLIB_FS_INFLATE 1

/*
 * Partition Types
 */
#define CONFIG_PARTITION_ADVANCED 1
#undef  CONFIG_ACORN_PARTITION
#undef  CONFIG_OSF_PARTITION
#undef  CONFIG_AMIGA_PARTITION
#undef  CONFIG_ATARI_PARTITION
#undef  CONFIG_MAC_PARTITION
#define CONFIG_MSDOS_PARTITION 1
#undef  CONFIG_BSD_DISKLABEL
#undef  CONFIG_MINIX_SUBPARTITION
#undef  CONFIG_SOLARIS_X86_PARTITION
#undef  CONFIG_UNIXWARE_DISKLABEL
#undef  CONFIG_LDM_PARTITION
#undef  CONFIG_SGI_PARTITION
#undef  CONFIG_ULTRIX_PARTITION
#undef  CONFIG_SUN_PARTITION
#undef  CONFIG_SMB_NLS
#define CONFIG_NLS 1

/*
 * Native Language Support
 */
#define CONFIG_NLS_DEFAULT "utf8"
#undef  CONFIG_NLS_CODEPAGE_437
#undef  CONFIG_NLS_CODEPAGE_737
#undef  CONFIG_NLS_CODEPAGE_775
#undef  CONFIG_NLS_CODEPAGE_850
#undef  CONFIG_NLS_CODEPAGE_852
#undef  CONFIG_NLS_CODEPAGE_855
#undef  CONFIG_NLS_CODEPAGE_857
#undef  CONFIG_NLS_CODEPAGE_860
#undef  CONFIG_NLS_CODEPAGE_861
#undef  CONFIG_NLS_CODEPAGE_862
#undef  CONFIG_NLS_CODEPAGE_863
#undef  CONFIG_NLS_CODEPAGE_864
#undef  CONFIG_NLS_CODEPAGE_865
#define CONFIG_NLS_CODEPAGE_866 1
#undef  CONFIG_NLS_CODEPAGE_869
#undef  CONFIG_NLS_CODEPAGE_936
#undef  CONFIG_NLS_CODEPAGE_950
#undef  CONFIG_NLS_CODEPAGE_932
#undef  CONFIG_NLS_CODEPAGE_949
#undef  CONFIG_NLS_CODEPAGE_874
#undef  CONFIG_NLS_ISO8859_8
#undef  CONFIG_NLS_CODEPAGE_1250
#undef  CONFIG_NLS_CODEPAGE_1251
#undef  CONFIG_NLS_ISO8859_1
#undef  CONFIG_NLS_ISO8859_2
#undef  CONFIG_NLS_ISO8859_3
#undef  CONFIG_NLS_ISO8859_4
#undef  CONFIG_NLS_ISO8859_5
#undef  CONFIG_NLS_ISO8859_6
#undef  CONFIG_NLS_ISO8859_7
#undef  CONFIG_NLS_ISO8859_9
#undef  CONFIG_NLS_ISO8859_13
#undef  CONFIG_NLS_ISO8859_14
#undef  CONFIG_NLS_ISO8859_15
#undef  CONFIG_NLS_KOI8_R
#undef  CONFIG_NLS_KOI8_U
#define CONFIG_NLS_UTF8 1

/*
 * Cryptography support (CryptoAPI)
 */
#undef  CONFIG_CRYPTO
#undef  CONFIG_CIPHERS
#undef  CONFIG_CRYPTODEV
#undef  CONFIG_CRYPTOLOOP

/*
 * Library routines
 */
#undef  CONFIG_CRC32
#define CONFIG_ZLIB_INFLATE 1
#undef  CONFIG_ZLIB_DEFLATE

/*
 * Memory Technology Devices (MTD)
 */
#define CONFIG_MTD 1
#undef  CONFIG_MTD_DEBUG
#define NO_CHECK_REGION 1
#define CONFIG_MTD_PARTITIONS 1
#define CONFIG_MTD_TRUE_ROOT 1
#undef  CONFIG_MTD_TRUE_ROOT_4JFFS
#undef  CONFIG_MTD_REDBOOT_PARTS

/*
 * User Modules And Translation Layers
 */
#undef  CONFIG_MTD_CHAR
#define CONFIG_MTD_BLOCK 1
#undef  CONFIG_FTL
#undef  CONFIG_NFTL

/*
 * RAM/ROM/Flash chip drivers
 */
#undef  CONFIG_MTD_CFI
#undef  CONFIG_MTD_JEDECPROBE
#undef  CONFIG_MTD_GEN_PROBE
#undef  CONFIG_MTD_CFI_INTELEXT
#undef  CONFIG_MTD_CFI_AMDSTD
#undef  CONFIG_MTD_RAM
#undef  CONFIG_MTD_ROM
#undef  CONFIG_MTD_ABSENT
#undef  CONFIG_MTD_OBSOLETE_CHIPS
#undef  CONFIG_MTD_AMDSTD
#undef  CONFIG_MTD_SHARP
#undef  CONFIG_MTD_JEDEC

/*
 * Mapping drivers for chip access
 */
#undef  CONFIG_MTD_PHYSMAP
#undef  CONFIG_MTD_PB1000
#undef  CONFIG_MTD_PB1500
#undef  CONFIG_MTD_CSTM_MIPS_IXX
#undef  CONFIG_MTD_OCELOT

/*
 * Self-contained MTD device drivers
 */
#undef  CONFIG_MTD_PMC551
#undef  CONFIG_MTD_SLRAM
#undef  CONFIG_MTD_MTDRAM
#undef  CONFIG_MTD_BLKMTD

/*
 * Disk-On-Chip Device Drivers
 */
#undef  CONFIG_MTD_DOC1000
#undef  CONFIG_MTD_DOC2000
#define CONFIG_MTD_DOC2001 1
#define CONFIG_MTD_DOCPROBE 1
#define CONFIG_MTD_DOCPROBE_ADVANCED 1
#define CONFIG_MTD_DOCPROBE_ADDRESS 0x6000
#undef  CONFIG_MTD_DOCPROBE_HIGH
#undef  CONFIG_MTD_DOCPROBE_55AA

/*
 * NAND Flash Device Drivers
 */
#undef  CONFIG_MTD_NAND

/*
 * Block devices
 */
#undef  CONFIG_MMC_JTAG
#define CONFIG_MMC_JTAG_MODULE 1
#undef  CONFIG_BLK_DEV_FD
#undef  CONFIG_BLK_DEV_XD
#undef  CONFIG_PARIDE
#undef  CONFIG_BLK_CPQ_DA
#undef  CONFIG_BLK_CPQ_CISS_DA
#undef  CONFIG_BLK_DEV_DAC960
#undef  CONFIG_BLK_DEV_LOOP
#undef  CONFIG_BLK_DEV_NBD
#define CONFIG_BLK_DEV_RAM 1
#define CONFIG_BLK_DEV_RAM_SIZE (1024)
#define CONFIG_BLK_DEV_INITRD 1
#define CONFIG_LOAD_COMPRESSED_RAMDISK 1

/*
 * MIPS initrd options
 */
#define CONFIG_EMBEDDED_RAMDISK 1

/*
 * Character devices
 */
#undef  CONFIG_VT
#define CONFIG_SERIAL 1
#define CONFIG_SERIAL_CONSOLE 1
#undef  CONFIG_RTK_I2C
#undef  CONFIG_SERIAL_EXTENDED
#define CONFIG_SERIAL_NONSTANDARD 1
#undef  CONFIG_COMPUTONE
#undef  CONFIG_ROCKETPORT
#undef  CONFIG_CYCLADES
#undef  CONFIG_DIGIEPCA
#undef  CONFIG_DIGI
#undef  CONFIG_ESPSERIAL
#undef  CONFIG_MOXA_INTELLIO
#undef  CONFIG_MOXA_SMARTIO
#undef  CONFIG_SYNCLINK
#undef  CONFIG_N_HDLC
#undef  CONFIG_RISCOM8
#undef  CONFIG_SPECIALIX
#undef  CONFIG_SX
#undef  CONFIG_RIO
#undef  CONFIG_STALDRV
#undef  CONFIG_SERIAL_TX3912
#undef  CONFIG_SERIAL_TX3912_CONSOLE
#undef  CONFIG_AU1000_UART
#undef  CONFIG_TXX927_SERIAL
#define CONFIG_UNIX98_PTYS 1
#define CONFIG_UNIX98_PTY_COUNT (64)
#undef  CONFIG_PRINTER
#undef  CONFIG_PPDEV
#undef  CONFIG_INTEL_RNG
#undef  CONFIG_NVRAM
#undef  CONFIG_RTC
#undef  CONFIG_DTLK
#undef  CONFIG_R3964
#undef  CONFIG_APPLICOM

/*
 * Network device support
 */
#define CONFIG_NETDEVICES 1

/*
 * Wan interfaces
 */
#undef  CONFIG_WAN

/*
 * Wireless LAN (non-hamradio)
 */
#define CONFIG_NET_RADIO 1
#define CONFIG_NET_WIRELESS_AG 1
#undef  CONFIG_DUMMY
#undef  CONFIG_BONDING
#undef  CONFIG_EQUALIZER
#undef  CONFIG_TUN

/*
 * Ethernet (10 or 100Mbit)
 */
#define CONFIG_NET_ETHERNET 1

/*
 * Select either RTL8186
 */
#define CONFIG_RTL8186 1
#define VLAN_QOS 1
#define RTL8186_CHECKSUM_OFFLOAD 1
#define CONFIG_NET_RANDOM 1

/*
 * Select switch mode
 */
#define CONFIG_EXT_SWITCH 1
#define PATCH_8306_SW 1
#undef  CONFIG_RE8305
#define CONFIG_RE8306 1
#define CONFIG_RE8306_API 1
#define PATCH_8306_CTRL_LED_BY_CPU 1
#define CONFIG_BICOLOR_LED 1

/*
 * Select SoC debug mode
 */
#undef  CONFIG_RTL8186_ETH_DEBUG
#undef  CONFIG_SWITCH_DEBUG_MODE
#undef  CONFIG_RTL8186_QOS_DEBUG

/*
 * Other devices
 */
#undef  CONFIG_SUNLANCE
#undef  CONFIG_SUNBMAC
#undef  CONFIG_SUNQE
#undef  CONFIG_SUNGEM
#undef  CONFIG_NET_VENDOR_3COM
#undef  CONFIG_LANCE
#undef  CONFIG_NET_VENDOR_SMC
#undef  CONFIG_NET_VENDOR_RACAL
#undef  CONFIG_NET_ISA
#undef  CONFIG_NET_PCI
#undef  CONFIG_NET_POCKET
#undef  CONFIG_FDDI
#undef  CONFIG_PLIP
#define CONFIG_PPP 1
#undef  CONFIG_PPP_MULTILINK
#undef  CONFIG_PPP_FILTER
#define CONFIG_PPP_ASYNC 1
#undef  CONFIG_PPP_SYNC_TTY
#undef  CONFIG_PPP_DEFLATE
#undef  CONFIG_PPP_BSDCOMP
#define CONFIG_PPPOE 1
#define CONFIG_L2TP 1
#define CONFIG_PPTP 1
#undef  CONFIG_PPP_MPPE
#define CONFIG_PPP_MPPE_MODULE 1
#undef  CONFIG_PPP_DEBUG
#undef  CONFIG_PPPOATM
#undef  CONFIG_SLIP
#undef  CONFIG_NET_FC

/*
 * Kernel hacking
 */
#define CONFIG_CROSSCOMPILE 1
#undef  CONFIG_REMOTE_DEBUG
#undef  CONFIG_GDB_CONSOLE
#undef  CONFIG_DEBUG
#undef  CONFIG_MAGIC_SYSRQ
#undef  CONFIG_MIPS_UNCACHED
