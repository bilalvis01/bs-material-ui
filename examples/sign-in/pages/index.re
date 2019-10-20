open MUI;

module Copyright = {
  [@react.component]
  let make = () => {
    <Typography variant="body2" color="textSecondary" align="center">
      {React.string("Copyright @")}
      <Link color="inherit" href="https://github.com/bilalvis01/bs-material-ui">
       {React.string(" Bilal Visual Digital ")}
      </Link>
      {Js.Date.make()
        ->Js.Date.getFullYear
        ->Belt.Float.toString
        ->React.string}
      {React.string(".")}
    </Typography>
  };
};

[@bs.deriving abstract]
type globalStyles('a) = {
  body: 'a,
};


[@bs.deriving abstract]
type styles('a) = {
  [@bs.as "@global"] global: globalStyles('a),
  paper: 'a,
  avatar: 'a,
  form: 'a,
  submit: 'a,
};

module StylesHook = MUIStylesHook.Make({
  type theme = MUITheme.t;
  type props = unit;
  type nonrec styles('a) = styles('a);
});

let useStyles = StylesHook.make(theme => {
  styles(
    ~global=globalStyles(
      ~body=_ => MUIStyle.(make([
        backgroundColor(MUITheme.(getPalette(theme)->Palette.getCommon->Common.getWhite))
      ]))
    ),
    ~paper=_ => MUIStyle.(make([
      marginTop(MUITheme.spacing1(theme, 8)->string_of_int ++ "px"),
      display("flex"),
      flexDirection("column"),
      alignItems("center"),
    ])),
    ~avatar=_ => MUIStyle.(make([
      margin(MUITheme.spacing1(theme, 1)->string_of_int ++ "px"),
      backgroundColor(MUITheme.(getPalette(theme)->Palette.getSecondary->Simple.getMain)),
    ])),
    ~form=_ => MUIStyle.(make([
      width("100%"),
      marginTop(MUITheme.spacing1(theme, 1)->string_of_int ++ "px"),
    ])),
    ~submit=_ => MUIStyle.(make([
      margin(MUITheme.spacing3(theme, 3, 0, 2)),
    ])),
  )
});

[@react.component]
let make = () => {
  let classes = useStyles();

  <Container component="main" maxWidth="xs">
    <div className=paperGet(classes)>
      <Avatar className=avatarGet(classes)>
      </Avatar>
      <Typography component="h1" variant="h5">
        {React.string("Sign in")}
      </Typography>
      <form className=formGet(classes) noValidate=true>
        <TextField
          variant="outlined"
          margin="normal"
          required=true
          fullWidth=true
          id="email"
          label=React.string("Email Address")
          name="email"
          autoComplete="email"
          autoFocus=true
        />
        <TextField 
          variant="outlined"
          margin="normal"
          required=true
          fullWidth=true
          name="password"
          label=React.string("password")
          _type="password"
          id="password"
          autoComplete="current-password"
        />
        <FormControlLabel
          control={<Checkbox value="remember" color="primary" />}
          label=React.string("Remember me")
        />
        <Button
          _type="submit"
          fullWidth=true
          variant="contained"
          color="primary"
          className=submitGet(classes)
        >
         {React.string("Sign In")}
        </Button>
        <Grid container=true>
          <Grid item=true xs=Grid.Size.on>
            <Link href="#" variant="body2">
              {React.string("Forgot password")}
            </Link>
          </Grid>
          <Grid item=true xs=Grid.Size.on>
            <Link href="#" variant="body2">
              {React.string("Don't have an account? Sign Up")}
            </Link>
          </Grid>
        </Grid>
      </form>
    </div>
    <Box mt="8">
      <Copyright />
    </Box>
  </Container>
};