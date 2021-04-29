DOXYFILE_NAME = SeatHeatControl
BUILD_FILE = html

FixPath = $(subst /,\,$1)

doc:
	doxygen ./$(DOXYFILE_NAME)

clean:
	rm -rf $(call FixPath,$(BUILD_FILE)/*)
