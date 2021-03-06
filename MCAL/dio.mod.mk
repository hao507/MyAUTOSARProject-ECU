DIO_MCAL_MODULE:=Dio_TS_${MCAL_VERSION}

# Static MCAL impmentation done by Freescale
inc-y += $(MCAL_PLUGINS_PATH)/$(DIO_MCAL_MODULE)/include
vpath-y += $(MCAL_PLUGINS_PATH)/$(DIO_MCAL_MODULE)/src
obj-y += $(patsubst %.c,%.o,$(notdir $(wildcard $(MCAL_PLUGINS_PATH)/$(DIO_MCAL_MODULE)/src/*.c)))
obj-y += Dio_Cfg.o