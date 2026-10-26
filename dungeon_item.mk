
DUNGEONS_DIR = $(DATA_ASM_SUBDIR)/dungeon

DUNGEON_ITEM = $(DUNGEONS_DIR)/dungeon_item_data.inc

dungeon_item: $(DUNGEON_ITEM);

# Also depends on the generator: its item-id list (tools/dungeonjson/item_id_json.cpp)
# sets the encoded length, which must match NUMBER_OF_ITEM_IDS at runtime.
$(DUNGEON_ITEM): $(DUNGEONS_DIR)/dungeon_item_data.json $(DUNGEONJSON)
	$(DUNGEONJSON) dungeon_item pmd-red $<
