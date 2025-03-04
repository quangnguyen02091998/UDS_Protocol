# :beers: UDS_SecurityAccess <a title="Hits" target="_blank" href="https://github.com/SummerFalls/UDS_SecurityAccess"><img src="https://hits.b3log.org/SummerFalls/UDS_SecurityAccess.svg"></a>

```c
/*
 *          ___           ___                    ___                         ___           ___           ___                                   ___           ___
 *         /  /\         /  /\                  /  /\                       /  /\         /  /\         /  /\        ___           ___        /__/\         /__/\
 *        /  /:/_       /  /::\                /  /::\                     /  /:/_       /  /::\       /  /::\      /  /\         /  /\       \  \:\       |  |::\
 *       /  /:/ /\     /  /:/\:\              /  /:/\:\    ___     ___    /  /:/ /\     /  /:/\:\     /  /:/\:\    /  /:/        /  /:/        \__\:\      |  |:|:\
 *      /  /:/ /::\   /  /:/~/::\            /  /:/~/::\  /__/\   /  /\  /  /:/_/::\   /  /:/  \:\   /  /:/~/:/   /__/::\       /  /:/     ___ /  /::\   __|__|:|\:\
 *     /__/:/ /:/\:\ /__/:/ /:/\:\          /__/:/ /:/\:\ \  \:\ /  /:/ /__/:/__\/\:\ /__/:/ \__\:\ /__/:/ /:/___ \__\/\:\__   /  /::\    /__/\  /:/\:\ /__/::::| \:\
 *     \  \:\/:/~/:/ \  \:\/:/__\/          \  \:\/:/__\/  \  \:\  /:/  \  \:\ /~~/:/ \  \:\ /  /:/ \  \:\/:::::/    \  \:\/\ /__/:/\:\   \  \:\/:/__\/ \  \:\~~\__\/
 *      \  \::/ /:/   \  \::/                \  \::/        \  \:\/:/    \  \:\  /:/   \  \:\  /:/   \  \::/~~~~      \__\::/ \__\/  \:\   \  \::/       \  \:\
 *       \__\/ /:/     \  \:\                 \  \:\         \  \::/      \  \:\/:/     \  \:\/:/     \  \:\          /__/:/       \  \:\   \  \:\        \  \:\
 *         /__/:/       \  \:\                 \  \:\         \__\/        \  \::/       \  \::/       \  \:\         \__\/         \__\/    \  \:\        \  \:\
 *         \__\/         \__\/                  \__\/                       \__\/         \__\/         \__\/                                 \__\/         \__\/
 */
```

## :book: 简介

UDS 0x27 Security Access Algorithm DLL for `ZLG ZCANPRO`, `CANoe`, `ETS`, `Vehicle Spy3`

S32K1xx 的 CAN 接 `周立功 USBCANFD-100U-mini`，使用 `ZCANPRO` 软件的 `ECU刷新` 功能进行测试。在加载相应的安全访问算法 DLL 文件 :package: [UDS_SecurityAccess][UDS_SecurityAccess] 之后，通过相应的 UDS 服务将 :package: [UDS_S32K144_FlashDriver][UDS_S32K144_FlashDriver] 的 hex 文件下载至 :package: [UDS_S32K144_Bootloader][UDS_S32K144_Bootloader] 在链接文件中为其预先指定起始地址的 RAM 空间中，并通过 `Flash Driver` 内实际包含的相应的 Flash 驱动函数的相对偏移量以及驱动函数本身来计算相应驱动函数的入口点在 RAM 内的偏移地址后，再通过函数指针的方式调用相应的编程、擦写、校验等 `Flash API` 以实现将 :package: [UDS_S32K144_APP][UDS_S32K144_APP] 烧写至 Flash 的 APP 片区，最终实现 `ECU刷新` 的整个 APP 更新流程。

![Pic_ZCANPRO_ECU_Refresh][Pic_ZCANPRO_ECU_Refresh]

## :link: 关联工程

- :package: [UDS_SecurityAccess][UDS_SecurityAccess]
- :package: [UDS_S32K144_Bootloader][UDS_S32K144_Bootloader]
- :package: [UDS_S32K144_FlashDriver][UDS_S32K144_FlashDriver]
- :package: [UDS_S32K144_APP][UDS_S32K144_APP]

[Pic_ZCANPRO_ECU_Refresh]: ./Pic_ZCANPRO_ECU_Refresh.png

[UDS_SecurityAccess]: https://github.com/SummerFalls/UDS_SecurityAccess
[UDS_S32K144_Bootloader]: https://github.com/SummerFalls/UDS_S32K144_Bootloader
[UDS_S32K144_FlashDriver]: https://github.com/SummerFalls/UDS_S32K144_FlashDriver
[UDS_S32K144_APP]: https://github.com/SummerFalls/UDS_S32K144_APP
