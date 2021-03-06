/* poppler-glib.vapi generated by vapigen, do not modify. */

namespace Poppler {
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_action_copy", type_id = "poppler_action_get_type ()")]
	[Compact]
	public class Action {
		public Poppler.ActionAny any;
		public Poppler.ActionGotoDest goto_dest;
		public Poppler.ActionGotoRemote goto_remote;
		public Poppler.ActionLaunch launch;
		public Poppler.ActionMovie movie;
		public Poppler.ActionNamed named;
		public Poppler.ActionType type;
		public Poppler.ActionUri uri;
		public Poppler.Action copy ();
	}
	[CCode (cheader_filename = "poppler.h")]
	public class Annot : GLib.Object {
		[CCode (has_construct_function = false)]
		protected Annot ();
		public Poppler.AnnotType get_annot_type ();
		public unowned Poppler.Color get_color ();
		public unowned string get_contents ();
		public Poppler.AnnotFlag get_flags ();
		public unowned string get_modified ();
		public unowned string get_name ();
		public void set_contents (string contents);
	}
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_annot_callout_line_copy", type_id = "poppler_annot_callout_line_get_type ()")]
	[Compact]
	public class AnnotCalloutLine {
		public bool multiline;
		public double x1;
		public double x2;
		public double x3;
		public double y1;
		public double y2;
		public double y3;
		[CCode (has_construct_function = false)]
		public AnnotCalloutLine ();
		public unowned Poppler.AnnotCalloutLine copy ();
	}
	[CCode (cheader_filename = "poppler.h")]
	public class AnnotFreeText : Poppler.AnnotMarkup {
		[CCode (has_construct_function = false)]
		protected AnnotFreeText ();
		public unowned Poppler.AnnotCalloutLine get_callout_line ();
		public Poppler.AnnotFreeTextQuadding get_quadding ();
	}
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_annot_mapping_copy", type_id = "poppler_annot_mapping_get_type ()")]
	[Compact]
	public class AnnotMapping {
		public weak Poppler.Annot annot;
		public Poppler.Rectangle area;
		[CCode (has_construct_function = false)]
		public AnnotMapping ();
		public unowned Poppler.AnnotMapping copy ();
	}
	[CCode (cheader_filename = "poppler.h")]
	public class AnnotMarkup : Poppler.Annot {
		[CCode (has_construct_function = false)]
		protected AnnotMarkup ();
		public GLib.Date get_date ();
		public Poppler.AnnotExternalDataType get_external_data ();
		public unowned string get_label ();
		public double get_opacity ();
		public bool get_popup_is_open ();
		public bool get_popup_rectangle (Poppler.Rectangle poppler_rect);
		public Poppler.AnnotMarkupReplyType get_reply_to ();
		public unowned string get_subject ();
		public bool has_popup ();
	}
	[CCode (cheader_filename = "poppler.h")]
	public class AnnotText : Poppler.AnnotMarkup {
		[CCode (has_construct_function = false)]
		protected AnnotText ();
		public unowned string get_icon ();
		public bool get_is_open ();
		public Poppler.AnnotTextState get_state ();
	}
	[CCode (cheader_filename = "poppler.h")]
	public class Attachment : GLib.Object {
		public weak GLib.StringBuilder checksum;
		public GLib.Time ctime;
		public weak string description;
		public GLib.Time mtime;
		public weak string name;
		public size_t size;
		[CCode (has_construct_function = false)]
		protected Attachment ();
		public bool save (string filename) throws GLib.Error;
		public bool save_to_callback (Poppler.AttachmentSaveFunc save_func) throws GLib.Error;
	}
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_color_copy", type_id = "poppler_color_get_type ()")]
	[Compact]
	public class Color {
		public uint16 blue;
		public uint16 green;
		public uint16 red;
		[CCode (has_construct_function = false)]
		public Color ();
		public unowned Poppler.Color copy ();
	}
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_dest_copy", type_id = "poppler_dest_get_type ()")]
	[Compact]
	public class Dest {
		public double bottom;
		public uint change_left;
		public uint change_top;
		public uint change_zoom;
		public double left;
		public weak string named_dest;
		public int page_num;
		public double right;
		public double top;
		public Poppler.DestType type;
		public double zoom;
		public Poppler.Dest copy ();
	}
	[CCode (cheader_filename = "poppler.h")]
	public class Document : GLib.Object {
		[CCode (has_construct_function = false)]
		protected Document ();
		public unowned Poppler.Dest find_dest (string link_name);
		[CCode (has_construct_function = false)]
		public Document.from_data (string data, int length, string password) throws GLib.Error;
		[CCode (has_construct_function = false)]
		public Document.from_file (string uri, string? password) throws GLib.Error;
		public unowned GLib.List get_attachments ();
		public unowned Poppler.FormField get_form_field (int id);
		public int get_n_pages ();
		public unowned Poppler.Page get_page (int index);
		public unowned Poppler.Page get_page_by_label (string label);
		public bool has_attachments ();
		public bool save (string uri) throws GLib.Error;
		public bool save_a_copy (string uri) throws GLib.Error;
		[NoAccessorMethod]
		public string author { owned get; }
		[NoAccessorMethod]
		public int creation_date { get; }
		[NoAccessorMethod]
		public string creator { owned get; }
		[NoAccessorMethod]
		public string format { owned get; }
		[NoAccessorMethod]
		public uint format_major { get; }
		[NoAccessorMethod]
		public uint format_minor { get; }
		[NoAccessorMethod]
		public string keywords { owned get; }
		[NoAccessorMethod]
		public string linearized { owned get; }
		[NoAccessorMethod]
		public string metadata { owned get; }
		[NoAccessorMethod]
		public int mod_date { get; }
		[NoAccessorMethod]
		public Poppler.PageLayout page_layout { get; }
		[NoAccessorMethod]
		public Poppler.PageMode page_mode { get; }
		[NoAccessorMethod]
		public Poppler.Permissions permissions { get; }
		[NoAccessorMethod]
		public string producer { owned get; }
		[NoAccessorMethod]
		public string subject { owned get; }
		[NoAccessorMethod]
		public string title { owned get; }
		[NoAccessorMethod]
		public Poppler.ViewerPreferences viewer_preferences { get; }
	}
	[CCode (cheader_filename = "poppler.h")]
	public class FontInfo : GLib.Object {
		[CCode (has_construct_function = false)]
		public FontInfo (Poppler.Document document);
		public void free ();
		public bool scan (int n_pages, out unowned Poppler.FontsIter iter);
	}
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_fonts_iter_copy", type_id = "poppler_fonts_iter_get_type ()")]
	[Compact]
	public class FontsIter {
		public Poppler.FontsIter copy ();
		public unowned string get_file_name ();
		public Poppler.FontType get_font_type ();
		public unowned string get_full_name ();
		public unowned string get_name ();
		public bool is_embedded ();
		public bool is_subset ();
		public bool next ();
	}
	[CCode (cheader_filename = "poppler.h")]
	public class FormField : GLib.Object {
		[CCode (has_construct_function = false)]
		protected FormField ();
		public Poppler.FormButtonType button_get_button_type ();
		public bool button_get_state ();
		public void button_set_state (bool state);
		public bool choice_can_select_multiple ();
		public bool choice_commit_on_change ();
		public bool choice_do_spell_check ();
		public Poppler.FormChoiceType choice_get_choice_type ();
		public unowned string choice_get_item (int index);
		public int choice_get_n_items ();
		public unowned string choice_get_text ();
		public bool choice_is_editable ();
		public bool choice_is_item_selected (int index);
		public void choice_select_item (int index);
		public void choice_set_text (string text);
		public void choice_toggle_item (int index);
		public void choice_unselect_all ();
		public Poppler.FormFieldType get_field_type ();
		public double get_font_size ();
		public int get_id ();
		public bool is_read_only ();
		public bool text_do_scroll ();
		public bool text_do_spell_check ();
		public int text_get_max_len ();
		public unowned string text_get_text ();
		public Poppler.FormTextType text_get_text_type ();
		public bool text_is_password ();
		public bool text_is_rich_text ();
		public void text_set_text (string text);
	}
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_form_field_mapping_copy", type_id = "poppler_form_field_mapping_get_type ()")]
	[Compact]
	public class FormFieldMapping {
		public Poppler.Rectangle area;
		public weak Poppler.FormField field;
		[CCode (has_construct_function = false)]
		public FormFieldMapping ();
		public Poppler.FormFieldMapping copy ();
	}
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_image_mapping_copy", type_id = "poppler_image_mapping_get_type ()")]
	[Compact]
	public class ImageMapping {
		public Poppler.Rectangle area;
		public int image_id;
		[CCode (has_construct_function = false)]
		public ImageMapping ();
		public Poppler.ImageMapping copy ();
	}
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_index_iter_copy", type_id = "poppler_index_iter_get_type ()")]
	[Compact]
	public class IndexIter {
		[CCode (has_construct_function = false)]
		public IndexIter (Poppler.Document document);
		public Poppler.IndexIter copy ();
		public unowned Poppler.Action get_action ();
		public unowned Poppler.IndexIter get_child ();
		public bool is_open ();
		public bool next ();
	}
	[CCode (cheader_filename = "poppler.h")]
	public class Layer : GLib.Object {
		[CCode (has_construct_function = false)]
		protected Layer ();
		public int get_radio_button_group_id ();
		public unowned string get_title ();
		public void hide ();
		public bool is_parent ();
		public bool is_visible ();
		public void show ();
	}
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_layers_iter_copy", type_id = "poppler_layers_iter_get_type ()")]
	[Compact]
	public class LayersIter {
		[CCode (has_construct_function = false)]
		public LayersIter (Poppler.Document document);
		public unowned Poppler.LayersIter copy ();
		public unowned Poppler.LayersIter get_child ();
		public unowned Poppler.Layer get_layer ();
		public unowned string get_title ();
		public bool next ();
	}
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_link_mapping_copy", type_id = "poppler_link_mapping_get_type ()")]
	[Compact]
	public class LinkMapping {
		public weak Poppler.Action action;
		public Poppler.Rectangle area;
		[CCode (has_construct_function = false)]
		public LinkMapping ();
		public Poppler.LinkMapping copy ();
	}
	[CCode (cheader_filename = "poppler.h")]
	public class PSFile : GLib.Object {
		[CCode (has_construct_function = false)]
		public PSFile (Poppler.Document document, string filename, int first_page, int n_pages);
		public void free ();
		public void set_duplex (bool duplex);
		public void set_paper_size (double width, double height);
	}
	[CCode (cheader_filename = "poppler.h")]
	public class Page : GLib.Object {
		[CCode (has_construct_function = false)]
		protected Page ();
		public unowned GLib.List find_text (string text);
		public static void free_annot_mapping (GLib.List list);
		public static void free_form_field_mapping (GLib.List list);
		public static void free_image_mapping (GLib.List list);
		public static void free_link_mapping (GLib.List list);
		public unowned GLib.List get_annot_mapping ();
		public void get_crop_box (out Poppler.Rectangle rect);
		public double get_duration ();
		public unowned GLib.List get_form_field_mapping ();
		public unowned Cairo.Surface get_image (int image_id);
		public unowned GLib.List get_image_mapping ();
		public int get_index ();
		public unowned GLib.List get_link_mapping ();
		public unowned GLib.List get_selection_region (double scale, Poppler.SelectionStyle style, Poppler.Rectangle selection);
		public void get_size (out double width, out double height);
		public unowned string get_text (Poppler.SelectionStyle style, Poppler.Rectangle rect);
		public unowned Cairo.Surface get_thumbnail ();
		public unowned Gdk.Pixbuf get_thumbnail_pixbuf ();
		public bool get_thumbnail_size (int width, int height);
		public unowned Poppler.PageTransition get_transition ();
		public void render (Cairo.Context cairo);
		public void render_for_printing (Cairo.Context cairo);
		public void render_selection (Cairo.Context cairo, Poppler.Rectangle selection, Poppler.Rectangle old_selection, Poppler.SelectionStyle style, Poppler.Color glyph_color, Poppler.Color background_color);
		public void render_selection_to_pixbuf (double scale, int rotation, Gdk.Pixbuf pixbuf, Poppler.Rectangle selection, Poppler.Rectangle old_selection, Poppler.SelectionStyle style, Gdk.Color glyph_color, Gdk.Color background_color);
		public void render_to_pixbuf (int src_x, int src_y, int src_width, int src_height, double scale, int rotation, Gdk.Pixbuf pixbuf);
		public void render_to_pixbuf_for_printing (int src_x, int src_y, int src_width, int src_height, double scale, int rotation, Gdk.Pixbuf pixbuf);
		public void render_to_ps (Poppler.PSFile ps_file);
		public static void selection_region_free (GLib.List region);
		[NoAccessorMethod]
		public string label { owned get; }
	}
	[CCode (cheader_filename = "poppler.h", copy_function = "poppler_page_transition_copy", type_id = "poppler_page_transition_get_type ()")]
	[Compact]
	public class PageTransition {
		public Poppler.PageTransitionAlignment alignment;
		public int angle;
		public Poppler.PageTransitionDirection direction;
		public int duration;
		public bool rectangular;
		public double scale;
		public Poppler.PageTransitionType type;
		[CCode (has_construct_function = false)]
		public PageTransition ();
		public Poppler.PageTransition copy ();
	}
	[CCode (cheader_filename = "poppler.h", has_type_id = false)]
	public struct ActionAny {
		public Poppler.ActionType type;
		public weak string title;
	}
	[CCode (cheader_filename = "poppler.h", has_type_id = false)]
	public struct ActionGotoDest {
		public Poppler.ActionType type;
		public weak string title;
		public weak Poppler.Dest dest;
	}
	[CCode (cheader_filename = "poppler.h", has_type_id = false)]
	public struct ActionGotoRemote {
		public Poppler.ActionType type;
		public weak string title;
		public weak string file_name;
		public weak Poppler.Dest dest;
	}
	[CCode (cheader_filename = "poppler.h", has_type_id = false)]
	public struct ActionLaunch {
		public Poppler.ActionType type;
		public weak string title;
		public weak string file_name;
		public weak string @params;
	}
	[CCode (cheader_filename = "poppler.h", has_type_id = false)]
	public struct ActionMovie {
		public Poppler.ActionType type;
		public weak string title;
	}
	[CCode (cheader_filename = "poppler.h", has_type_id = false)]
	public struct ActionNamed {
		public Poppler.ActionType type;
		public weak string title;
		public weak string named_dest;
	}
	[CCode (cheader_filename = "poppler.h", has_type_id = false)]
	public struct ActionUri {
		public Poppler.ActionType type;
		public weak string title;
		public weak string uri;
	}
	[CCode (cheader_filename = "poppler.h")]
	public struct Rectangle {
		public double x1;
		public double y1;
		public double x2;
		public double y2;
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_ACTION_")]
	public enum ActionType {
		UNKNOWN,
		NONE,
		GOTO_DEST,
		GOTO_REMOTE,
		LAUNCH,
		URI,
		NAMED,
		MOVIE
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_ANNOT_EXTERNAL_DATA_MARKUP_")]
	public enum AnnotExternalDataType {
		@3D,
		UNKNOWN
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_ANNOT_FLAG_")]
	[Flags]
	public enum AnnotFlag {
		UNKNOWN,
		INVISIBLE,
		HIDDEN,
		PRINT,
		NO_ZOOM,
		NO_ROTATE,
		NO_VIEW,
		READ_ONLY,
		LOCKED,
		TOGGLE_NO_VIEW,
		LOCKED_CONTENTS
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_ANNOT_FREE_TEXT_QUADDING_")]
	public enum AnnotFreeTextQuadding {
		LEFT_JUSTIFIED,
		CENTERED,
		RIGHT_JUSTIFIED
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_ANNOT_MARKUP_REPLY_TYPE_")]
	public enum AnnotMarkupReplyType {
		R,
		GROUP
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_ANNOT_TEXT_STATE_")]
	public enum AnnotTextState {
		MARKED,
		UNMARKED,
		ACCEPTED,
		REJECTED,
		CANCELLED,
		COMPLETED,
		NONE,
		UNKNOWN
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_ANNOT_")]
	public enum AnnotType {
		UNKNOWN,
		TEXT,
		LINK,
		FREE_TEXT,
		LINE,
		SQUARE,
		CIRCLE,
		POLYGON,
		POLY_LINE,
		HIGHLIGHT,
		UNDERLINE,
		SQUIGGLY,
		STRIKE_OUT,
		STAMP,
		CARET,
		INK,
		POPUP,
		FILE_ATTACHMENT,
		SOUND,
		MOVIE,
		WIDGET,
		SCREEN,
		PRINTER_MARK,
		TRAP_NET,
		WATERMARK,
		@3D
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_BACKEND_")]
	public enum Backend {
		UNKNOWN,
		SPLASH,
		CAIRO
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_DEST_")]
	public enum DestType {
		UNKNOWN,
		XYZ,
		FIT,
		FITH,
		FITV,
		FITR,
		FITB,
		FITBH,
		FITBV,
		NAMED
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_ERROR_")]
	public enum Error {
		INVALID,
		ENCRYPTED,
		OPEN_FILE,
		BAD_CATALOG,
		DAMAGED
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_FONT_TYPE_")]
	public enum FontType {
		UNKNOWN,
		TYPE1,
		TYPE1C,
		TYPE1COT,
		TYPE3,
		TRUETYPE,
		TRUETYPEOT,
		CID_TYPE0,
		CID_TYPE0C,
		CID_TYPE0COT,
		CID_TYPE2,
		CID_TYPE2OT
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_FORM_BUTTON_")]
	public enum FormButtonType {
		PUSH,
		CHECK,
		RADIO
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_FORM_CHOICE_")]
	public enum FormChoiceType {
		COMBO,
		LIST
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_FORM_FIELD_")]
	public enum FormFieldType {
		UNKNOWN,
		BUTTON,
		TEXT,
		CHOICE,
		SIGNATURE
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_FORM_TEXT_")]
	public enum FormTextType {
		NORMAL,
		MULTILINE,
		FILE_SELECT
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_ORIENTATION_")]
	public enum Orientation {
		PORTRAIT,
		LANDSCAPE,
		UPSIDEDOWN,
		SEASCAPE
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_PAGE_LAYOUT_")]
	public enum PageLayout {
		UNSET,
		SINGLE_PAGE,
		ONE_COLUMN,
		TWO_COLUMN_LEFT,
		TWO_COLUMN_RIGHT,
		TWO_PAGE_LEFT,
		TWO_PAGE_RIGHT
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_PAGE_MODE_")]
	public enum PageMode {
		UNSET,
		NONE,
		USE_OUTLINES,
		USE_THUMBS,
		FULL_SCREEN,
		USE_OC,
		USE_ATTACHMENTS
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_PAGE_TRANSITION_")]
	public enum PageTransitionAlignment {
		HORIZONTAL,
		VERTICAL
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_PAGE_TRANSITION_")]
	public enum PageTransitionDirection {
		INWARD,
		OUTWARD
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_PAGE_TRANSITION_")]
	public enum PageTransitionType {
		REPLACE,
		SPLIT,
		BLINDS,
		BOX,
		WIPE,
		DISSOLVE,
		GLITTER,
		FLY,
		PUSH,
		COVER,
		UNCOVER,
		FADE
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_PERMISSIONS_")]
	[Flags]
	public enum Permissions {
		OK_TO_PRINT,
		OK_TO_MODIFY,
		OK_TO_COPY,
		OK_TO_ADD_NOTES,
		OK_TO_FILL_FORM,
		FULL
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_SELECTION_")]
	public enum SelectionStyle {
		GLYPH,
		WORD,
		LINE
	}
	[CCode (cheader_filename = "poppler.h", cprefix = "POPPLER_VIEWER_PREFERENCES_")]
	[Flags]
	public enum ViewerPreferences {
		UNSET,
		HIDE_TOOLBAR,
		HIDE_MENUBAR,
		HIDE_WINDOWUI,
		FIT_WINDOW,
		CENTER_WINDOW,
		DISPLAY_DOC_TITLE,
		DIRECTION_RTL
	}
	[CCode (cheader_filename = "poppler.h", has_target = false)]
	public delegate bool AttachmentSaveFunc (string buf, size_t count, void* data) throws GLib.Error;
	[CCode (cheader_filename = "poppler.h")]
	public const int HAS_CAIRO;
	[CCode (cheader_filename = "poppler.h")]
	public const int MAJOR_VERSION;
	[CCode (cheader_filename = "poppler.h")]
	public const int MICRO_VERSION;
	[CCode (cheader_filename = "poppler.h")]
	public const int MINOR_VERSION;
	[CCode (cheader_filename = "poppler.h")]
	public const int WITH_GDK;
	[CCode (cheader_filename = "poppler.h")]
	public static bool date_parse (string date, ulong timet);
	[CCode (cheader_filename = "poppler.h")]
	public static GLib.Quark error_quark ();
	[CCode (cheader_filename = "poppler.h")]
	public static Poppler.Backend get_backend ();
	[CCode (cheader_filename = "poppler.h")]
	public static unowned string get_version ();
}
