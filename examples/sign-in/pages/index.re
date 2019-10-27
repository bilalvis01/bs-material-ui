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

module Styles = {
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
  include MUIStyles.StylesHook.Make({
    type theme = MUIStyles.Theme.t;
    type props = unit;
    type nonrec styles('a) = styles('a);
    let options = None;
    let styles = theme => {
      styles(
        ~global=globalStyles(
          ~body=() => MUIStyles.Style.(make([
            backgroundColor(MUIStyles.Theme.(getPalette(theme)->Palette.getCommon->Common.getWhite))
          ]))
        ),
        ~paper=() => MUIStyles.Style.(make([
          marginTop(MUIStyles.Theme.spacing1(theme, 8)->string_of_int ++ "px"),
          display("flex"),
          flexDirection("column"),
          alignItems("center"),
        ])),
        ~avatar=() => MUIStyles.Style.(make([
          margin(MUIStyles.Theme.spacing1(theme, 1)->string_of_int ++ "px"),
          backgroundColor(MUIStyles.Theme.(getPalette(theme)->Palette.getSecondary->Simple.getMain)),
        ])),
        ~form=() => MUIStyles.Style.(make([
          width("100%"),
          marginTop(MUIStyles.Theme.spacing1(theme, 1)->string_of_int ++ "px"),
        ])),
        ~submit=() => MUIStyles.Style.(make([
          margin(MUIStyles.Theme.spacing3(theme, 3, 0, 2)),
        ])),
      )
    }
  });
};

[@react.component]
let make = () => {
  let classes = Styles.useStyles();

  <Container component="main" maxWidth="xs">
    <div className=Styles.paperGet(classes)>
      <Avatar className=Styles.avatarGet(classes)>
      </Avatar>
      <Typography component="h1" variant="h5">
        {React.string("Sign in")}
      </Typography>
      <form className=Styles.formGet(classes) noValidate=true>
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
          className=Styles.submitGet(classes)
        >
         {React.string("Sign In")}
        </Button>
        <Grid container=true>
          <Grid item=true xs=Grid.GridSize.sw(true)>
            <Link href="#" variant="body2">
              {React.string("Forgot password")}
            </Link>
          </Grid>
          <Grid item=true xs=Grid.GridSize.sw(true)>
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

let default = make;